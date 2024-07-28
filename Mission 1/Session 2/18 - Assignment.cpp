#include <iostream>
using namespace std;

int main() {

    /*
        Hint: var = var + 10; same as var += 10;
    */
    int var = 10;
    var += 10;
    cout << var << endl; // 20
    var /= 2;
    cout << var << endl; // 10
    var -= 5;
    cout << var << endl; // 5
    var *= 5;
    cout << var << endl; // 25
    var %= 2;
    cout << var << endl; // 1

    return 0;

}