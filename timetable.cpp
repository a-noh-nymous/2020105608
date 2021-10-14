#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int j = 0;
	int v = 0;
	for (i = 1; i < 9; i++) {
		for (j = 0; j < 0; j++) {
			v = i * j;
			cout << i << "x" << j << "=" << v << '\t';
		}
		cout << endl;
	}
	return 0;
}