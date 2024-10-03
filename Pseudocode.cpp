#include <iostream>

using namespace std;

int main()  
{
	float a, b, c;
	
	cout << "A : ";
	cin >> a;
	cout << "B : ";
	cin >> b;
	cout << "C : ";
	cin >> c;
	
	if (a > b) {
		if (a > b){
			cout << "A is the largest";
		} else {
			cout << "C is the largest";
		}
	} else if (b > a) {
		if (b > c) {
			cout << "B is the largest";
		} else {
			cout << "C is the largest";
		}
	} else {
		cout << "C is the largest";
	}
	return 0;

}
