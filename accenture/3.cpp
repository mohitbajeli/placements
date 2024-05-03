#include <iostream>

using namespace std;

void findBatonHolder(int n, long long t) {
    // Calculate the position of the baton
    long long pos = t % (2 * n);

    // Calculate the position of the friend holding the baton
    int holder;
    if (pos <= n) {
        holder = pos;
    } else {
        holder = 2 * n - pos;
    }

    // Calculate the position of the friend receiving the baton
    int receiver;
    if (pos == 0) {
        receiver = 1;
    } else if (pos == n) {
        receiver = n;
    } else if (pos < n) {
        receiver = pos + 1;
    } else {
        receiver = pos;
    }

    cout << "Baton holder: " << holder << endl;
    cout << "Baton receiver: " << receiver << endl;
}

int main() {
    int n;
    long long t;

    cout << "Enter the number of friends: ";
    cin >> n;
    cout << "Enter the time: ";
    cin >> t;

    findBatonHolder(n, t);

    return 0;
}
