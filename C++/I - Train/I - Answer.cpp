#include <iostream>
using namespace std;

int main() {
    int N, i;
    // Read input
    cin >> N >> i;

    // Calculate the j-th car from the back
    int j = N - i + 1;

    // Print the result
    cout << j << endl;

    return 0;
}