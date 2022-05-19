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

void rotateMatrix(vector<vector<int>> &mat, int n, int m){

  int r=0,c=0;
    int prev,cr;
    while(r<n && c<m)
    {
        if(r+1==n || c+1==m)
            break;
        prev=mat[r+1][c];
         for (int i = c; i < m; i++)
        {
            cr = mat[r][i];
            mat[r][i] = prev;
            prev = cr;
        }
        r++;
         for (int i = r; i < n; i++)
        {
            cr = mat[i][m-1];
            mat[i][m-1] = prev;
            prev = cr;
        }
        m--;
          if (r < n)
        {
            for (int i = m-1; i >= c; i--)
            {
                cr = mat[n-1][i];
                mat[n-1][i] = prev;
                prev = cr;
            }
        }
        n--;
        if (c < m)
        {
            for (int i = n-1; i >= r; i--)
            {
                cr = mat[i][c];
                mat[i][c] = prev;
                prev = cr;
            }
        }
        c++;
      
    }

	

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<vector<int>> mat(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	rotateMatrix(mat,n,m);
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}