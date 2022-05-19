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


Node* reverse(Node *head)
{
    Node *temp=NULL;
    while(head)
    {
        Node *cur=head->next;
        head->next=temp;
        temp=head;
        head=cur;
    }
    return temp;
}
Node* addTwoLists(Node* first, Node* second) {
    // Write your code here.
    first=reverse(first);
    second=reverse(second);
    Node *res=NULL,*cur=NULL;
    int c=0;
    while(first || second)
    {
        int sm=c+(first?first->data:0)+(second?second->data:0);
        c=(sm>=10)?1:0;
        sm=sm%10;
        Node *newNode=new Node(sm);
        if(res==NULL)
        {
            res=newNode;
        }
        else
        {
            cur->next=newNode;
        }
          cur=newNode;
        if(first) first=first->next;
        if(second) second=second->next;
    }
    if(c>0)
    {
        Node *temp=new Node(c);
        cur->next=temp;
        cur=temp;
    }
    res=reverse(res);
    return res;
    
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
        struct Node* first,*tail1,*second,*tail2;
		int data1;
		cin>>data1;
		first=new Node(data1);
		tail1=first;
		for(int i=1;i<n;i++)
		{
			cin>>data1;
			tail1->next=new Node(data1);
			tail1=tail1->next;
		}
		int m;
        cin>>m;
        int data2;
        cin>>data2;
        second=new Node(data2);
        tail2=second;
        for(int i=1;i<m;i++)
        {
            cin>>data2;
            tail2->next=new Node(data2);
            tail2=tail2->next;
        }
        Node* res=addTwoLists(first,second);
        Node* temp=res;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
	}
	
	return 0;
}