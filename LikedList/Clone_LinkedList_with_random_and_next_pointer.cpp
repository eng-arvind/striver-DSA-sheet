class Solution {
public:
    Node* copyRandomList(Node* head) {
// First Method
        // Time Complexity O(N) 
        // Space Complexity O(N)
        
//     map< Node*,Node* > mp;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         Node* newnode=new Node(temp->data);
//         mp[temp]=newnode;
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL)
//     {
//         mp[temp]->next=mp[temp->next];
//         mp[temp]->random=mp[temp->random];
//         temp=temp->next;
//     }
    
//     return mp[head];
// }
        
        
        
        // Second Method
        // Time Complexity O(N) 
        // Space Complexity O(1)
        Node* iter=head,*front=head;
        while(iter!=NULL)
        {
            front=iter->next;
            Node* newnode=new Node(iter->val);
            iter->next=newnode;
            newnode->next=front;
            iter=front;
        }
        iter=head;
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            {
                iter->next->random=iter->random->next;
            }
            iter=iter->next->next;
        }
        Node* dummy=new Node(0);
        Node* cur=dummy;
        iter=head;
        front=head;
        while(iter!=NULL)
        {
            front=iter->next->next;
            cur->next=iter->next;
            iter->next=front;
            cur=cur->next;
            iter=iter->next;
        }
        return dummy->next;
        
    }
};