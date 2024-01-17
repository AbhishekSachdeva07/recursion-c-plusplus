void solve(vector<int> arr, int n, int k,int index,vector<vector<int>>&ans,vector<int>fortime)
{
    //basecase
    if(index>=n)
    {
        int sum=0;
        for(int i:fortime)
        {
            sum+=i;
        }
        if(sum==k)
        {
            ans.push_back(fortime);
        }
        return;
    }
    //excluding
    solve(arr,n,k,index+1,ans,fortime);
    //include
    int element = arr[index];
    fortime.push_back(element);
    solve(arr,n,k,index+1,ans,fortime);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    int index=0;
    vector<vector<int>>ans;
    vector<int>fortime;
    solve(arr,n,k,index,ans,fortime);
    return ans;
}
