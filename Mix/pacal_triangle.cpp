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
vector<int> pascal_row_wise(int n)
{
	vector<int> ans;
	if(n==0)
		return ans;
	int res=1;
   ans.pb(1);
	for(int i=1;i<n;i++)
	{
		res *= (n-i);
		res /= (i);
		ans.push_back(res);
		//cout<<res<<" ";
	}
	return ans;
}
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i].resize(i+1);
        ans[i][0]=ans[i][i]=1;
        for(int j=1;j<i;j++)
        {
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
    }
    return ans;
    
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
		//vector<vector<long long int>> pascal=printPascal(n);
		// for(int i=0;i<pascal.size();i++)
		// {
		// 	for(int j=0;j<pascal[i].size();j++)
		// 	{
		// 		cout<<pascal[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		vector<int> pas=pascal_row_wise(n);
		for(int i=0;i<n;i++)
			cout<<pas[i]<<" ";

	}
	
	return 0;
}