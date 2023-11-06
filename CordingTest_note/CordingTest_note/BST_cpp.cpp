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

void BST::Insert(BTreeNode* node) { // n을 이진 탐색 트리에 삽입

    if (root == NULL)            //공백 트리이면 n을 루트로 하고
        root = node;
    else
        InsertRecur(root, node); //그렇지 않으면 insertRecur을 호출해서 노드를 삽입
}

void BST::InsertRecur(BTreeNode* root, BTreeNode* node) // 공백 트리가 아닐 때 노드의 위치 지정
{
    if (GetData(node) == GetData(root)) // 루트와 같다면... -> 이럴리 없긴한데
        return;

    else if (GetData(node) < GetData(root)) { // 루트보다 작다면

        if (GetLeftSubTree(root) == NULL) // 왼쪽 자식 노드가 없다면
            MakeLeftSubTree(root, node); // 왼쪽 자식 노드로 만든다
        else
            InsertRecur(GetLeftSubTree(root), node); // 왼쪽 자식 노드를 루트로 넘긴다
    }
    else {                                    // 루트보다 크다면
        if (GetRightSubTree(root) == NULL) // 오른쪽 자식 노드가 없다면
            MakeRightSubTree(root, node); // 오른쪽 자식 노드로 만든다
        else
            InsertRecur(GetRightSubTree(root), node); // 오른쪽 자식 노드를 루트로 넘긴다
    }
}

void BST::Delete(int key) {

    if (root == NULL) // 루트가 없다면 -> 트리가 존재하지 않는다면...
        return;

    BTreeNode* parent = NULL; // 삭제할 노드의 부모
    BTreeNode* node = root; // 삭제할 노드

    while (node != NULL && GetData(node) != key) { // 현재 노드가 삭제할 노드가 아니라면 -> 삭제할 노드를 찾을 때까지 반복

        parent = node; // 노드를 삭제할 노드의 부모로 설정
        node = (key < GetData(node)) ? GetLeftSubTree(node) : GetRightSubTree(node);
        // 현재 노드를 찾으려는 노드의 값에 따라 현재 노드의 왼, 오른쪽의 노드로 설정한다.
    }

    if (node == NULL) { //삭제할 노드가 트리에 없음

        cout << "key is not in the tree" << endl;
        return;
    }
    else Delete(parent, node);
}

void BST::Delete(BTreeNode* parent, BTreeNode* node) {

    //1. 삭제하려는 노드가 단말 노드일 경우
    if (GetLeftSubTree(node) == NULL && GetRightSubTree(node) == NULL) { // 자식 노드가 없다면

        if (parent == NULL) // 삭제하려는 노드가 근노드일 때 -> 최상위 노드일 때
            root = NULL;
        else {

            if (GetLeftSubTree(parent) == node) // 현재 부모의 왼쪽 노드라면
                MakeLeftSubTree(parent, NULL); // 부모를 기준으로 왼쪽 노드를 삭제한다
            else
                MakeRightSubTree(parent, NULL); // 부모를 기준으로 오른쪽 노드를 삭제한다
        }
    }

    //2. 삭제하려는 노드가 자식 1개일 경우
    else if (GetLeftSubTree(node) == NULL || GetRightSubTree(node) == NULL) { // 둘 중 하나만 true -> 자식이 하나라면

        //child는 삭제할 노드의 유일한 자식으로 왼, 오른쪽에 null이 아닌 곳의 노드를 가져온다
        BTreeNode* child = (GetLeftSubTree(node) != NULL) ? GetLeftSubTree(node) : GetRightSubTree(node);
        //삭제하려는 노드가 루트라면 루트를 child로 변경한다
        if (node == root) root = child;
        //아니면 부모 노드의 자식으로 child를 연결
        else {
            if (GetLeftSubTree(parent) == node) // 현재 부모의 왼쪽 노드라면
                MakeLeftSubTree(parent, child); // 부모를 기준으로 왼쪽 노드로 설정한다
            else
                MakeRightSubTree(parent, child); // 부모를 기준으로 오른쪽 노드로 설정한다
        }
    }

    //3. 삭제하려는 노드가 자식 2개일 경우
    else {
        // 삭제하려는 노드의 오른쪽 서브트리에서 가장 작은 노드(후계 노드,succession)를 탐색
        BTreeNode* sp = node; // 후계 노드의 부모 노드
        BTreeNode* s = GetRightSubTree(node); // 후계 노드

        while (GetLeftSubTree(s) != NULL) { // 후계 노드에 왼쪽 노드가 존재한다면 -> 가장 작은 노드를 찾아야하기 때문...

            sp = s; // 후계 노드는 후계 노드의 부모 노드가 되고
            s = GetLeftSubTree(s); // 후계 노드의 왼쪽 노드가 후계 노드가 된다
        }

        if (GetLeftSubTree(sp) == s) // 후계 노드가 후계 노드의 부모 왼쪽 노드라면
            MakeLeftSubTree(sp, GetRightSubTree(s)); // 후계 노드의 부모 노드의 자식으로 후계 노드의 자식을 연결해준다.
        else // 후계 노드가 후계 노드의 부모 오른쪽 노드라면
            MakeRightSubTree(sp, GetRightSubTree(s)); // 후계 노드의 부모 노드의 자식으로 후계 노드의 자식을 연결해준다.
        // 후계 노드 정보를 삭제할 노드에 복사
        SetData(node, GetData(s));
        delete s;
    }
}