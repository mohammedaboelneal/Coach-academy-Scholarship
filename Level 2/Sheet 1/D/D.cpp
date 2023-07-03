#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n;
    string s;
    cin>>n;
    while(n--)
    {
        stack<char>st;
        bool res= true;
        cin>>s;
        for (auto x : s)
        {
            if (x =='(' || x=='{' || x=='[') st.push(x);
            else if((!st.empty())&&((x==')' && st.top()=='(') || (x=='}' && st.top()=='{') || (x==']' && st.top()=='['))) st.pop();
            else
            {
                res= false;
                break;
            }
        }
        if(!st.empty()) res= false;
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
