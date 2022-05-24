// Time Complexity O(N) and Space O(N)
bool isPalindrome(ListNode* head) {
    stack<int> st;
    ListNode* temp=head;
    while(temp!=NULL)
    {
        st.push(temp->val);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
       
         int dat=st.top(); 
        if(dat!=temp->val)
            return false;
        temp=temp->next;
        st.pop();

    }
    return true;
}


// Time O(N) and Space O(1)


bool isPalindrome(ListNode* head) {

    ListNode* slow=head,*fast=head;
    int n=0;
    while(slow!=NULL)
    {
        n++;
        slow=slow->next;
    }
    if(n%2==0)
        n=n/2;
    else
        n=(n/2)+1;
    for(int i=1;i<n;i++)
    {
        fast=fast->next;
    }
    fast->next=reverseList(fast->next);
    slow=head;
    fast=fast->next;
    while(fast!=NULL)
    {
        if(slow->val!=fast->val) return false;
        slow=slow->next;
        fast=fast->next;
    }
    return true;
    
}



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
