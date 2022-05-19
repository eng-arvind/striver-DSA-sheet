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

long long maxSubarraySum(int arr[], int n)
{
    if(n==0)
        return 0;
    long long maxsum=-999999;
    long long cursum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        cursum+=arr[i];
        else
        {
             maxsum=max(maxsum,cursum);
        if(cursum+arr[i]<0)
            cursum=0;
        else
        {
            cursum+=arr[i];
        }
   			 }
    }
    return max(maxsum,cursum);
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
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<maxSubarraySum(arr,n)<<endl;
	}
	
	return 0;
}