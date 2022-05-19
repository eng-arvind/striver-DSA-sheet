class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            //Time Complexity O(max(l1,l2)) space complexity O(n)
            
            if(l1==NULL) return l2;
            if(l2==NULL) return l1;
            int cr=0;
            ListNode* dummy=new ListNode();
            ListNode* start=dummy;
            while(l1 || l2 || cr!=0)
            {
                int tl=0;
                if(l1!=NULL){
                    tl+=l1->val;
                    l1=l1->next;  
                }     
                if(l2!=NULL){
                    tl+=l2->val; 
                     l2=l2->next;
                }
                tl+=cr;
                cr=tl/10;
               ListNode* newnode=new ListNode(tl%10);
                start->next=newnode;
                start=newnode;
               
            }
            return dummy->next;
    }
};