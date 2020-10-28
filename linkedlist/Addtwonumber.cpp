
Question:

Given two numbers represented by two linked lists of size N and M. The task is to return a sum list. The sum list is a linked list representation of the addition of two input numbers.

Example:
Input:
3-4-5
4-5
Output:
3-9-0
Solution:
Node* newNode(int data) 
{ 
    Node* new_node = new Node(data); 
 
    new_node->next = NULL; 
    return new_node; 
} 
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
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    Node *temp=NULL,*prev=NULL,*res=NULL;
    int carry=0;
    first=reverse(first);
    second=reverse(second);
    while(first!=NULL || second!=NULL)
    {
        int sum=carry+(first?first->data:0)+(second?second->data:0);
    
         carry=sum/10;
        sum=sum%10;
       
        temp=newNode(sum);
        if(res==NULL)
        {
            res=temp;
        }
        else{
            prev->next=temp;
        }
        prev=temp;
         if (first) 
            first = first->next; 
        if (second) 
            second = second->next; 
    }
    if(carry>0)
    {
        temp->next=newNode(carry);
    }
    res=reverse(res);
    return res;
}

