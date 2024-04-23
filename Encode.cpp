#include "Encode.h"
#include <iostream>
#include <fstream>
#include <string>

std::string textIn;
char enc{};

void textInputUI() {
	std::cout << "Encoding Selected, to begin, type or paste your text here!\n";
	std::getline(std::cin, textIn);
}

void createEncodingFile(){
	try {
		std::ofstream encodingFile("EncodingFile.txt");

		if (!encodingFile.is_open()) {
			throw 001;
		}

		encodingFile << textIn;
		
		encodingFile.close();


	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

void createEncodedFile() {
	try {
		std::ofstream encodedFile("EncodedFile.txt");

		if (!encodedFile.is_open()) {
			throw 001;
		}

		encodedFile.close();

	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

void encodeLogic() {
	// open the encoded file in append mode
	std::ofstream encodedFile("EncodedFile.txt", std::ios::app);

	// check if the file is open
	if (!encodedFile.is_open()) {
		std::cout << " Error 001: file failed to open " << std::endl;
		return;
	}

	// use a switch statement to match each character to a codon
	switch (enc) {
	case 'A':
		encodedFile << "AAA";
		break;
	case 'B':
		encodedFile << "AAC";
		break;
	case 'C':
		encodedFile << "AAG";
		break;
	case 'D':
		encodedFile << "AAT";
		break;
	case 'E':
		encodedFile << "ACA";
		break;
	case 'F':
		encodedFile << "ACC";
		break;
	case 'G':
		encodedFile << "ACG";
		break;
	case 'H':
		encodedFile << "ACT";
		break;
	case 'I':
		encodedFile << "AGA";
		break;
	case 'J':
		encodedFile << "AGC";
		break;
	case 'K':
		encodedFile << "AGG";
		break;
	case 'L':
		encodedFile << "AGT";
		break;
	case 'M':
		encodedFile << "ATA";
		break;
	case 'N':
		encodedFile << "ATC";
		break;
	case 'O':
		encodedFile << "ATG";
		break;
	case 'P':
		encodedFile << "ATT";
		break;
	case 'Q':
		encodedFile << "CAA";
		break;
	case 'R':
		encodedFile << "CAC";
		break;
	case 'S':
		encodedFile << "CAG";
		break;
	case 'T':
		encodedFile << "CAT";
		break;
	case 'U':
		encodedFile << "CCA";
		break;
	case 'V':
		encodedFile << "CCC";
		break;
	case 'W':
		encodedFile << "CCG";
		break;
	case 'X':
		encodedFile << "CCT";
		break;
	case 'Y':
		encodedFile << "CGA";
		break;
	case 'Z':
		encodedFile << "CGC";
		break;
	case 'a':
		encodedFile << "CGG";
		break;
	case 'b':
		encodedFile << "CGT";
		break;
	case 'c':
		encodedFile << "CTA";
		break;
	case 'd':
		encodedFile << "CTC";
		break;
	case 'e':
		encodedFile << "CTG";
		break;
	case 'f':
		encodedFile << "CTT";
		break;
	case 'g':
		encodedFile << "GAA";
		break;
	case 'h':
		encodedFile << "GAC";
		break;
	case 'i':
		encodedFile << "GAG";
		break;
	case 'j':
		encodedFile << "GAT";
		break;
	case 'k':
		encodedFile << "GCA";
		break;
	case 'l':
		encodedFile << "GCC";
		break;
	case 'm':
		encodedFile << "GCG";
		break;
	case 'n':
		encodedFile << "GCT";
		break;
	case 'o':
		encodedFile << "GGA";
		break;
	case 'p':
		encodedFile << "GGC";
		break;
	case 'q':
		encodedFile << "GGG";
		break;
	case 'r':
		encodedFile << "GGT";
		break;
	case 's':
		encodedFile << "GTA";
		break;
	case 't':
		encodedFile << "GTC";
		break;
	case 'u':
		encodedFile << "GTG";
		break;
	case 'v':
		encodedFile << "GTT";
		break;
	case 'w':
		encodedFile << "TAA";
		break;
	case 'x':
		encodedFile << "TAC";
		break;
	case 'y':
		encodedFile << "TAG";
		break;
	case 'z':
		encodedFile << "TAT";
		break;
	case '0':
		encodedFile << "TCA";
		break;
	case '1':
		encodedFile << "TCC";
		break;
	case '2':
		encodedFile << "TCG";
		break;
	case '3':
		encodedFile << "TCT";
		break;
	case '4':
		encodedFile << "TGA";
		break;
	case '5':
		encodedFile << "TGC";
		break;
	case '6':
		encodedFile << "TGG";
		break;
	case '7':
		encodedFile << "TGT";
		break;
	case '8':
		encodedFile << "TTA";
		break;
	case '9':
		encodedFile << "TTC";
		break;
	case '.':
		encodedFile << "TTG";
		break;
	case ' ':
		encodedFile << "TTT";
		break;
	}

	// close the encoded file
	encodedFile.close();
}

void encodeText() {
	try {
		std::ifstream encodingFile("EncodingFile.txt");
		if (!encodingFile.is_open()) {
			throw 001;
		}

		while (encodingFile.get(enc)) {
			encodeLogic();
		}

		encodingFile.close();
		system("encodedFile.txt");
	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

