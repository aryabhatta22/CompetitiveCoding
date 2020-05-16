/***************************************
Description: Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.

You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.

Example 1:

Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL
Example 2:

Input: 2->1->3->5->6->4->7->NULL
Output: 2->3->6->7->1->5->4->NULL
***************************************/

ListNode* oddEvenList(ListNode* head) {
        
        if(head == nullptr)
            return head;
        
        ListNode* oddEnd = head;
        if(oddEnd->next == nullptr)
            return head;
        
        ListNode* evenEnd = oddEnd->next;
        if(evenEnd->next == nullptr)
            return head;
        
        ListNode* itr = evenEnd->next;
        
        do {
            if(itr->next == nullptr) {
                evenEnd->next = nullptr;
            } else {
                evenEnd->next = itr->next;
                evenEnd = itr->next;
            }
            
            itr->next = oddEnd->next;
            oddEnd->next = itr;
            oddEnd = itr;
            
            if(evenEnd->next != nullptr) 
                itr = evenEnd->next;
            else
                return head;
        }while(1);
        
        return head;
        
        
    }