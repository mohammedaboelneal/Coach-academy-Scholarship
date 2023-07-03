#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,x=0;
    string s;
    cin>>n;
    while (n)
    {
        cin>>s;
        if(s=="X++" || s=="++X") x++;
        else if(s=="X--" || s=="--X") x--;
        n--;
    }
    cout<<x<<endl;
    return 0;
}