#include <iostream>
using namespace std;

int arr[20];
int cpm_count = 0;
int mov_count = 0;
int n;

void input () {
	while (true) {
		cout << "masukan panjang element array" << endl;
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "/masukan panjang array adalah 20" << endl;
	}

	cout << 