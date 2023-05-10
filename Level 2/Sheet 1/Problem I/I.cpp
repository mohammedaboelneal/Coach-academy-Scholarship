#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v1;
    while(n--)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    for(int i=1;i<v1.size();i++)
    {
        if(v1[i]==1) v2.push_back(v1[i-1]);
    }
    v2.push_back(v1[v1.size()-1]);
    cout<<v2.size()<<endl;
    for(auto v:v2) cout<<v<<" ";
    return 0;
}