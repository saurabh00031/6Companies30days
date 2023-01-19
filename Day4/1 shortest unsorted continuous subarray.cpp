class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
         vector<int> c(nums.begin(), nums.end());      
        
        sort(c.begin(), c.end());   
        
        int n = nums.size(), s = 0, e = n - 1; 
        
        while (s < n && nums[s] == c[s])
        {           
            s++;
        }
        while (e > s && nums[e] == c[e])  
        {            
            e--;
        }
        return e + 1 - s;           
      
    }
};