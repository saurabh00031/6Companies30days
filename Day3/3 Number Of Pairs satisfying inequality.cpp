

#define ll long long
using namespace std;
#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define lakh 100000

class Solution {
public:

   long long numberOfPairs(vector<int>& arr1, vector<int>& arr2, int diff)
   {
      long long ct=0;
       
       long long int z=0;
       
       
       
      tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update>Fine;
       
       
      long long sz=arr1.size();
       
      for(int i=0;i<sz;i++)
      {
        ll x=arr1[i]-arr2[i];
          
        ll y=diff+x;

         ct=ct+Fine.order_of_key((ll)(y+1)*lakh);
          
         Fine.insert(((ll)(x)*lakh)+i);
      }
      
      return ct;
   }
};