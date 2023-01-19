Vclass Solution {
public:
    int minimumCardPickup(vector<int>& cards)
    {
       int n=cards.size();
       map<int,vector<int>>mp;
        
      for(int i=0;i<n;i++)
      {
          mp[cards[i]].push_back(i);
      }
        
      int minn=INT_MAX;
        
      for(auto it=mp.begin();it!=mp.end();it++)
      {
          
          vector<int>temp=it->second;
          
        
           if(temp.size()>=2)
          {
              
          for(int i=0;i<temp.size()-1;i++)
          {
              minn=min(minn,temp[i+1]-temp[i]+1);
          }
              
          }
          
          
          
      }
        
        if(minn==INT_MAX)
        {
            return -1;
        }
        
      return minn;
        
    }
};