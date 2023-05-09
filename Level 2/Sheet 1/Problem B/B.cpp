#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t, op, n;
    stack<int> st;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &op);
        if (op == 1) {
            scanf("%d", &n);
            st.push(n);
        }
        else if (op == 2) {
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (op == 3) {
            if (st.empty()) {
                printf("Empty!\n");
            }
            else {
                printf("%d\n", st.top());
            }
        }
    }
    return 0;
}