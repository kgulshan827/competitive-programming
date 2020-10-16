Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.

You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
  
  solution:


This basically contains the main funtion:

ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
            return head;
        ListNode *odd=head,*even=head->next,*odd_head=head->next;
      while(even && even->next)
      {
          odd->next=odd->next->next;
          even->next=even->next->next;
          odd=odd->next;
          even=even->next;
          
      }
        odd->next=odd_head;
        
        return head;
    }
