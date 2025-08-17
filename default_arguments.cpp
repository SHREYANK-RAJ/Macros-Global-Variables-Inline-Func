#include <iostream>
using namespace std;

// Function to display array elements from a given position
void showArray(int nums[], int length, int fromIndex = 0) {
    for (int i = fromIndex; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
}

int main() {
    // My test array
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    
    // Print from start
    showArray(numbers, 10);

    // Print from index 4
    showArray(numbers, 10, 4);

    // Print from index 7
    showArray(numbers, 10, 7);

    return 0;
}
