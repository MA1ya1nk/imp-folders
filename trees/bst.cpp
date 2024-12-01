#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* left;
  node* right;

   node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }
};

node* buildtree(node* &root,int val){
     if(root == NULL){
          node* temp=new node(val);
          return temp;
     }
     else if(root->data > val){
        root->left=buildtree(root->left,val);
     }
     else{
        root->right=buildtree(root->right,val);
     }

     return root;
}

node* printbst(node* root){
    cout<<"enter the values"<<endl;
    int val;
    cin>>val;
    while(val != -1){
        root=buildtree(root,val);
        cin>>val;
    }
    return root;
}
int minVal(node* root){
    if(root->left==NULL){
        
        return root->data;
    }
    int least=minVal(root->left);
    cout<<"min value"<<least<<endl;
    return least;
}

node* bstdlt(node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
    // for zero child
    if((root->left==NULL) && (root->right==NULL)){
        delete root;
        return NULL;
    }

    //for one child node
    if(root->left==NULL && root->right!=NULL){
        node* temp=root->right;
        delete root;
        
        return temp;
    }
    if(root->left!=NULL && root->right==NULL){
        node* temp=root->left;
        delete root;
        
        return temp;
    }

    //for two child node
    if(root->left!=NULL && root->right!=NULL){
        
        int mini=minVal(root->right);
        root->data=mini;
        root->right=bstdlt(root->right,mini);
        
        return root;
    }


    }

    else if(root->data > val){
       root->left=bstdlt(root->left,val);
       return root;
    }
    else{
        root->right=bstdlt(root->right,val);
        return root;
    }
    return root;
}





void inorder(node* &root){
    if(root==NULL){
        return ;
    }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
int main(){
    node* root=NULL;
    root=printbst(root);
    inorder(root);
    int ele;
    cout<<"enter the element to delete"<<endl;
    cin>>ele;
    root=bstdlt(root,ele);
    inorder(root);


}
