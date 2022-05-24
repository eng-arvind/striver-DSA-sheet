// Time Complexity O(N) and pace Complexity o(1)
class Solution {
public:
    ListNode* isCycle(ListNode* head){
        if(!head) return NULL;
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
       
        ListNode* slow=head;
        ListNode* fast=isCycle(head);
        if(fast==NULL) return NULL;
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};