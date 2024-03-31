#include<iostream>

using namespace std;

int main(){
	float vGallons;
	cout << "Enter the value in gallons: ";
	cin >> vGallons;
	cout << "Value in cubic feet: " << (vGallons/7.481) << endl;
	return 0;
}
