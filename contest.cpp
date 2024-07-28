#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            unordered_map<char, int> hash;
            int count = 0;

            for (int j = l; j <= r; ++j) {
                hash[a[j]]++;
            }

            for (int j = l; j <= r; ++j) {
                if (hash.find(b[j]) == hash.end()) {
                    count++;
                } else {
                    hash[b[j]]--;
                    if (hash[b[j]] < 0) {
                        count++;
                    }
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}
