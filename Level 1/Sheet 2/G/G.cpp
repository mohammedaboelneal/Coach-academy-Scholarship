#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b,res=0;
    cin>>a>>b;
    if(b>=a)res=a;
    else res=a-1;
    cout<<res<<endl;
    return 0;
}