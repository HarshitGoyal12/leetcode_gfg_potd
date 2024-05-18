// 979. Distribute Coins in Binary Tree

#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
void answer(TreeNode*parent,TreeNode* child,int &cnt){
    if(!child){
        return ;
    }
    answer(child,child->left,cnt);
    answer(child,child->right,cnt);
    if(child->val>1){
        int extraCoins=child->val-1;
        child->val=1;
        parent->val+=extraCoins;
        cnt+=extraCoins;
    }
    else if(child->val<1){
  int needed=1+abs(child->val);
  child->val=1;
  parent->val-=needed;
  cnt+=needed;
    }
}
 int distributeCoins(TreeNode* root) {
        int cnt=0;
        answer(root,root,cnt);
        return cnt;
    }
};