#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,temp,m=0,len=0;
    cin>>n;
    temp=n;
    while(temp)
    {
        len++;
        temp/=10;
    }
    temp=n;
    for(int i=0;i<len;i++)
    {
        m+=temp%10;
        m*=10;
        temp/=10;
    }
    m/=10;
    if(n==m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}