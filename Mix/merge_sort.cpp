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
void merge(int a[],int l,int m,int h)
{
  int n1=m-l+1;
  int n2=h-m;
  int left[n1],right[n2];
  for(int i=0;i<n1;i++)
  	left[i]=a[l+i];
  for(int i=0;i<n2;i++)
  	right[i]=a[m+1+i];
  int i=0,j=0,k=l;
  while(i<n1 && j<n2)
  {
  	if(left[i]<right[j])
  	{
  		a[k]=left[i++];
  	}
  	else
  	{
  		a[k]=right[j++];
  	}
  	k++;
  }
  while(i<n1)
  	a[k++]=left[i++];
  while(j<n2)
  	a[k++]=right[j++];
}
void mergeSort(int a[],int l,int h)
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,h);
		merge(a,l,m,h);
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
		mergeSort(a,0,n-1);
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
	
	return 0;
}