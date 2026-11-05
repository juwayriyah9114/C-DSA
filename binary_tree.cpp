#include<iostream>
#include<vector>

using namespace std;

class node{
   public:
   int data;
      node* left;
      node* right;

      node(int d){
         data=d;
         left=NULL;
         right=NULL;
      }
};

static int idx=-1;
node *buildtree(vector<int>nodes)
{
   idx++;
   if(nodes[idx]==-1){
      return NULL;
   }
   
   node* currnode=new node(nodes[idx]);
   currnode->left=buildtree(nodes);
   currnode->right=buildtree(nodes);

   return currnode;
}

void preorder_traversal(node* root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";
   preorder_traversal(root->left);
   preorder_traversal(root->right);
}
int main(){
   vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   node* root=buildtree(nodes);
   cout<<"Root node is: "<<root->data<<endl;
   cout<<"Preorder traversal: "<<endl;
   preorder_traversal(root);
   return 0;

}
