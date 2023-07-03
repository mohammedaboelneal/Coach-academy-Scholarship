#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, num;
    cin >> n >> d;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        dq.push_back(num);
    }

    for (int i = 0; i < d; i++)
    {
        num = dq.front();
        dq.pop_front();
        dq.push_back(num);
    }

    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
