#include <bits/stdc++.h>
using namespace std;

  long long merge(long long arr[],long long temp[],long long int l, long long m,long long h)
{
  int i, j, k;
    long long count = 0;
 
    i = l; 
    j = m; 
    k = l;
    while ((i <= m - 1) && (j <= h)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            count = count + (m - i);
        }
    }
    while (i <= m - 1)
        temp[k++] = arr[i++];
    while (j <= h)
        temp[k++] = arr[j++];

    for (i = l; i <=h; i++)
        arr[i] = temp[i];
 
    return count;
}
   long long  mergeSort(long long a[],long long temp[],long long l, long long  h)
{
	int m;
	long long  cnt=0;
	if(l<h)
	{
		m=(l+h)/2;
	cnt+=mergeSort(a,temp,l,m);
	cnt+=mergeSort(a,temp,m+1,h);
	cnt+=merge(a,temp,l,m+1,h);
	}
	return cnt;
	
}
long long getInversions(long long *arr, int n){
    // Write your code here.
   long long  temp[n];
       return mergeSort(arr,temp,0,n-1);
}
int main() 
{
		#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
		#endif
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<getInversions(arr,n)<<endl;

}