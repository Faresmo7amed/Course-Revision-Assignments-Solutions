#include <iostream>
using namespace std;

int main() {

    cout << 5 + 5 - 5 << endl; // 5
    cout << 5 + 5 * 5 << endl; // 30
    cout << 5 - 5 + 5 << endl; // 5
    cout << 5 / 5 + 5 << endl; // 6
    cout << 5 + 5 / 5 << endl; // 6
    cout << 5 + 5 - 5 * 5 / 5 << endl; // 5
    cout << (5 + 5 - 5) << endl; // 5
    cout << ((5 + 5) * 5) << endl; // 50
    cout << (5 - (5 + 5)) << endl; // -5
    cout << (5 / (5 + 5)) << endl; // 0
    cout << ((5 + 5) / 5) << endl; // 2
    cout << ((5 + 5) - (5 * 5) / 5) << endl; // 5

    return 0;

}