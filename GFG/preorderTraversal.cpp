#include <bits/stdtr1c++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node *root)
    {
        // write code here
        vector<int> ans;

        preorder2(root, ans);

        return ans;
    }

    void preorder2(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        ans.push_back(root->data);
        preorder2(root->left, ans);
        preorder2(root->right, ans);
    }
};

int main()
{
}