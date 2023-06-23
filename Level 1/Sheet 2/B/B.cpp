#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    int m=a*b;
    int ad=a+b;
    int s=a-b;
    int max=m;
    if(ad>max)max=ad;
    if(s>max)max=s;
    cout<<max<<endl;
    return 0;
}