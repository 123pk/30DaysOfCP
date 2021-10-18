/*
Platform :- Leetcode
Approach :- Search for 'x' and 'y' in tree and take care of their parent and their height if height is same and parent are different then they are cousins else they are not 
*/
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
    bool isCousins(TreeNode* root, int x, int y) {
        int h1=-1,h2=-1,c=0;
        queue<pair<TreeNode*,TreeNode*>>P;
        P.push({root,root});
        TreeNode* parent1;
        TreeNode* parent2;
        while(!P.empty()){
            int d = P.size();
            for(int i=0;i<d;++i){
                pair<TreeNode*,TreeNode*> temp = P.front();
                P.pop();
                if(temp.first->val==x){
                    h1=c;
                    parent1 = temp.second;
                }
                if(temp.first->val==y){
                    h2=c;
                    parent2 = temp.second;
                }
                if(temp.first->left){
                    P.push({temp.first->left,temp.first});
                }
                
                if(temp.first->right){
                    P.push({temp.first->right,temp.first});
                }
            }
            c++;
        }
        
        if(h1==-1 && h2==-1)return false;
        
        return (h1==h2)&&(parent1!=parent2);
    }
};
