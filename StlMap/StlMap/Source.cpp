#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	// declare map with int key & string value pair
	map<int, string> foo;

	// add values
	foo[93] = "Neptunium";
	foo[94] = "Plutonium";
	foo[95] = "Americium";
	foo[96] = "Curium";

	// print key/value pairs
	for (map<int, string>::iterator i = foo.begin(); i != foo.end(); ++i)
		cout << i->first << " - " << i->second << endl;

	foo.clear();

	cin.get();
	return 0;

}