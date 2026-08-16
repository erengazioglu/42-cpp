#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

int	main() {
	// create a file and write some content
	std::ofstream f_out("f1.txt");
	f_out << "hey123" << std::endl;
	f_out << "yo123" << std::endl;
	f_out.close();

	// read the file into a string stream
	std::string str;
	std::ifstream f_in("f1.txt");
	std::ostringstream oss;
	while (std::getline(f_in, str)) {
		oss << str << std::endl;
	}

	// write the content of the string stream to another file
	str = oss.str();
	f_out.open("f2.txt");
	f_out << str;
	f_out.close();

	// replace "123" with "456" in the string and write to a new file
	f_out.open("f3.txt");
	std::size_t	i = str.find("123");
	while (i != std::string::npos) {
		f_out << str.substr(0, i) << "456";
		str.erase(0, i + 3);
		i = str.find("123");
	}
	f_out << str;
	f_out.close();
	return 0;
}