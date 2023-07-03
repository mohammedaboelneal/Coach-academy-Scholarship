#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a,taxi=0;
    int ones=0,twos=0,threes=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        if(a==4) taxi++;
        else a==1?ones++:a==2?twos++:threes++;
    }
    taxi+=threes;
    ones-=threes;
    ones=max(0,ones);
    ones+=twos*2;
    taxi+=(ones/4)+(ones%4!=0);
    cout<<taxi<<endl;
    return 0;
}