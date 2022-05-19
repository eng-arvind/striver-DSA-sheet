#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
	int j=0,i=0;
	int ans=0;
	unordered_set<int> st;
	while(j<input.size()){
		if(st.find(input[j])!=st.end()){
			while(st.find(input[j])!=st.end())
			{
				st.erase(input[i]);
				i++;
			}
		}
		st.insert(input[j]);
		j++;
		int sz=st.size();
		ans=max(ans,sz);
	}
	return ans;
}