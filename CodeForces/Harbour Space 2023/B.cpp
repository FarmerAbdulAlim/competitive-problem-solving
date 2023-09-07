#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> operations;

    for (int i = 2; i <= N; ++i) {
        while (N % i == 0) {
            operations.push_back(N);
            N /= i;
        }
    }

    if (N > 1) {
        operations.push_back(N);
    }

    reverse(operations.begin(), operations.end());

    for (int op : operations) {
        cout << op << " ";
    }

    return 0;
}
