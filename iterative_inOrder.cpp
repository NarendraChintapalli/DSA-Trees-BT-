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

void iterative_inorder(node *root){
  if(root==NULL){
    return;
  }
  stack<node*>s;
  node*cur=root;
  while(cur!=NULL || !s.empty()){
    while(cur!=NULL){
      s.push(cur);
      cur=cur->left;
    }
    cur=s.top();
    s.pop();
    cout<<cur->key<<" ";
    cur=cur->right;
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

  iterative_inorder(root);
  return 0;

}

