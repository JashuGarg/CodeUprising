#include <bits/stdc++.h>
using namespace std;

int main() {

    int no;
    cin >> no;
    while (no--) {
        int N;
        cin >> N;

        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x == 1) c1++;
            else if (x == 2) c2++;
            else c3++;
        }

        int delete2 = max(0, c2 - 1);
        int delete13 = min(c1, c3);

        cout << delete13 + delete2 << "\n";
    }
}