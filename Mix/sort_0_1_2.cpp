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

void sort012(int *arr, int n)
{
   //   Write your code here
    int i=0,j=0,k=n-1;
    while(j<=k)
    {
        
        switch(arr[j])
        {
            case 1:
                     j++;
                    break;
            case 0:
                   swap(arr[i],arr[j]);
                   i++;
                   j++;
                   break;
            case 2:
                    swap(arr[j],arr[k]);
                     k--;
                    break;
        }
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
         int arr[n];
         for(int i=0;i<n;i++)
         {
         	cin>>arr[i];
         }
         sort012(arr,n);
         for(int i=0;i<n;i++)
         {
         	cout<<arr[i]<<" ";
         }
	}
	return 0;
}