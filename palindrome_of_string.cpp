#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;  
    
    while (start < end) {
        swap(str[start], str[end]); 
        start++;  
        end--;    
    }
}

bool isPalindrome(const char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;  
        }
        start++;
        end--;
    }
    return true; 
}

int main() {
    char input[100];
    
    
    cout << "Enter a string: ";
    cin.getline(input, 100);  
    
   
    reverseString(input);
    
    
    cout << "Reversed string: " << input << endl;
    
    
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}
