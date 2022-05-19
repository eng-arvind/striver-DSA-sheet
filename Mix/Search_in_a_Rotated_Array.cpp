#include<bits/stdc++.h>
using namespace std;

 int search(int A[], int l, int h, int key){
    //complete the function here
    while(l<=h){
        int mid=(l+h)/2;
       if(A[mid]==key) return mid;
       if(A[l]<A[mid]){
           if(A[l]<=key && key<A[mid]){
               h=mid-1;
           }
           else
           l=mid+1;
       }
       else{
           if(key>A[mid] && key<=A[h]){
               l=mid+1;
           }
           else{
               h=mid-1;
           }
           
       }
       
    }
    
    
    return -1;
    
    }

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif

	return 0;
}