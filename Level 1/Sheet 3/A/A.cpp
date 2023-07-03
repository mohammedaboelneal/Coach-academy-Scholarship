#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int x,s=0;
    cin>>x;
    while(x)
    {
        s+=x;
        x--;
    }
    cout<<s<<endl;
    return 0;
}