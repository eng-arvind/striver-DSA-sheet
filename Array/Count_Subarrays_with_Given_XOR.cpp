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

//Time Complexity
// O(N) 
// Space complexity
// O(N)
int subarraysXor(vector<int> &arr, int x)
{
	int xr=0;
	int cnt=0;
	unordered_map<int,int> mp;
	for(int i=0;i<arr.size();i++)
	{
		xr=xr^arr[i];
		if(xr==x)
			cnt++;
		if(mp.find(xr^x)!=mp.end()){
			cnt+=mp[xr^x];
		}
		mp[xr]++;
	}			   
	return cnt;		
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	int x;
	cin>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<subarraysXor(arr,x)<<endl;
	return 0;
}