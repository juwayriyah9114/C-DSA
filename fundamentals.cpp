#include<iostream>
using namespace std;
class Node
{
   public:
   int data;
   Node *next;

   Node(int val)
   {
      data=val;
      next=NULL;
   }

   // ~Node()
   // {
   //    if(next!=NULL)
   //    {
   //       delete next;
   //       next=NULL;
   //    }
   // }
};

class List{
   Node *head;
   Node *tail;
   public:
      List()
      {
         head=NULL;
         tail=NULL;
      }
      // ~List()
      // {
      //    if(head!=NULL)
      //    {
      //       delete head;
      //       head=NULL;
      //    }
      // }
      void pop_front()
      {
         Node* temp=head;
         head=head->next;
         delete temp;
      }

      void push_front(int val)
      {
         Node * newNode=new Node(val);
         if(head==NULL)
         {
            head=newNode;
            tail=newNode;
         }
         else
         {
            newNode->next= head;
            head=newNode;
         }
      }
      void push_back(int val)
      {
         Node*newNode=new Node(val);
         if(head==NULL)
         {
            head=newNode;
            tail=newNode;
         }
         else
         {
            tail->next=newNode;
            tail=newNode;
         }
      }
      void print()
      {
         Node*temp=head;
         while(temp!=NULL)
         {
            cout<<temp->data<<" ";
            temp=temp->next;
         }
         cout<<endl;
      }

      void insert(int val,int pos)
      {
         Node *temp=head;
         for(int i=1;i<=pos;i++)
         {
            temp=temp->next;
         }
         Node *newnode= new Node(val);
         Node *temp1=head; 
         for(int i=1;i<pos;i++)
         {
            temp1=temp1->next;
         }
         temp1->next=newnode;
         newnode->next=temp;

      }

      void pop_back()
      {
         Node *temp=head;
         while(temp->next->next!=NULL)
         {
            temp=temp->next;
         }
         temp->next=NULL;
         delete tail;
         tail=temp;
        
      }

};

int main()
{
   List l1;

   l1.push_front(3);
   l1.push_front(2);
   l1.push_front(1);
   l1.push_back(4);
   //l1.print();
   l1.insert(5,2);
   l1.print();
   l1.pop_back();
   l1.print();
   return 0;
}
