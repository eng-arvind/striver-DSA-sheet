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

long long merge(long long arr[],long long temp[],long long l, long long m,long long h)
{
	int i,j,k;
	long long count=0;
	i=l;
	j=m;
	k=l;
	while(i<=m-1 && j<=h){
		if(arr[i]<=arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
			count=count+(m-i);
		}
	}
	while(i<=m-1){
		temp[k++]=arr[i++];
	}
	while(j<=h){
		temp[k++]=arr[j++];
	}
 	for(i = l; i <=h; i++)
        arr[i] = temp[i];
    return count;

}

long long mergeSort(long long arr[],long long temp[],long long l, long long  h){
	int m;
	long long cnt=0;
	if(l<h){
		m=(l+h)/2;
		cnt+=mergeSort(arr,temp,l,m);
		cnt+=mergeSort(arr,temp,m+1,h);
		cnt+=merge(arr,temp,l,m+1,h);
	}
	return cnt;
}



long long getInversions(long long *arr, int n){
	long long temp[n];
	return mergeSort(arr,temp,0,n-1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long ans=getInversions(arr,n);
	cout<<ans<<endl;
	return 0;
}