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

vector<int> majorityElementII(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int elem1=-1,elem2=-1;
        for(int i=0;i<nums.size();i++){
        	if(nums[i]==elem1)
        		cnt1++;
        	else if(nums[i]==elem2)
        		cnt2++;
        	else if(cnt1==0){
        		elem1=nums[i];
        		cnt1++;
        	}
        	else if (cnt2==0)
        	{
        		elem2=nums[i];
        		cnt2++;
        	}
        	else{
        		cnt1--;
        		cnt2--;
        	}
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
        	if(nums[i]==elem1) cnt1++;
        	else if(nums[i]==elem2) cnt2++;
        }
        vector<int> ans;
        if(cnt1>nums.size()/3)
        	ans.push_back(elem1);
 		if(cnt2>nums.size()/3)
        	ans.push_back(elem2);
        sort(ans.begin(),ans.end());
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
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	vector<int> ans=majorityElementII(nums);
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	return 0;
}