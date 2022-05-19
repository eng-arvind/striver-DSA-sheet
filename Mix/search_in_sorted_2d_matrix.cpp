#include <bits/stdc++.h>
using namespace std;

#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
   int r=0,c=n-1;
    while(r<m && c>=0)
    {
        if(mat[r][c]>target)
            c--;
        else if(mat[r][c]<target)
            r++;
        else if(mat[r][c]==target)
            return true;
    }
    return false;
}

int main() 
{
		#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
		#endif
	int m,n,target;
	cin>>m>>n>>target;
	vector<vector<int> > mat(m,vector<int> (n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>mat[i][j];
	}

	if(findTargetInMatrix(mat,m,n,target))
		cout<<"True";
	else
		cout<<"False";

}