// Time Complexity O(total node in liked list) 
//Space Complexity O(1)


Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL) return root;
   root->next=flatten(root->next);
   root=mergeList(root,root->next);
   return root;
}


Node* mergeList(Node* l1,Node* l2)
{
    Node* temp=new Node(0);
    Node* res=temp;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            temp->bottom=l1;
            l1=l1->bottom;
            temp=temp->bottom;
            temp->next=NULL;
        }
        else
        {
            temp->bottom=l2;
            l2=l2->bottom;
            temp=temp->bottom;
            temp->next=NULL;
        }
    }
    if(l1) temp->bottom=l1;
    else
    temp->bottom=l2;
    
    return res->bottom;
}