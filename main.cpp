#include"lcs.hpp"
#include<iostream>

using namespace std;

int main(){
    LCS obj;
    obj.readFile();
    cout << "Length of the common sub str: " << obj.computeLCS() << endl;
    cout << "Common str: " << endl << obj.commonStr() << endl;

    return 0;
}
