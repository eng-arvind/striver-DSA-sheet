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

/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int> > mergeAns;
  sort(intervals.begin(),intervals.end());
    vector<int> pr=intervals[0];
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=pr[1])
        {
            pr[1]=max(pr[1],intervals[i][1]);
        }
        else
        {
            mergeAns.push_back(pr);
             pr=intervals[i];
        }
    }
    mergeAns.push_back(pr);
  
    return mergeAns;
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
		int n;
		cin>>n;
		vector<vector<int> > intervals(n,vector<int> (2));
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			intervals[i][0]=a;

		}
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			intervals[i][1]=a;
		}
vector<vector<int> > ans(n,vector<int> (2));
     ans=mergeIntervals(intervals);
    for(int i=0;i<n;i++)
    	cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	}
	
	return 0;
}

// other solution


// struct interval
// {
//     int start;
//     int end;
//     int pos;
// };
// bool compare(interval l1,interval l2)
// {
//     if(l1.start<l2.start)
//     {
//         return true;
//     }
//     else if(l1.start>l2.start)
//     {
//         return false;
//     }
//         else if(l1.pos<l2.pos)
//             return true;
//         else
//             return false;
// }
// vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
// {
//     int n=intervals.size();
//     interval *arr=new interval[n];
//     for(int i=0;i<n;i++)
//     {
//         arr[i].start=intervals[i][0];
//         arr[i].end=intervals[i][1];
//         arr[i].pos=i+1;
//     }
//     sort(arr,arr+n,compare);
//     vector<vector<int>> ans;
    
// int st=arr[0].start;
// int ed=arr[0].end;
//  vector<int> fn;
//     for(int i=1;i<n;i++)
//     {
//         if(ed>=arr[i].start)
//         {
//             ed=max(ed,arr[i].end);
//         }
//         else
//         {
//             fn.push_back(st);
//             fn.push_back(ed);
//             ans.push_back(fn);
//             fn.clear();
//             st=arr[i].start;
//             ed=max(ed,arr[i].end);
//         }
//     }
//      fn.push_back(st);
//      fn.push_back(ed);
//     ans.push_back(fn);
//     return ans;
// }