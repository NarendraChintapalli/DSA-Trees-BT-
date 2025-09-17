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

int max_node(node *root){
  if(root==NULL) return INT_MIN;

  return max(root->key, max(max_node(root->left), max_node(root->right)));
  
}
int main(){
  node *root=new node(80);
  root->left=new node(30);
  root->right = new node(40);
  root->left->right =new node(50);
  root->left->left =new node(60);
  root->right->right = new node(90);
  root->right->right->left = new node(10);

  auto max_num =max_node(root);

  cout<<"maximum in tree = "<<max_num<<endl;
  return 0;

}

