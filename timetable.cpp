#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			v = i * j;
			cout << i << "x" << j << "=" << i * j << '\t';
		}
		cout << endl;
	}
	return 0;
}