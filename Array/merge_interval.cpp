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


 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        vector<int> pr;
        sort(intervals.begin(),intervals.end());
        pr=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=pr[1])
            {
                pr[1]=max(pr[1],intervals[i][1]);
            }
            else{
                ans.push_back(pr);
                pr=intervals[i];
            }
        }
        ans.push_back(pr);
        return ans;
        
    }


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	vector<vector<int>> intervals(n,vector<int>(2));
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>intervals[i][j];

	vector<vector<int>> ans=merge(intervals);

	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}