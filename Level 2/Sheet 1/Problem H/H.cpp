#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    string s="";
    cin>>n;
    stack<pair<int , string>>st;
    while(n--)
    {
        int op;
        cin>>op;
        if (op==1)
        {
            string s1="";
            cin>>s1;
            s+=s1;
            st.push({op,s1});
        }
        else if(op==2)
        {
            int len;
            cin>>len;
            string s1="";
            while(len--)
            {
                s1=s.back()+s1;
                s.pop_back();
            }
            st.push({op,s1});
        }
        else if(op==3)
        {
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
        else if(op==4)
        {
            if(st.empty()) continue;
            pair<int,string>p=st.top();
            int x_len=p.second.length();
            if(p.first==1)
            {
                while (x_len--)
                {
                    s.pop_back();
                }
            }
            else if(p.first==2)
            {
                s+=p.second;
            }
            st.pop();
        }
    }
    return 0;
}