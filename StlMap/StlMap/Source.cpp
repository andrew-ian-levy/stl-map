#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	map<int, string> foo;

	foo[93] = "Neptunium";
	foo[94] = "Plutonium";
	foo[95] = "Americium";
	foo[96] = "Curium";

	for (map<int, string>::iterator i = foo.begin(); i != foo.end(); ++i)
		cout << i->first << " - " << i->second << endl;

	foo.clear();

	cin.get();
	return 0;

}