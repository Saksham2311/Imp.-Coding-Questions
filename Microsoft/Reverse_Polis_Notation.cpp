//link-https://leetcode.com/problems/evaluate-reverse-polish-notation/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>tokens={"4","13","5","/","+"};
    stack<int> st;

        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                string s=tokens[i];
                if(s=="+")
                    st.push(a+b);
                else if(s=="-")
                    st.push(b-a);
                else if(s=="*")
                    st.push(a*b);
                else
                    st.push(b/a);
                
            }
            else st.push(stoi(tokens[i]));
        }
        cout<<st.top();
}