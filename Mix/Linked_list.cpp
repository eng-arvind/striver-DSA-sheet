#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 10 00000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

ListNode* removeKthFromEnd(ListNode* head, int k) {
        ListNode* dumy=new ListNode();
        dumy->next=head;
        ListNode * slow=dumy;
        ListNode* fast=dumy;
        if(head==NULL || n==0)
            return head;
        for(int i=1;i<=k;i++)
            fast=fast->next;
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dumy->next;
        
    }


 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Write your code here.
   if(list1==NULL)
       return list2;
    if(list2==NULL)
        return list1;
    if(list1->val > list2->val)
    {
        swap(list1,list2);
    }
  ListNode *res=list1;
    while(list1!=NULL && list2!=NULL)
    {
        ListNode *temp=NULL;
        while(list1 != NULL && list1->val<=list2->val)
        {
            temp=list1;
            list1=list1->next;
        }
        temp->next=list2;
        swap(list1,list2);
    }
    
    return res;
        
    }


struct Node* findMiddle(struct Node *head) {

    if(head==NULL || head->next==NULL)
        return head;
    Node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {  
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}


 struct Node* revereLinkedList(struct Node *head)
    {
        struct Node *temp=NULL,*temp1=head;
        while(head!=NULL)
        {
            temp1=temp1->next;
            head->next=temp;
            temp=head;
            head=temp1;
        }
        return temp;
    }


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--  )
	{
		int n;
		cin>>n;
		int data1;
		cin>>data1;
		struct Node* head,*tail;
		head=new Node(data1);
		tail=head;
		for(int i=1;i<n;i++)
		{
			cin>>data1;
			tail->next=new Node(data1);
			tail=tail->next;
		}
		head=revereLinkedList(head);
		struct Node * mid=findMiddle(head);
		cout<<"Middle Element: "<<mid->data<<endl;
		struct Node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}

	}
	
	return 0;
}