#include "store.h"
#include <iostream>

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	Store store;

	cin >> store;

	cout << store.fits();

	return 0;
}