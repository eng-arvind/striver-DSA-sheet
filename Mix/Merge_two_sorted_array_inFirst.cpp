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

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	
    int i = arr1.size()-1;
    m = m-1;
    n = n-1;
    while(n >= 0){
        if(m >= 0 && arr1[m] > arr2[n]){
            arr1[i] = arr1[m];
            m--;
        }else{
            arr1[i] = arr2[n];
            n--;
        }
        i--;
    } 
    return arr1;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
        int m,n;
        cin>>m>>n;
        vector<int> arr1(m+n);
       
        for(int i=0;i<m+n;i++)
        {
        	cin>>arr1[i];
        }
         vector<int> arr2(n);
        for(int i=0;i<n;i++)
        	cin>>arr2[i];
       vector<int> result=ninjaAndSortedArrays(arr1,arr2,m,n);
       for(int i=0;i<m+n;i++)
        	cout<<result[i]<<" ";

	}
	
	return 0;
}