#include <string>
#include <iostream>

bool isUnique ( const std::string& source ) {
	std::string containsString = "";

	for ( unsigned i = 0; i < source.length(); ++i ) {
		if ( containsString.find( source[i] ) != std::string::npos ) {
			std::cout << " does not contain unique characters.\n";

			return false;
		} else {
			containsString += source[i];
		}
	}

	return true;
}

int main () {
	std::string source = "some";

	if ( isUnique( source ) ) {
		std::cout << "the source string \"" << source << "\" contains unique characters.\n";
	}

	return 0;
}