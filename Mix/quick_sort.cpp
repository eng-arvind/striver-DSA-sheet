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
int partition(int a[],int l,int h)
{
 int pivot=a[h];
 int i=l-1;
 for(int j=l;j<=h;j++)
 {
if(a[j]<=pivot)
{
	i++;
	swap(a[i],a[j]);
 }
}
return i;
}
void quickSort(int a[],int l,int h)
{
	int r;
	if(l<h)
	{
		r=partition(a,l,h);
		quickSort(a,l,r-1);
		quickSort(a,r+1,h);
	}
	
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
		quickSort(a,0,n-1);
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	
	return 0;
}