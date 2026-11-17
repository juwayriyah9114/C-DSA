#include<iostream>
#include<vector>
#include<queue>

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

void inorder(node *root)
{
   if(root==NULL){
      return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

void postorder(node *root)
{
   if(root==NULL){
      return;
   }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
void preorder_traversal(node* root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";
   preorder_traversal(root->left);
   preorder_traversal(root->right);
}

void levelOrder(node * root)
{
   if(root==NULL){
      return;
   }

   queue<node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
      node* temp=q.front();
      q.pop();

      if(temp==NULL){
        cout<<endl;
         if(q.empty()){
           break;
         }
          q.push(NULL);
      }

      else{
         cout<<temp->data<<" ";
         if(temp->left!=NULL){
            q.push(temp->left);
         }
         if(temp->right!=NULL){
            q.push(temp->right);
         }
      }
   }
}

int height(node *root)
{
   if (root==NULL){
      return 0;
   }
   int leftHt=height(root->left);
   int rightHt=height(root->right);

   int currentHt=max(leftHt,rightHt)+1;
   return currentHt;
}

int countNodes(node *root)
{
   if(root==NULL){
      return 0;
   }
   int leftCount=countNodes(root->left);
   int rightCount=countNodes(root->right);

   return leftCount+rightCount+1;
}

int sumNodes(node *root)
{
   if(root==NULL){
      return 0;
   }
   int leftSum=sumNodes(root->left);
   int rightSum=sumNodes(root->right);

   return leftSum+rightSum+root->data;
}
int main(){
   vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   node* root=buildtree(nodes);
   cout<<"Root node is: "<<root->data<<endl;
   cout<<"Preorder traversal: "<<endl;
   preorder_traversal(root);
   cout<<endl;
   cout<<"Inorder traversal: "<<endl;
   inorder(root);
   cout<<endl;
   cout<<"Postorder traversal: "<<endl;
   postorder(root);
   cout<<endl;
   cout<<"Level-order traversal: "<<endl;
   levelOrder(root);
   cout<<endl;
   cout<<"Height of the tree: "<<height(root)<<endl;
   cout<<"Number of nodes in the tree: "<<countNodes(root)<<endl;
   cout<<"Sum of all nodes in the tree: "<<sumNodes(root)<<endl;
   return 0;

}
