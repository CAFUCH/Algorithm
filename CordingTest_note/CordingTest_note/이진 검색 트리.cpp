//#include <iostream>
//using namespace std;
//
//struct Node {
//
//    int data;
//    Node* left;
//    Node* right;
//};
//
//Node* Root = NULL;
//int n;
//Node* MakeNode(int n);
//void Insert(Node* root, Node* node);
//void Post(Node* node);
//
//int main() {
//	// https://www.acmicpc.net/problem/5639
//
//    while (cin >> n)
//        Insert(Root, MakeNode(n));
//    
//    Post(Root);
//}
//
//Node* MakeNode(int n)
//{
//    Node* node = new Node;
//    node->data = n;
//    node->left = NULL;
//    node->right = NULL;
//    return node;
//}
//
//void Insert(Node* root, Node* node)
//{
//    if (Root == NULL)
//        Root = node;
//    else {
//        if (root->data == node->data)
//            return;
//        else if (root->data < node->data) {
//            if (root->right == NULL)
//                root->right = node;
//            else
//                Insert(root->right, node);
//        }
//        else {
//            if (root->left == NULL)
//                root->left = node;
//            else
//                Insert(root->left, node);
//        }
//    }
//}
//
//void Post(Node* node)
//{
//    if (node == NULL)
//        return;
//
//    Post(node->left);
//    Post(node->right);
//    cout << node->data << '\n';
//}
