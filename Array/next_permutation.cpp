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


vector<int> nextPermutation(vector<int> &permutation, int n)
{
	int indx1=-1;
	for(int i=n-2;i>=0;i--){
		if(permutation[i]<permutation[i+1]){
			indx1=i;
			break;
		}
	}
	if(indx1==-1)
	{
		reverse(permutation.begin(),permutation.end());
		return permutation;
	}
	int indx2=-1;
	for(int i=n-1;i>indx1;i--)
	{
		if(permutation[i]>permutation[indx1]){
		indx2=i;
		break;	
		}
	}

	swap(permutation[indx1],permutation[indx2]);
	reverse(permutation.begin()+indx1+1,permutation.end());
	return permutation;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	vector<int> perm(n);
	for(int i=0;i<n;i++){
		cin>>perm[i];
	}
	vector<int> ans=nextPermutation(perm,n);
	for(int i=0;i<n;i++){
		cout<<perm[i]<<" ";
	}
	return 0;
}