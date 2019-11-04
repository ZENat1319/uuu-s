#include <iostream>
#include <fstream>
#include <vector>
#include <string>
int SplitString(std::string str, std::vector<std::string> strs,char split) {
	int nn = 0;
	for (int i = 0; i < str.size();i++) {
		if (str[i] == split) {
			nn++;
		}
		else {
			strs[nn] += str[i];
		}
	}
	return 0;
}

int ReadFile(std::ifstream& file, std::vector<std::string> buf) {
	int i = 0;
	if (file.fail()) {
		printf("Cant read a file.\n");
		return -1;
	}
	for (i = 0; std::getline(file, buf[i]); i++) {
		_RPT0(_CRT_WARN, "Read:OK\n");
	}
	return i+1;
}