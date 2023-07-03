#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    deque<pair<int , int>>dq;
    int n,m,x,last;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        dq.push_back({i+1,x});
    }
    while(!dq.empty())
    {
        pair<int , int> p=dq.front();
        dq.pop_front();
        if(m < p.second)
        {
            dq.push_back({p.first,p.second-m});
        }
        last=p.first;
    }
    cout<<last<<endl;
    return 0;
}