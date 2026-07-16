#include "gabbeSolution.h"



int main() {
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,4,6,8,10};
    vector<int> v3 = {-1,-2,-3,4,1,1,1};

    vector<int> resultVector =  twoSum(v3,2);

    displayVector(resultVector);

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
