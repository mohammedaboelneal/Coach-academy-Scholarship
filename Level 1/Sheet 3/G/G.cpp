#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n;
    int k;
    cin>>n>>k;
    while(k)
    {
        if(n%10==0) n/=10;
        else n-=1;
        k--;
    }
    cout<<n<<endl;
    return 0;
}