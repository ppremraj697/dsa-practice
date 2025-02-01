#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root)
{
    int maxxDepth = 0;
    int currDepth = 0;
    depthHelper(root, currDepth, maxxDepth);
    return maxxDepth;
}

void depthHelper(TreeNode *root, int &currDepth, int &maxxDepth)
{
    if (root == NULL)
    {
        maxxDepth = max(currDepth, maxxDepth);
        return;
    }

    currDepth++;
    depthHelper(root->left, currDepth, maxxDepth);
    depthHelper(root->right, currDepth, maxxDepth);
    currDepth--;
}

int main()
{
    return 0;
}