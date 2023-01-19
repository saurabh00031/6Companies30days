#define ll long long int

class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<ll>st;
        
        for(auto it:tokens)
        {
            if(it=="+") 
            {
                long long int b = st.top(); st.pop();
                long long int a = st.top(); st.pop();
                st.push(a+b);
            }
            else if(it=="-") 
            {
                long long int b = st.top(); st.pop();
                long long int a = st.top(); st.pop();
                st.push(a-b);
            }
            else if(it=="*") 
            {
                long long int b = st.top(); st.pop();
                long long int a = st.top(); st.pop();
                st.push(b*a);
            }
            else if(it=="/") 
            {
                long long int b = st.top(); st.pop();
                long long int a = st.top(); st.pop();
                st.push(a/b);
            }
            else
            {
                st.push(stoi(it));
            }
               
        }

        return st.top();
    }
};