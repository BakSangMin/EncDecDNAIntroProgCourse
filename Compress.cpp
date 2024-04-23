#include <fstream>
#include <iostream>
#include <Compress.h>

int ltrCount[3];

char charA;
char charT;
char charG;
char charC;

char aCount{ 0 };
char tCount{ 0 };
char gCount{ 0 };
char cCount{ 0 };

void openEncodingFile() {
	try {
		std::ofstream encodingFile("EncodingFile.txt");
		if (!encodingFile.is_open()) {
			throw 001;
		}

		encodingFile.close();
	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

void charCount() {
	try {
		std::ifstream encodingFile("EncodingFile.txt");
		if (!encodingFile.is_open()) {
			throw 001;
		}

		char currChar;

		while (encodingFile.get(currChar)) {
			if (currChar == charA) {
				aCount = aCount + 1;
			}
			else if (currChar == charC) {
				cCount = cCount + 1;
			}
			else if (currChar == charG) {
				gCount = gCount + 1;
			}
			else if (currChar == charT) {
				tCount = tCount + 1;
			}
		}

		std::cout << aCount << cCount << gCount << tCount;

		encodingFile.close();
	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}


//Struct to create a node
//Organise in accordance wiht wht appears most often nad create a new testfile to output to.
