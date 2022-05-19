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


void merge_two_array(int *arr1,int *arr2,int n,int m){

	int i=n+m-1;
	n=n-1;
	m=m-1;
	while(m>=0)
	{
		if(n>=0 && arr1[n]>arr2[m]){
			arr1[i]=arr1[n];
			n--;
		}
		else
		{
			arr1[i]=arr2[m];
			m--;
		}
		i--;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr1[n+m];
	int arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	fill(arr1+n,arr1+n+m,0);
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	merge_two_array(arr1,arr2,n,m);
	for(int i=0;i<n+m;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}