#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,count=0,p,q;
    cin>>n;
    while(n)
    {
        cin>>p>>q;
        if((q-p)>=2) count++;
        n--;
    }
    cout<<count<<endl;
    return 0;
}