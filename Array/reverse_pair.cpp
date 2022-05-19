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

int merge(vector<int> &arr,int l,int m,int h){
	int count=0;
	int j=m+1;
	for(int i=l;i<=m;i++){
		while((j<=h) && arr[i]>(2*arr[j])){
			j++;
		}
		count+=(j-(m+1));
	}
	vector<int> temp;
	int left=l,right=m+1;
	while(left<=m && right<=h){
		if(arr[left]<=arr[right])
			temp.push_back(arr[left++]);
		else
			temp.push_back(arr[right++]);
	}
	while(left<=m)
		temp.push_back(arr[left++]);
	while(right<=h)
		temp.push_back(arr[right++]);
	for(int i=l;i<=h;i++){
		arr[i]=temp[i-l];
	}
	return count;
}

int mergeSort(vector<int> &a,int l,int h){
	if(l>=h) return 0;
	int m=(l+h)/2;
	int cnt=0;
	cnt+=mergeSort(a,l,m);
	cnt+=mergeSort(a,m+1,h);
	cnt+=merge(a,l,m,h);
	return cnt;
}

int reversePairs(vector<int>& nums) {      	
        int n=nums.size();
        if(n<=1)
            return 0;
       return mergeSort(nums,0,n-1);     
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
	cout<<reversePairs(nums)<<endl;
	return 0;
}