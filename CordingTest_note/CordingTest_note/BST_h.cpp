#include "BST_h.h"

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = new BTreeNode;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTreeNode* GetLeftSubTree(BTreeNode* nd)
{
	return nd->left;
}

BTreeNode* GetRightSubTree(BTreeNode* nd)
{
	return nd->right;
}

void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}
int GetData(BTreeNode* bt) {
	return bt->data;
}
void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {

	if (main->left != NULL) {
		delete main->left;
	}
	main->left = sub;
}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {

	if (main->right != NULL) {
		delete main->left;
	}
	main->right = sub;
}
void PreorderTraverse(BTreeNode* bt)
{
	// �����غ���!
	if (bt == NULL) return;
	cout << bt->data;
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
	return;
}
void InorderTraverse(BTreeNode* bt)
{
	// �����غ���!
	if (bt == NULL) return;
	InorderTraverse(bt->left);
	cout << bt->data;
	InorderTraverse(bt->right);
	return;
}
void PostorderTraverse(BTreeNode* bt)
{
	// �����غ���!
	if (bt == NULL) return;
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data;
	return;
}