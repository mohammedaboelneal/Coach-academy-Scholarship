#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    if (s == "SSS")
        cout << 0 << endl;
    else if (s == "RRR")
        cout << 3 << endl;
    else if ((s[0] == 'R' and s[1] == 'R') or (s[1] == 'R' and s[2] == 'R')) // RRS or SRR
        cout << 2 << endl;
    else
        cout << 1 << endl;
    return 0;
}