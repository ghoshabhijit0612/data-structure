///leetcode question link ->>https://leetcode.com/problems/merge-two-binary-trees/
// -----------------code--------------
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
        void inorder(TreeNode* root,vector<int>&v){
            if(root == NULL) return;
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    vector<int> mergeArray(vector<int>a,vector<int>b){
        vector<int>ans(a.size()+ b.size());
        int i=0,j=0,k=0;
        while( i< a.size() && j< b.size()){
            if(a[i]<b[j]){
                ans[k++] = a[j];
                i++;
            }
            else{
                ans[k++]= b[j];
                j++;
                
            }
        }
        while(i< a.size()){
            ans[k++] = a[i];
            i++;
        }
        while(j< b.size()){
            ans[k++] = b[j];
            j++;
        }
        return ans;
    }
    TreeNode* InorderToBst(int s,int e,vector<int>&v){
        if(s>e){
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = InorderToBst(s,mid-1,v);
        root->right = InorderToBst(mid+1,e,v);
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        vector<int> bst1,bst2;
        inorder(root1,bst1);
        inorder(root2,bst2);
        vector<int>mergeArray1 = mergeArray(bst1,bst2);
        int s=0;
        int e= mergeArray1.size()-1;
        return InorderToBst(s,e,mergeArray1);
    }
};
