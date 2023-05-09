#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t, op, n;
    queue<int> qu;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &op);
        if (op == 1) {
            scanf("%d", &n);
            qu.push(n);
        }
        else if (op == 2) {
            if (!qu.empty()) {
                qu.pop();
            }
        }
        else if (op == 3) {
            if (qu.empty()) {
                printf("Empty!\n");
            }
            else {
                printf("%d\n", qu.front());
            }
        }
    }
    return 0;
}