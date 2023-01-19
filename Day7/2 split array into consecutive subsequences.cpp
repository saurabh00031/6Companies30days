class Solution {
public:
    bool isPossible(vector<int>& nums) 
    {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }

        for(auto& i:nums)
        {
            int ft = freq[i];
            int end = min(freq[i-1],freq[i-2]); 
            int start = min(freq[i+1],freq[i+2]);  
            ft = ft - end - start - min(freq[i+1]-start,freq[i-1]-end);
            
            if(ft>0)
            {
                return false;
            }
        }
        return true;
    }
};