#include <iostream>

using namespace std;

// Function to count the even numbers in the array
int count(int array[], int n) {
    int even_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            even_count++;
        }
    }
    
    return even_count;
}
