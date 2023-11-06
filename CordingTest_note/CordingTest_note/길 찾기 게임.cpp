#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int index;
    Node* left;
    Node* right;
};

vector<vector<int>> answer;

Node* MakeTree(vector<vector<int>> nodeinfo, int start, int end);
void preorder(Node* node);
void postorder(Node* node);

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {

    answer.resize(2);

    for (int i = 0; i < nodeinfo.size(); i++)
        nodeinfo[i].push_back(i + i);

    sort(nodeinfo.begin(), nodeinfo.end());

    Node* tree = MakeTree(nodeinfo, 0, nodeinfo.size() - 1);
    
    preorder(tree);
    postorder(tree);

    return answer;
}

Node* MakeTree(vector<vector<int>> nodeinfo, int start, int end) {

    if (start > end)
        return NULL;

    int maxHeight = nodeinfo[start][1];
    int curIdx = start;

    for (int i = start + 1; i <= end; ++i) {

        if (maxHeight < nodeinfo[i][1]) {

            maxHeight = nodeinfo[i][1];
            curIdx = i;
        }
    }

    Node* node = new Node();

    node->index = nodeinfo[curIdx][2];
    node->left = MakeTree(nodeinfo, start, curIdx - 1);
    node->right = MakeTree(nodeinfo, curIdx + 1, end);

    return node;
}

void preorder(Node* node)
{
    if (node == NULL)
        return;

    answer[0].push_back(node->index);
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node* node)
{
    if (node == NULL)
        return;

    postorder(node->left);
    postorder(node->right);
    answer[1].push_back(node->index);
}
