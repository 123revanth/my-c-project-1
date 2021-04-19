#include <iostream>
using namespace std;
int main()
{

	int arr[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "________________________";
	int finder;
	cout << "enter the number you want to find:";
	cin >> finder;

	bool flag = false;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == finder) {
				cout << finder << " found"<<endl;	
				flag = true;
			}
		}
	}
	cout << flag;
	cout<<"return next time.";
	cout<<"this is the end of the first patch."<<endl<<"we will be releasing the second patch soon.";
	return 0;
}
