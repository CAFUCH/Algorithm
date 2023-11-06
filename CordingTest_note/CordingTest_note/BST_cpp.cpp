#include "BST_h.h"
#include <windows.h>

void BST::SetCursorPosition(int x, int y)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(output, pos);
}

void BST::Print(BTreeNode* node, int x, int y)
{
    if (node == nullptr)
        return;

    SetCursorPosition(x, y);

    cout << node->data;
    Print(node->left, x - (5 / (y + 1)), y + 1);
    Print(node->right, x + (5 / (y + 1)), y + 1);
}

void BST::Insert(BTreeNode* node) { // n�� ���� Ž�� Ʈ���� ����

    if (root == NULL)            //���� Ʈ���̸� n�� ��Ʈ�� �ϰ�
        root = node;
    else
        InsertRecur(root, node); //�׷��� ������ insertRecur�� ȣ���ؼ� ��带 ����
}

void BST::InsertRecur(BTreeNode* root, BTreeNode* node) // ���� Ʈ���� �ƴ� �� ����� ��ġ ����
{
    if (GetData(node) == GetData(root)) // ��Ʈ�� ���ٸ�... -> �̷��� �����ѵ�
        return;

    else if (GetData(node) < GetData(root)) { // ��Ʈ���� �۴ٸ�

        if (GetLeftSubTree(root) == NULL) // ���� �ڽ� ��尡 ���ٸ�
            MakeLeftSubTree(root, node); // ���� �ڽ� ���� �����
        else
            InsertRecur(GetLeftSubTree(root), node); // ���� �ڽ� ��带 ��Ʈ�� �ѱ��
    }
    else {                                    // ��Ʈ���� ũ�ٸ�
        if (GetRightSubTree(root) == NULL) // ������ �ڽ� ��尡 ���ٸ�
            MakeRightSubTree(root, node); // ������ �ڽ� ���� �����
        else
            InsertRecur(GetRightSubTree(root), node); // ������ �ڽ� ��带 ��Ʈ�� �ѱ��
    }
}

void BST::Delete(int key) {

    if (root == NULL) // ��Ʈ�� ���ٸ� -> Ʈ���� �������� �ʴ´ٸ�...
        return;

    BTreeNode* parent = NULL; // ������ ����� �θ�
    BTreeNode* node = root; // ������ ���

    while (node != NULL && GetData(node) != key) { // ���� ��尡 ������ ��尡 �ƴ϶�� -> ������ ��带 ã�� ������ �ݺ�

        parent = node; // ��带 ������ ����� �θ�� ����
        node = (key < GetData(node)) ? GetLeftSubTree(node) : GetRightSubTree(node);
        // ���� ��带 ã������ ����� ���� ���� ���� ����� ��, �������� ���� �����Ѵ�.
    }

    if (node == NULL) { //������ ��尡 Ʈ���� ����

        cout << "key is not in the tree" << endl;
        return;
    }
    else Delete(parent, node);
}

void BST::Delete(BTreeNode* parent, BTreeNode* node) {

    //1. �����Ϸ��� ��尡 �ܸ� ����� ���
    if (GetLeftSubTree(node) == NULL && GetRightSubTree(node) == NULL) { // �ڽ� ��尡 ���ٸ�

        if (parent == NULL) // �����Ϸ��� ��尡 �ٳ���� �� -> �ֻ��� ����� ��
            root = NULL;
        else {

            if (GetLeftSubTree(parent) == node) // ���� �θ��� ���� �����
                MakeLeftSubTree(parent, NULL); // �θ� �������� ���� ��带 �����Ѵ�
            else
                MakeRightSubTree(parent, NULL); // �θ� �������� ������ ��带 �����Ѵ�
        }
    }

    //2. �����Ϸ��� ��尡 �ڽ� 1���� ���
    else if (GetLeftSubTree(node) == NULL || GetRightSubTree(node) == NULL) { // �� �� �ϳ��� true -> �ڽ��� �ϳ����

        //child�� ������ ����� ������ �ڽ����� ��, �����ʿ� null�� �ƴ� ���� ��带 �����´�
        BTreeNode* child = (GetLeftSubTree(node) != NULL) ? GetLeftSubTree(node) : GetRightSubTree(node);
        //�����Ϸ��� ��尡 ��Ʈ��� ��Ʈ�� child�� �����Ѵ�
        if (node == root) root = child;
        //�ƴϸ� �θ� ����� �ڽ����� child�� ����
        else {
            if (GetLeftSubTree(parent) == node) // ���� �θ��� ���� �����
                MakeLeftSubTree(parent, child); // �θ� �������� ���� ���� �����Ѵ�
            else
                MakeRightSubTree(parent, child); // �θ� �������� ������ ���� �����Ѵ�
        }
    }

    //3. �����Ϸ��� ��尡 �ڽ� 2���� ���
    else {
        // �����Ϸ��� ����� ������ ����Ʈ������ ���� ���� ���(�İ� ���,succession)�� Ž��
        BTreeNode* sp = node; // �İ� ����� �θ� ���
        BTreeNode* s = GetRightSubTree(node); // �İ� ���

        while (GetLeftSubTree(s) != NULL) { // �İ� ��忡 ���� ��尡 �����Ѵٸ� -> ���� ���� ��带 ã�ƾ��ϱ� ����...

            sp = s; // �İ� ���� �İ� ����� �θ� ��尡 �ǰ�
            s = GetLeftSubTree(s); // �İ� ����� ���� ��尡 �İ� ��尡 �ȴ�
        }

        if (GetLeftSubTree(sp) == s) // �İ� ��尡 �İ� ����� �θ� ���� �����
            MakeLeftSubTree(sp, GetRightSubTree(s)); // �İ� ����� �θ� ����� �ڽ����� �İ� ����� �ڽ��� �������ش�.
        else // �İ� ��尡 �İ� ����� �θ� ������ �����
            MakeRightSubTree(sp, GetRightSubTree(s)); // �İ� ����� �θ� ����� �ڽ����� �İ� ����� �ڽ��� �������ش�.
        // �İ� ��� ������ ������ ��忡 ����
        SetData(node, GetData(s));
        delete s;
    }
}