#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int preorderIndex = 0;
    unordered_map<int, int> nodeMap;

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        nodeMap.clear();
        int length = inorder.size();
        for (int i = 0; i < length; i++) {
            nodeMap[inorder[i]] = i;
        }
        preorderIndex = 0;
        return createTree(preorder, 0, length - 1);
    }

private:
    TreeNode* createTree(vector<int>& preorder, int start, int end) {
        if (start > end)
            return nullptr;
        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = nodeMap[rootVal];
        root->left = createTree(preorder, start, mid - 1);
        root->right = createTree(preorder, mid + 1, end);
        return root;
    }
};

// Function to print the inorder traversal of a binary tree
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution solution;
    TreeNode* root = solution.buildTree(preorder, inorder);

    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}