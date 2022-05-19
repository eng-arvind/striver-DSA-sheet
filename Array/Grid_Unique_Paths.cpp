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

//Method-1

// int uniquePaths(int i,int j,int n, int m) {

// 	if(i==(n-1) && j==(m-1)) return 1;
// 	if(i>=n || j>=m) return 0;
// 	else
// 		return uniquePaths(i+1,j,n,m)+uniquePaths(i,j+1,n,m);

// }

// Method-2 DP
// TC= O(nm) SC=O(nm)

// int uniquePaths(int i,int j,int n, int m,vector<vector<int>> &dp) {

// 	if(i==(n-1) && j==(m-1)) return 1;
// 	if(i>=n || j>=m) return 0;
// 	if(dp[i][j]!=-1) return dp[i][j];
// 	else
// 		return dp[i][j]=uniquePaths(i+1,j,n,m,dp)+uniquePaths(i,j+1,n,m,dp);
// }


// or

//    long long int uniquePaths(int i,int j,int m, int n,vector<vector<int>> &dp) {

// 	if(i==(m-1) && j==(n-1)) return 1;
// 	if(i>=m || j>=n) return 0;
// 	if(dp[i][j]!=-1) return dp[i][j]%1000000007;
// 	      long long int num1 = uniquePaths(i, j + 1, m, n, dp);
//        long long int num2 = uniquePaths(i + 1, j, m, n, dp);
//        return dp[i][j] = (num1 + num2) %1000000007;
// }




//Method-3 optimize
// TC=O(m-1) or O(n-1) 
// SC=O(1)
int uniquePaths(int n, int m) {
	int N=n+m-2;
	int R=n-1;
	int ans=1;
	for(int i=1;i<=R;i++){
		ans=ans*(N-R+i)/i;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<vector<int>> dp(n,vector<int>(m,-1));
	cout<<uniquePaths(n,m)<<endl;
	return 0;
}