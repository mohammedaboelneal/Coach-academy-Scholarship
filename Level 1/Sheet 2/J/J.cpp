#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a>b) cout<<"Takahashi"<<endl;
        else    cout<<"Aoki"<<endl;
    }
    else if(c==1)
    {
        if(b>a) cout<<"Aoki"<<endl;
        else    cout<<"Takahashi"<<endl;
    }
    return 0;
}