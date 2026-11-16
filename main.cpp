#include <assert.h>

#include "gabbeSolution.h"



int main() {

    string s1 = "Hello World";
    string s2 = "   fly me   to   the moon  ";
    string s3 = "luffy is still joyboy";


    cout<<lengthOfLastWord(s1)<<endl;
    cout<<lengthOfLastWord(s2)<<endl;
    cout<<lengthOfLastWord(s3)<<endl;

    assert(lengthOfLastWord(s1) == 5);
    assert(lengthOfLastWord(s2) == 4);
    assert(lengthOfLastWord(s3) == 6);

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
