/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
     unordered_map<int, int> postMap; 
    int preIndex = 0; 
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& postorder, int left, int right) {
        if (left > right || preIndex >= preorder.size()) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        if (left == right) {
            return root;
        }
        int mid = postMap[preorder[preIndex]];
        root->left = buildTreeHelper(preorder, postorder, left, mid);
        root->right = buildTreeHelper(preorder, postorder, mid + 1, right - 1);
        
        return root;
    }
    
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = postorder.size();
        for (int i = 0; i < n; i++) {
            postMap[postorder[i]] = i;
        }
        preIndex = 0;
        return buildTreeHelper(preorder, postorder, 0, n - 1);
    }
};