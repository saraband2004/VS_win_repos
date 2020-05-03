/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        aux(root);
        TreeLinkNode *p;
        p=root;
        while(p!=0){
            p->next=0;
            p=p->right;
        }
    }
    
public: int aux(TreeLinkNode *root){
    if (root==0){return 0;}
    if (root->left==0){return 0;}
    
    TreeLinkNode *L;
    TreeLinkNode *R;
    L=root->left;
    R=root->right;
    
    while(L!=0){L->next=R;L=L->right;R=R->left;}
    aux(root->left);
    aux(root->right);
    return 0;
    
    
}    
    
};