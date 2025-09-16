#include<bits/stdc++.h>
using namespace std;

struct node{
  int key;
  node *lt;
  node *rt;

  node(int x){
    key=x;
    lt=rt=NULL;
  }
};

void inorder_traversal(node * root){
  if(root!=NULL){
    inorder_traversal(root->lt);
    cout<<root->key<<" , ";
    inorder_traversal(root->rt);
  }
}
int main(){
  node *root=new node (10);
  root->lt=new node(20);
  root->rt=new node(30);
  root->lt->lt=new node(40);
  root->lt->rt=new node(50);
  root->rt->rt=new node(80);
  root->rt->lt=new node(70);

  inorder_traversal(root);

  return 0;
}
