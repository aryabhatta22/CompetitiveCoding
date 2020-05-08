/***************************************
Description: In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 

Example 1:


Input: root = [1,2,3,4], x = 4, y = 3
Output: false
Example 2:


Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true
Example 3:



Input: root = [1,2,3,null,4], x = 2, y = 3
Output: false
 
***************************************/

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
public:
    vector<int> dfs(TreeNode* root,int target,int depth,int parent)
    {
        if(root==NULL)
            return {};
        
        if(root->val==target){
            return {depth,parent};
        }else{
            parent = root->val;
            vector<int> l = dfs(root->left,target,depth+1,parent);
            vector<int> r = dfs(root->right,target,depth+1,parent);
            
            if(l.empty())
                return r;
            else
                return l;
        }
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> d1 = dfs(root,x,0,-1);
        vector<int> d2 = dfs(root,y,0,-1);
        if(!d1.empty() && !d2.empty() && d1[0]==d2[0] && (d1[1]!=d2[1]))
            return true;
        else
            return false;
    }
};