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

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> mp;
	vector<int> ans;
	for(int i=0;i<nums.size();i++){
		if(mp.find(target-nums[i])==mp.end()){
			mp[nums[i]]=i;
		}
		else
		{
			ans.push_back(mp[target-nums[i]]);
			ans.push_back(i);
			break;
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
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	int target;
	cin>>target;
	vector<int> ans=twoSum(nums,target);
	cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0;
}