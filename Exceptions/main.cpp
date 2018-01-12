#include <iostream>
using namespace std;

void badAlloc() {
	cout << "Allocating memory" << endl;
	char* memory = new char[9999999999999999];
	delete [] memory;
}

int main() {
	try {
		badAlloc();
	} catch (bad_alloc &e) {
		cout << e.what() << endl;
	}

	cout << "No exceptions!" << endl;
	return 0;
}
