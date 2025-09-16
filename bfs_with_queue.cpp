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

void bfs(node* root){
  if(root==NULL) return;

  queue<node *> q;
  q.push(root);
  while(!q.empty()){
    node *temp =q.front();
    q.pop();
    cout<<temp->key<<" ";
    if(temp->lt!=NULL){
      q.push(temp->lt);
    }
    if(temp->rt!=NULL){
      q.push(temp->rt);
    }
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

  bfs(root);
  return 0;
}