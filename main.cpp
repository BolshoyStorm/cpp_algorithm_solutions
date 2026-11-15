#include <assert.h>

#include "gabbeSolution.h"



int main() {
    vector<int> v1 ={1,1,2};
    vector<int> v2 ={0,0,1,1,1,2,2,3,3,4};

    cout<<removeDuplicates(v1)<<endl;
    cout<<removeDuplicates(v2)<<endl;
    cout<<"comple !";
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
