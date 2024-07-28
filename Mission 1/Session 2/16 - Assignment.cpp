#include <iostream>
using namespace std;

int main() {

    int var1 = (1 + 2 == 3); // 1
    bool var2 = (3 - 3 != 0 || 5 > 1); // 1
    bool var3 = (3 - 3 != 0 || 5 < 1); // 0
    int var4 = (6 >= 7 && 3 != 5); // 0
    int var5 = (6 >= 6 && 3 != 5); // 1
    bool var6 = !(2345); // 0
    bool var7 = !(0); // 1
    int var8 = NULL; // 0
    int var9 = !(NULL); // 1 

    return 0;

}