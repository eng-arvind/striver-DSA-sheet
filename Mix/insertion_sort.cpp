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
void insertionSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int val=a[i],j=i;
		while(j>0 && val<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=val;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		insertionSort(a,n);
	}
	
	return 0;
}