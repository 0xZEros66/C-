#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate the difference with long long to avoid overflow
    long long X = (A * B) - (C * D);

    // Print the result
    cout << "Difference = " << X << endl;

    return 0;
}
