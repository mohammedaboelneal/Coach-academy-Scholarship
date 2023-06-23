#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m,a,res1=0,res2=0;
    cin>>n>>m>>a;
    res1=n/a;
    res2=m/a;
    if(n%a)res1++;
    if(m%a)res2++;
    cout<<res1*res2<<endl;
    return 0;
}