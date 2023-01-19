class Solution {
public:
    int atmost(string s, int k)
    {
        int j = 0, no_of_subarray = 0, mapsize = 0;
        
        unordered_map<int, int>mp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mp[s[i]] == 0)mapsize++;
            mp[s[i]]++;
            
            while(mapsize > k){
                mp[s[j]]--;
                if(mp[s[j]] == 0)mapsize--;
                j++;
            }
			
            no_of_subarray += i - j + 1;
        }
        
        return no_of_subarray;
    }
    
    int numberOfSubstrings(string s) 
    {
        int k = 3;
        return atmost(s, k) - atmost(s, k - 1);
    }
};