#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,l=0,j=1;
    cin>>n;
    while(n>0)
    {
        int l1=0;
        for(int i=1;i<=j;i++)
        {
            l1+=i;
        }
        j++;
        n-=l1;
        if(n>=0) l++;
    }
    cout<<l<<endl;
    return 0;
}