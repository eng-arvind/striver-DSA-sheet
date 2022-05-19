#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int ans=1;
    long X=x;
    while(n>0)
    {
        if(n%2==1)
        {
            ans=((ans%m)*(X%m))%m;
            n-=1;
        }
        else
        {
            X=((X%m)*(X%m))%m;
            n/=2;
        }
    }
    return (int)ans%m;
}

int main() 
{
		#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
		#endif
	int t;
	cin>>t;
	while(t--){
	int x,n,m;
	cin>>x>>n>>m;
	cout<<modularExponentiation(x,n,m)<<endl;
}
	

}