class Solution {
public:
     bool isRectangleCover(vector<vector<int>>& Pts) 
     {


        map<pair<int,int>,int>mp;

        int ct=0;

        for(auto P : Pts)
        {
            mp[{P[0],P[1]}]++;
            mp[{P[2],P[3]}]++;
            mp[{P[0],P[3]}]--;
            mp[{P[2],P[1]}]--;
        }

        for(auto itr : mp)
            ct+=abs(itr.second);

        return ct==4;
     }
};