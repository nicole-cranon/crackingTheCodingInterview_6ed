#include <string>
#include <iostream>

bool isUnique ( const std::string& source ) {
	std::string containsString = "";

	for ( unsigned i = 0; i < source.length(); ++i ) {
		if ( containsString.find( source[i] ) != std::string::npos ) {
			return false;
		} else {
			containsString += source[i];
		}
	}

	return true;
}

int main (int argc, char* argv[]) {

	if (argc != 2) {
		std::cout << "Error: An input string must be provided.\n";
		std::cout << "\t./isUnique <source string>\n";

		return -1;
	}

	std::string source = "";
	source += argv[1];

	if ( isUnique( source ) ) {
		std::cout << "the source string \"" << source << "\" contains unique characters.\n";
	} else {
		std::cout << "the source string \"" << source << "\" does not contain unique characters.\n";
	}

	return 0;
}