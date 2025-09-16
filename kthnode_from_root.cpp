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

void kth_node(node *root,int k){
 // cout<<k<<" ";
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
  root->lt->lt=new node(40);
  root->lt->rt=new node(50);
  root->rt->rt=new node(80);
  // root->rt->lt=new node(70);


  int k;
  cout<<"enter the k = ";
  cin>>k;
  kth_node(root,k);
  return 0;
}