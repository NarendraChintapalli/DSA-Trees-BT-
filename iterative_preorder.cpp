#include<bits/stdc++.h>
using namespace std;
struct node{
  int key;
  node *left;
  node *right;
  node(int x){
    key =x;
    left=right=NULL;
  }
};

void iterative_preorder(node *root){
  if(root==NULL) return;
   stack<node*> s;
   s.push(root);
   
   while(!s.empty()){
      node *cur=s.top();
      cout<<cur->key<<" ";
      s.pop();
      if(cur->right !=NULL){
        s.push(cur->right);
      }
      if(cur->left!=NULL){
        s.push(cur->left);
      }
    }
}
int main(){
  node *root=new node(80);
  root->left=new node(30);
  root->right = new node(40);
  root->left->right =new node(50);
  root->left->left =new node(60);
  root->right->right = new node(90);
  root->right->right->left = new node(10);

  iterative_preorder(root);
  return 0;

}

