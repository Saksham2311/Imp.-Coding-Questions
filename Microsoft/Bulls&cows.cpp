//https://leetcode.com/problems/bulls-and-cows/
#include<bits/stdc++.h>
using namespace std;
string getHint(string secret, string guess) {
        
        int count_secret[10]={0};
        int count_guess[10]={0};
        int count_present[10]={0};

        
        int b=0;
        for(int i=0;i<secret.size();i++)
        {
            count_secret[secret[i]-48]++;
            count_guess[guess[i]-48]++;
            if(secret[i]==guess[i])
            {
                b++;
                count_present[secret[i]-48]++;
            } 
        }
        int c=0;
        for(int i=0;i<=9;i++)
        {
            if(count_secret[i]!=count_present[i])
            {
                if(count_guess[i]>count_present[i])
                    c+=min(count_secret[i]-count_present[i],count_guess[i]-count_present[i]);
            }
        }
        string ans;
        ans+=(to_string(b));
        ans+="A";
        ans+=(to_string(c));
        ans+="B";
        cout<<ans;
    }
    int main()
    {
        getHint("1807","7810");
    }