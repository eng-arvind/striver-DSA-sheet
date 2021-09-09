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


int *findTwoElement(int *arr, int n)
{
	int repeat, missing;
	for (int i = 0; i < n; i++) {
		int vl = arr[abs(arr[i]) - 1];
		if (vl > 0)
		{
			arr[abs(arr[i]) - 1] = -vl;
		}
		else
		{
			repeat = abs(arr[i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			missing = i + 1;
	}
	arr[0] = repeat;
	arr[1] = missing;
	return arr;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	auto ans = findTwoElement(arr, n);
	cout << ans[0] << " " << ans[1] << "\n";
	return 0;
}