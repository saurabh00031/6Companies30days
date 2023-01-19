  class GCD{
    public:
    
    // Function to return gcd of a and b
    int gcd(int a, int b){
       return a == 0? b : gcd(b % a, a);
    }
    
    int getGCD(vector<int> &arr){
        int gcd_all = arr[0];
        for (int i = 1;i < size(arr); i++){
             gcd_all = gcd(arr[i], gcd_all);
             if(gcd_all == 1) return 1;
        }
        return gcd_all;
    }
    
    };

   int minOperations(vector<int>& nums, vector<int>& D) 
   {     

    GCD g;
    int gcd_of_all= g.getGCD(D);
    
    sort(begin(nums),end(nums));
    

    int ct=0;
    for(auto i:nums){
        if(gcd_of_all%i==0) return ct;
        ct++;
    }
    
    return -1;
   }