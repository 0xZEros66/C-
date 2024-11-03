#include <iostream>
using namespace std;

int main() {
    int N, W;
    // Read input
    cin >> N >> W;

    // Calculate the maximum number of bricks
    int max_bricks = N / W;  // Integer division gives us the maximum whole number of bricks

    // Print the result
    cout << max_bricks << endl;

    return 0;
}