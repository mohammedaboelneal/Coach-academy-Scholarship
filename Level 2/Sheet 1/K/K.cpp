#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int ,int>>v(n);
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            mx= max(v[i].first,mx);
            v[i].second=mx;
        }
        int r=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i].first==v[i].second)
            {
                for(int j=i;j<=r;j++)
                {
                    cout<<v[j].first<<" ";
                }
                if(i>0) r=i-1;
            }
        }
        cout<<endl;
    }
    return 0;
}