#include <iostream>

using namespace std;

int  main() {
	int height;
	char symbol;

	cout << "Enter the height : ";
	cin >> height;

	cout << "Enter the symbol : ";
	cin >> symbol;

	cout << endl;

	for (int x = 0; x <= height; x++)
	{
		for (int j = height; j>x; j--)
			cout << symbol;
		cout << endl;
	}
	return 0;
}
