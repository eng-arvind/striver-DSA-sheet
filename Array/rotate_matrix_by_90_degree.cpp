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


void rotate90degreeMatrix(vector<vector<int>> &mat,int n){
	//clockwise rotation by 90 degree

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<i;j++){
	// 		swap(mat[i][j],mat[j][i]);
	// 	}
	// }

	//Anti clockwise rotation by 90 degree

	// for(int i=n-1;i>=0;i--){
	// 	for(int j=n-1;j>i;j--){
	// 		swap(mat[n-1-j][i],mat[n-1-i][j]);
	// 	}
	// }

	for(int i=0;i<n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	vector<vector<int>> mat(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];                                            
		}
	}
	rotate90degreeMatrix(mat,n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}