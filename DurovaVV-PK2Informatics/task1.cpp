#include <iostream>

using namespace std;



void modify(int* ptr) {

    *ptr = 20;

}



int main() {

    int* p = new int(10);

    modify(p);

    cout << *p << endl;

    delete p;

    return 0;

}