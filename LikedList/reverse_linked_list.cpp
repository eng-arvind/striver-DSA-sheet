 ListNode* reverseList(ListNode* head) {
        
     ListNode* temp=NULL;
        while(head!=NULL){
            ListNode* cur=head->next;
            head->next=temp;
            temp=head;
            head=cur;
        }
        head=temp;
        return head;
    }