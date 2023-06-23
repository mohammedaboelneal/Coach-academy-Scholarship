#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long k,x,res;
    cin>>k>>x;
    long long temp=ceil((double )k/2);
    if(x<= temp)    res=x*2 -1;
    else
    {
        x-=temp;
        res=x*2;
    }
    cout<<res<<endl;
    return 0;
}