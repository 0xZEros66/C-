#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int D;
    cin >> D;

    // Calculate pressure
    double pressure = D * 0.01;

    // Print the result with sufficient precision
    cout << fixed << setprecision(3) << pressure << endl;

    return 0;
}
