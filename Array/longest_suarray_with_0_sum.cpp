int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
	unordered_map<int,int> mp;
    int sum=0;
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
		sum+=arr[i];
		if(sum==0)
			ans=i+1;
		else
		{
			 if(mp.find(sum)==mp.end())
	   			{
		 			mp[sum]=i;
		 
	   			}
			else
				{
					ans=max(ans,i-mp[sum]);
				}
		}
    }
	return ans;

}