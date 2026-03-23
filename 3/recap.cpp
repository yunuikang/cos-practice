#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (b > a) {
		int sum = 0;
		for (int i = a; i <= b; i++) {
			sum += i;
		}
		cout << sum << endl;
	} else {
		cout << "quit" << endl;
		return 0;
	}
	return 0;
}
