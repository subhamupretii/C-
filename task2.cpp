#include <iostream>

using namespace std;

int isBouncyNumber(int n) {
    int increasing = 0, decreasing = 0, prev_digit = n % 10;
    n /= 10;
    
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit < prev_digit) {
            increasing = 1;
        } else if (current_digit > prev_digit) {
            decreasing = 1;
        }
        
        if (increasing && decreasing) {
            return 1; 
        }
        
        prev_digit = current_digit;
        n /= 10;
    }
    return 0; 
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 100) {
        cout << num << " is NOT a bouncy number (must be at least 100)." << endl;
    } else if (isBouncyNumber(num)) {
        cout << num << " is a bouncy number." << endl;
    } else {
        cout << num << " is NOT a bouncy number." << endl;
    }
    
    return 0;
}
