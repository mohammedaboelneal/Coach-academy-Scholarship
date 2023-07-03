#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,x1,x2,x3,c=0;
    cin>>n;
    while(n)
    {
        cin>>x1>>x2>>x3;
        if((x1+x2+x3)>=2) c++;
        n--;
    }
    cout<<c<<endl;
    return 0;
}