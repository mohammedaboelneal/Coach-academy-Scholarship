#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    string s;
    cin>>s;
    stack<char>st;
    for (int i=0;i<s.length();i++)
    {
        if(st.empty() || st.top()!=s[i]) st.push(s[i]);
        else st.pop();
    }
    if(st.empty())  cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}