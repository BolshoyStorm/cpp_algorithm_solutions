#include <assert.h>

#include "gabbeSolution.h"



int main() {

    string s1 = "abccccdd";
    string s2 = "a";
    string s3 = "Abba";

    assert(longestPalindrome(s1) == 7);
    assert(longestPalindrome(s2) == 1);
    assert(longestPalindrome(s3) == 3);

    cout<<"complete"<<endl;
    return 0;

}

void displayVector(vector<int> v) {
    cout<<"{";
    for (int i = 0; i<v.size(); i++) {
        cout<<v[i];
        if (i < v.size()-1)
            cout<<",";
    }
    cout<<"}"<<endl;

}
