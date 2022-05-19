ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
   ListNode* first=headA,*second=headB;
   while(first!=second)
     {
         if(first!=NULL) first=first->next;
         else first=headB;
         if(second!=NULL) second=second->next;
         else second=headA;
     }
   if(first!=NULL) return first;
   else return NULL;
}