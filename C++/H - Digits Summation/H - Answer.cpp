#include <iostream>
using namespace std;

int main() {
    long long N, M;
    // Read the input
    cin >> N >> M;

    // Find the last digits
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;

    // Calculate the summation of the last digits
    int result = last_digit_N + last_digit_M;

    // Print the result
    cout << result << endl;

    return 0;
}
