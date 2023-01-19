class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int ct1=0;
        int ct2=0;

        vector<int>secretTable(10,0);
        vector<int>guessTable(10,0);

        for(int i=0;i<secret.size(); i++)
        {
            if(secret[i]==guess[i]) 
            {
                ct1++;
            }
            else
            {
                secretTable[secret[i]-'0']++;
                guessTable[guess[i]-'0']++;
            }
        }

        for(int i=0;i<10; i++)
        {
            ct2+=min(secretTable[i], guessTable[i]);
        }

        string sp=to_string(ct1)+'A'+to_string(ct2)+'B';

        return  sp;
    }
};

