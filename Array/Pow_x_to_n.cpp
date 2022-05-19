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

double myPow(double x, int n) {

	double ans=1.0;
	long long nn=n;
	if(nn<0)
	nn=-1*nn;
	while(nn>0)
	{
		if(nn%2==1)
		{
			ans*=x;
			nn=nn-1;
		}
		else{
			x=x*x;
			nn=nn/2;
		}
	}     
	if(n<0) ans= (double)(1.0)/(double)(ans);
	return ans;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double x;
	int n;
	cin>>x>>n;
	cout<<myPow(x,n)<<endl;
	return 0;
}