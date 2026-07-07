#include <string>

#include "gabbeSolution.h"

// Return true if number is palindrone
//example 121 = true, -111 = false
bool isPalindrome(int x) {
    if(x<0)
        return false;

    int original = x;
    long int reversedX=0;

    while (original>0){

        int digit = original%10;
        reversedX =  digit + (reversedX*10);
        original = original/10;
    }

    if(reversedX == x)
        return true;
    return false;

}

// Retruns integer of roman number/numbers
int romanToInt(string s) {

    return 0;
}