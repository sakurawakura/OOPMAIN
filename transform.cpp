#include <iostream>

// TO get the binary number you need to devide by 2 and get the remainder then once you have all 8 number you can reverse the list and print to get the binary numebr


void DecToBin(int convNum) {
    int newNum = 0;   // This will store the binary number
    int place = 1;    // Place value, used for building the binary number in reverse

    // Loop to process the number until it becomes 0
    while (convNum > 0) {
        int remainder = convNum % 2;  // Get the remainder (0 or 1)
        newNum += remainder * place;  // Add the remainder to the newNum, taking place value into account
        place *= 10;  // Increase place value for the next binary digit
        convNum /= 2;  // Divide the number by 2 to reduce it
    }

    // Output the binary number
    std::cout << "Binary: " << newNum << std::endl;
}

int main() {
    int convNum = 75;
    DecToBin(convNum);  // Call the function with 75

    return 0;
    
}
