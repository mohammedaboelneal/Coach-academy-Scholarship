#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int V,T,S,D;
    cin>>V>>T>>S>>D;
    if(D<(V*T) || D>(V*S))    cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;
    return 0;
}