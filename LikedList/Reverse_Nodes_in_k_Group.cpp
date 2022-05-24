
//Time COmplexity O(n) and space complexity O(1)

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* dummy=new ListNode(0);
    dummy->next=head;
    ListNode* cur=dummy,*nxt=dummy,*prev=dummy;
    int len=0;
    while(cur->next)
    {
        len++;
        cur=cur->next;
    }
    cur=dummy;
    while(len>=k)
    {
        cur=prev->next;
        nxt=cur->next;
        for(int i=1;i<k;i++)
        {
            cur->next=nxt->next;
            nxt->next=prev->next;
            prev->next=nxt;
            nxt=cur->next;
        }
        prev=cur;
        len=len-k;
    }
    return dummy->next;

}


//if B[k1,k2,k3,..] is given

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    // Write your code here.
    if(head==NULL || head->next==NULL || n==1)
        return head;
    int len=0;
    Node* dummy=new Node(0);
    dummy->next=head;
    Node* cur=dummy;
    Node* nxt=dummy;
    Node* prev=dummy;
    
    while(cur->next)
    {
        len++;
        cur=cur->next;
    }
    cur=dummy;
    for(int i=0;i<n;i++)
    {
        if(len>=b[i])
        {
            cur=prev->next;
            nxt=cur->next;
           for(int j=1;j<b[i];j++)
                {
                cur->next=nxt->next;
                nxt->next=prev->next;
               prev->next=nxt;
               nxt=cur->next;
                 } 
                prev=cur;
             len=len-b[i];
        }
        else
        {
            if(len>0)
            {
             cur=prev->next;
            nxt=cur->next;
           for(int j=1;j<len;j++)
                {
                    cur->next=nxt->next;
                    nxt->next=prev->next;
                    prev->next=nxt;
                    nxt=cur->next;
                 } 
                prev=cur;
            }
            break;
        }
    } 
    return dummy->next;
}