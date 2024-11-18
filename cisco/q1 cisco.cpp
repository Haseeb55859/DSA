#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1(10, -1); // Initialize vector with size 10 and all elements set to -1.
    vector<int> v2; 
    v2.reserve(10); // Reserve space for 10 elements in v2.

    for (unsigned i = 0; i < 10; i++) {
        v2.push_back(i); // Push elements 0 to 9 into v2.
    }

    cout << v2[0] << ", " << v1[0]; // Output the first elements of v2 and v1.

    return 0;
}
