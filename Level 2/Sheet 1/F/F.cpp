#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int n;
    cin>>n;
    int x;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for (auto y:v)
    {
        if (y==0) v3.push_back(y);
        else if (y>0) v2.push_back(y);
        else if (y<0) v1.push_back(y);
    }

    if (v2.size()==0 && v1.size()>=3)
    {
        v2.push_back(v1.back());
        v1.pop_back();
        v2.push_back(v1.back());
        v1.pop_back();
    }
    if (v2.size()>0 && v1.size()%2==0)
    {
        v3.push_back(v1.back());
        v1.pop_back();
    }

    cout<<v1.size()<<" ";
    for (auto z:v1)
    {
        cout<<z<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<" ";
    for (auto z:v2)
    {
        cout<<z<<" ";
    }
    cout<<endl;
    cout<<v3.size()<<" ";
    for (auto z:v3)
    {
        cout<<z<<" ";
    }
    cout<<endl;
    return 0;
}