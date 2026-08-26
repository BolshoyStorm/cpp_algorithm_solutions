
#include <algorithm>
#include <ranges>

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
    int resultatNumber = 0;
    int numArr[7]     = {1  ,5  ,10 ,50 ,100,500,1000};
    char letterArr[7] = {'I','V','X','L','C','D','M'};

    for (int i = 0; i < s.size(); i++) {
        int currentLetter = 0;
        int nextLetter = 0;

        for (int j = 0; j<7; j++) {
            if (s[i] == letterArr[j])
                currentLetter = numArr[j];
        }
        if (i+1 < s.size()) {
            for (int k = 0; k<7; k++)
                if (s[i+1] == letterArr[k])
                    nextLetter = numArr[k];
        }

        if (currentLetter < nextLetter)
            resultatNumber -= currentLetter;
        else
            resultatNumber += currentLetter;
    }
    return resultatNumber;
}

// Returns a vector containing the indices(plural of index) of two elements in nums that add up to target
// [1,2,4,5] target = 9,    [2,3]
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> resultVec = {};
    for (int i = 0; i<nums.size(); i ++) {
        for (int j = i; j > 0; j--) {
            if (nums[i] + nums[j] == target) {
                resultVec.push_back(j);
                resultVec.push_back(i);
                return resultVec;
            }
        }
    }
    return resultVec;
}

//Returns the greatest common divisor (GCD) of an array.
int findGCD(vector<int>& nums) {
    int largestNum  = nums[0];
    int smallestNum = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largestNum)
            largestNum = nums[i];

        if (nums[i] < smallestNum)
            smallestNum = nums[i];
    }

    for (int j = smallestNum; j >= 1; j--) {
        if ((largestNum % j == 0) && (smallestNum % j) == 0)
            return j;
    }
    return 1;

}

// Checks if the array can form an arithmetic progression.
bool canMakeArithmeticProgression(vector<int>& arr) {

    sort(arr.begin(), arr.end());

    int d = arr[1] - arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i + 1] - arr[i] != d)
            return false;
    }
    return true;
}