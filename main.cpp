#include "gabbeSolution.h"



int main() {
    vector<int> nums = {2,5,6,9,10};


    int gcd = findGCD(nums);

    cout<<gcd<<endl;
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
