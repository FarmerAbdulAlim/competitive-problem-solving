#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, f, n;
        cin >> w >> f >> n;

        vector<int> strengths(n);
        for (int i = 0; i < n; ++i) {
            cin >> strengths[i];
        }

        sort(strengths.begin(), strengths.end());

        int waterSpells = 0, fireSpells = 0;
        for (int i = 0; i < n; ++i) {
            if (strengths[i] <= w) {
                ++waterSpells;
            } else if (strengths[i] <= f) {
                ++fireSpells;
            }
        }

        int time = min(waterSpells, fireSpells) + n;
        cout << time << endl;
    }

    return 0;
}
