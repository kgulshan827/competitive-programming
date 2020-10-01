Question:
Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing links between nodes.
Given linked list
85 15 4 20 
Reversed Linked list 
20 4 15 85 
  
Soln-:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
  
};
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 




 void reverse(Node **head)
{
  Node *prev=NULL,*current=*head,*next=NULL,*newhead=NULL;
  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  *head=prev;
  
}

int main() {
  // your code goes here  
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* head=NULL;
    Node* head1=NULL;
    Node* head2=NULL;
    head=new Node();
    head1=new Node();
    head2=new Node();
    head->data=2;
    head->next=head1;
    head1->data=3;
    head1->next=head2;
    head2->data=2;
    head2->next=NULL;

    printList(head);
    dupli(&head);
    printList(head);

  }

