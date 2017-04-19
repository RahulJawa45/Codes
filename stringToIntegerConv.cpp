// string to interger conversion
#include <iostream>
#include<string>
using namespace std;

int main() {
	int i;
	string s = "25";
	int x = stoi(s);
	int y = std::stoi(s);
	int z = atoi(s.c_str());

	cout<<x+y+z;

	return 0;
}