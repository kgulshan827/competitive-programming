Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.

You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
  
  Examples:
Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL
Input: 2->1->3->5->6->4->7->NULL
Output: 2->3->6->7->1->5->4->NULL
  
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
