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
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i,max,loc=n,j,temp;
	if(n%2==0)
	{
		max=0;
		for(int i=0;i<n;i++)
		cout<<max<<" ";
	     

	}
	for(int i=0;i<loc/2;i++)
	{
		temp=a[n-i-1];
		a[n-i-1]=a[i];
		a[i]=temp;		
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}