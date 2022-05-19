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

void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    // Write your code here.
    int ar1[n]={0};
    int ar2[m]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(MAT[i][j]==1)
            {
                ar1[i]=-1;
                ar2[j]=-1;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar1[i]==-1 || ar2[j]==-1)
            {
                MAT[i][j]=1;
            }
        }
     }
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
		int n,m;
		cin>>n>>m;
		vector<vector<int>> MAT(n,vector<int> (m));	
		 for(int i=0;i<n;i++)
    	{
        for(int j=0;j<m;j++)
        {
           cin>>MAT[i][j];
        }
    	}

		setMatrixOnes(MAT,n,m);
		 for(int i=0;i<n;i++)
    	{
        for(int j=0;j<m;j++)
        {
           cout<<MAT[i][j]<<" ";
        }
        cout<<endl;
    	}
	}
	
	return 0;
}

// int col=0;
//  for(int i=0;i<n;i++)
//     	{
//     		if(MAT[i][0]==1) col=1;
//         for(int j=0;j<m;j++)
//         {
//         	if(MAT[i][j]==1)
//           MAT[i][0]=MAT[0][j]=1;
//         }
//     	}

//     for(int i=n-1;i>=0;i--)
//     	{
//         for(int j=m-1;j>=1;j--)
//         {
//            if(MAT[i][0]==1 || MAT[0][j]==1)
//            	MAT[i][j]=1;
//         }
//         if(col==1) MAT[i][0]=1;
//     	}