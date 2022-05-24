 void deleteNode(ListNode* node) {
        
//         int nxtdata=node->next->val;
//         node->val=nxtdata;
//         node->next=node->next->next;
        swap(*node,*(node->next));
        
    }