#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

#include "SystemFunctions.h"
int main() {
	std::vector<std::string>sourceBuf;
	std::vector<std::string>lineBuf;
	std::ifstream script("Text.txt");
	ReadFile(script, sourceBuf);
	//SplitString(sourceBuf[0], lineBuf, ' ');
	printf("done\n");
	return 0;
}