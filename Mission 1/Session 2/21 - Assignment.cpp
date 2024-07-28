#include <iostream>
using namespace std;

int main() {

    int even1, even2, even3, even4;
	int odd1, odd2, odd3, odd4;

	cin >> odd1 >> even1;
	cin >> odd2 >> even2;
	cin >> odd3 >> even3;
	cin >> odd4 >> even4;

	int odd_sum = odd1 + odd2 + odd3 + odd4;
	int even_sum = even1 + even2 + even3 + even4;

	cout << even_sum << " " << odd_sum << "\n";

    return 0;

}