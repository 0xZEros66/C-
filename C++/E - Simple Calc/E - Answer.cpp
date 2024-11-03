#include <iostream>
using namespace std;

int main() {
    long long X, Y;  // Use long long for larger numbers
    cin >> X >> Y;

    // Calculate results with long long to avoid overflow
    long long sum = X + Y;
    long long product = X * Y;
    long long difference = X - Y;

    // Print results in the specified format
    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << product << endl;
    cout << X << " - " << Y << " = " << difference << endl;

    return 0;
}
