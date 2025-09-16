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

int height(node *root){
  if(root==NULL) return 0;
  else return max(height(root->lt),height(root->rt))+1;
}

void kth_node(node*root,int k){
  if(root==NULL){
    return;
  }
  if(k==0){
    cout<<root->key<<" ";
    return;
  }
  else{
    kth_node(root->lt,k-1);
    kth_node(root->rt,k-1);
  }
}
int main(){
  node *root=new node (10);
  root->lt=new node(20);
  root->rt=new node(30);
  root->lt->lt=new node(8);
  root->lt->rt=new node(7);
  root->rt->rt=new node(6);
  root->lt->rt->lt=new node(9);
  root->lt->rt->rt=new node(15);

  int h=height(root);
  for(int i=0;i<h;i++){
      kth_node(root,i);
  }

  return 0;
}