
Question:
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

 
Example:
Input:
1->2->9
Output:
 1-3-0
Input:
9-9-9
Output:
1-0-0-0

Solution:
This is main function of the code.
 
Node* reverse(Node *head)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node *add(Node *head)
{
    Node *res=head,*curr=head,*temp=NULL;
    int carry=1,sum=0;
    while(head!=NULL)
    {
        sum=carry+(head->data);
        carry=sum/10;
        head->data=sum%10;
        temp=head;
        head=head->next;
        
    }
    if(carry>0)
    {
    Node *temp1=new Node(carry);
    temp1->next=NULL;
    temp->next=temp1;
    }
    return res;
}
Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    head=reverse(head);
    head=add(head);
    head=reverse(head);
    return head;
    
  
}


