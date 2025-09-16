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

int height(node*root){
  if(root==NULL){
    return 0;
  }
  else{
    return max(height(root->lt),height(root->rt))+1;
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

  auto h =height(root);;
  cout<<"height="<<h<<endl;

  return 0;
}
