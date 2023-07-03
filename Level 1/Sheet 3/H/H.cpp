#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n=5,x1,x2,x3,x4,x5,i,j,c=0;
    while(n)
    {
        cin>>x1>>x2>>x3>>x4>>x5;
        if(x1==1)
        {
            i=n;
            j=1;
        }
        else if(x2==1)
        {
            i=n;
            j=2;
        }
        else if(x3==1)
        {
            i=n;
            j=3;
        }
        else if(x4==1)
        {
            i=n;
            j=4;
        }
        else if(x5==1)
        {
            i=n;
            j=5;
        }
        n--;
    }
    if(j<3) c+=3-j;
    else c+=j-3;

    if(i<3) c+=3-i;
    else c+=i-3;

    cout<<c<<endl;
    return 0;
}