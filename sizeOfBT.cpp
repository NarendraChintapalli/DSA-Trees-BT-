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

int size_bt(node *root){
  if(root==NULL) return 0;
  else return (size_bt(root->left)+size_bt(root->right)+1);
}
int main(){
  node *root=new node(80);
  root->left=new node(30);
  root->right = new node(40);
  root->left->right =new node(50);
  root->left->left =new node(60);
  root->right->right = new node(90);
  root->right->right->left = new node(10);

  auto size=size_bt(root);

  cout<<"size of bt = "<<size<<endl;
  return 0;

}

