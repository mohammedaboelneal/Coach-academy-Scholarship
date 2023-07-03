#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    bool bl= true;
    int n,tmp;
    cin>>n;
    tmp=n;
    while(n)
    {
        int i=n%10;
        if(i !=4 && i !=7) bl= false;
        n/=10;
    }
    if(tmp%4==0 || tmp%7==0)bl= true;
    if(bl) cout<<"YES"<<endl;
    else   cout<<"NO"<<endl;
    return 0;
}

