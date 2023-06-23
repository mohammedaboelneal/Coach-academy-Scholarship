#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a>=0 && a<=100 && b>=0 && b<=100 && (a+b)>=1)
    {
        if(a>0 && b==0)cout<<"Gold"<<endl;
        else if(a==0 && b>0)cout<<"Silver"<<endl;
        else if(a>0 && b>0)cout<<"Alloy"<<endl;
    }
    return 0;
}