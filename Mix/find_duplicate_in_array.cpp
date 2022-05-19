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

void findDuplicate(vector<int> &arr, int n){ 
int miss,repeat;   
  for(int i=0;i<n;i++)
  {
      int val=arr[abs(arr[i])-1];
      if(val>0)
      {
          arr[abs(arr[i])-1]=-val;
      }
    else
        repeat=abs(arr[i]);
  }
  for(int i=0;i<n;i++)
  {
  	if(arr[i]>0)
  		miss=i+1;
  }
      cout<<"miss:"<<miss<<" repeat:"<<repeat<<endl; 
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
      vector<int> arr(n);
      for(int i=0;i<n;i++)
      	cin>>arr[i];
      findDuplicate(arr,n);
	}
	return 0;
}