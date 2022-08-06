
// C++ program to demonstrate isalnum()
#include <cctype>
#include <iostream>
using namespace std;

// Driver Code
int main() {
	
	// initializing character array
	char ch[5] = "g1";

	// checking for isalnum() function
	for (int i = 0; i < 2; i++) {
		
		if (isalnum(ch[i])) {
			cout << ch[i] << " is alphanumeric" << endl;
		} else {
			cout << ch[i] << " is not alphanumeric" << endl;
		}
	
	}
	return 0;

} // End code
