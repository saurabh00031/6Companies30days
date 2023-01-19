class Solution 
{


public:

    vector<vector<int>>ans;

    void f(int i,vector<int> &nums,vector<int> &ds,int target,int k)
    {
        if(i>=nums.size())
        {
            if(ds.size()==k and target==0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if(nums[i]<=target)
        {
            ds.push_back(nums[i]);
            f(i+1,nums,ds,target-nums[i],k);
            ds.pop_back();
        }

        f(i+1,nums,ds,target,k);
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int>nums;
        vector<int>ds;

       for(int i=1;i<=9;i++)
       {
           nums.push_back(i);
       }

        f(0,nums,ds,n,k);
        return ans;
    }
};