#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b,c=0;
    cin>>a>>b;
    while(1)
    {
        if(a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
        else break;
    }
    cout<<c<<endl;
    return 0;
}