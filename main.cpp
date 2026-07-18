#include <assert.h>

#include "gabbeSolution.h"



int main() {
    vector<int> nums1 = {6,7,9};
    vector<int> nums2 = {1,2,5,3};
    vector<int> nums3 = {5,5};
    vector<int> nums4 = {2,6,5,10};

    assert(findGCD(nums1) == 3);
    assert(findGCD(nums2) == 1);
    assert(findGCD(nums3) == 5);
    assert(findGCD(nums4) == 2);

    cout<<"Complete!";
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
