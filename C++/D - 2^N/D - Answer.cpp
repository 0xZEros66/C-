#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input integer N

    int result = 1 << N; // Calculate 2^N using bit-shifting

    cout << result << endl; // Output the result

    return 0;
}