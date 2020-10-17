
Question:
Given a linked list, check if the linked list has loop or not. Below diagram shows a linked list with a loop. 
  
  

  
Solution:

This contains a detecloop function which takes head pointer as input and return true or false if there is a loop or not.
  
  bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL && slow!=NULL && slow->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
