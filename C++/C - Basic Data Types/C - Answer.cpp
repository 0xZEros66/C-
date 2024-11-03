#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long long ll;
    char c;
    float f;
    double d;

    // Read the input values
    cin >> i >> ll >> c >> f >> d;

    // Print each value on a new line with appropriate formatting
    cout << i << endl;
    cout << ll << endl;
    cout << c << endl;
    cout << fixed << setprecision(2) << f << endl;  // Display float with 2 decimal points
    cout << fixed << setprecision(5) << d << endl;  // Display double with 5 decimal points

    return 0;
}