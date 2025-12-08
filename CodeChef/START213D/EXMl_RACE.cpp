#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--) {
        int no;
        cin >> no;

        long long bestSpeed = -1;
        int ans = 1;

        for (int i = 1; i <= no; i++) {
            long long d, t;
            cin >> d >> t;
            long long speed = d / t;

            if (speed > bestSpeed) {
                bestSpeed = speed;
                ans = i;
            }

        }

        cout << ans << "\n";
    }
    return 0;
}