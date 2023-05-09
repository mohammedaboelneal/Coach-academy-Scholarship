#include <bits/stdc++.h>
using namespace std;
void dque(string s,deque<int>dq);
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    deque<int>dq;
    int n;
    cin>>n;
    string s;
    bool rev=false;
    for (int i=0;i<n;i++)
    {
        cin >> s;
        if(rev)
        {
            if (s=="toFront") s="push_back";
            else if (s=="push_back") s="toFront";
            else if (s=="back") s="front";
            else if (s=="front") s="back";
        }
        int num;
        if(s=="toFront")
        {
            cin>>num;
            dq.push_front(num);
        }
        else if(s=="push_back")
        {
            cin>>num;
            dq.push_back(num);
        }
        else if(s=="front")
        {
            if(dq.empty())
            {
                cout<<"No job for Ada?"<<endl;
            }
            else
            {
                cout<<dq.front()<<endl;
                dq.pop_front();
            }
        }
        else if(s=="back")
        {
            if(dq.empty())
            {
                cout<<"No job for Ada?"<<endl;
            }
            else
            {
                cout<<dq.back()<<endl;
                dq.pop_back();
            }
        }
        else if(s=="back")
        {
            cout<<dq.back()<<endl;
            dq.pop_back();
        }
        else if(s=="reverse")
        {
            rev=!rev;
        }
    }
    return 0;
}