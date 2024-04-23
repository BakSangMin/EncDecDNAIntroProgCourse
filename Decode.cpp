#include "Decode.h"
#include <iostream>
#include <fstream>
#include <string>

std::string textOut;
char dec{};
char buffer[4];

void textOutputUI() {
    std::cout << "Decoding Selected, to begin, type or paste your encoded text here! \n"
		<< "Note: This program is for DNA and doesn't yet support uracil \n";
	std::getline(std::cin, textOut);
}

void createDecodingFile() {
	try {
		std::ofstream decodingFile("DecodingFile.txt");

		if (!decodingFile.is_open()) {
			throw 001;
		}

		decodingFile << textOut;

		decodingFile.close();


	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

void createDecodedFile() {
	try {
		std::ofstream decodedFile("DecodedFile.txt");

		if (!decodedFile.is_open()) {
			throw 001;
		}

		decodedFile.close();

	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}

void decodeLogic(const std::string& threeChars) {
	
	// open the decoded file in append mode
	std::ofstream decodedFile("decodedFile.txt", std::ios::app);

	// check if the file is open
	if (!decodedFile.is_open()) {
		std::cout << " Error 001: file failed to open " << std::endl;
		return;
	}

    if (threeChars == "AAA") {
        decodedFile << "A";
    }
    else if (threeChars == "AAC") {
        decodedFile << "B";
    }
    else if (threeChars == "AAG") {
        decodedFile << "C";
    }
    else if (threeChars == "AAT") {
        decodedFile << "D";
    }
    else if (threeChars == "ACA") {
        decodedFile << "E";
    }
    else if (threeChars == "ACC") {
        decodedFile << "F";
    }
    else if (threeChars == "ACG") {
        decodedFile << "G";
    }
    else if (threeChars == "ACT") {
        decodedFile << "H";
    }
    else if (threeChars == "AGA") {
        decodedFile << "I";
    }
    else if (threeChars == "AGC") {
        decodedFile << "J";
    }
    else if (threeChars == "AGG") {
        decodedFile << "K";
    }
    else if (threeChars == "AGT") {
        decodedFile << "L";
     }
    else if (threeChars == "ATA") {
        decodedFile << "M";
    }
    else if (threeChars == "ATC") {
        decodedFile << "N";
    }
    else if (threeChars == "ATG") {
        decodedFile << "O";
    }
    else if (threeChars == "ATT") {
        decodedFile << "P";
    }
    else if (threeChars == "CAA") {
        decodedFile << "Q";
    }
    else if (threeChars == "CAC") {
        decodedFile << "R";
    }
    else if (threeChars == "CAG") {
        decodedFile << "S";
    }
    else if (threeChars == "CAT") {
        decodedFile << "T";
    }
    else if (threeChars == "CCA") {
        decodedFile << "U";
    }
    else if (threeChars == "CCC") {
        decodedFile << "V";
    }
    else if (threeChars == "CCG") {
        decodedFile << "W";
    }
    else if (threeChars == "CCT") {
        decodedFile << "X";
    }
    else if (threeChars == "CGA") {
        decodedFile << "Y";
    }
    else if (threeChars == "CGC") {
        decodedFile << "Z";
    }
    else if (threeChars == "CGG") {
        decodedFile << "a";
    }
    else if (threeChars == "CGT") {
        decodedFile << "b";
    }
    else if (threeChars == "CTA") {
        decodedFile << "c";
    }
    else if (threeChars == "CTC") {
        decodedFile << "d";
    }
    else if (threeChars == "CTG") {
        decodedFile << "e";
    }
    else if (threeChars == "CTT") {
        decodedFile << "f";
    }
    else if (threeChars == "GAA") {
        decodedFile << "g";
    }
    else if (threeChars == "GAC") {
        decodedFile << "h";
    }
    else if (threeChars == "GAG") {
        decodedFile << "i";
    }
    else if (threeChars == "GAT") {
        decodedFile << "j";
    }
    else if (threeChars == "GCA") {
        decodedFile << "k";
    }
    else if (threeChars == "GCC") {
        decodedFile << "l";
    }
    else if (threeChars == "GCG") {
        decodedFile << "m";
    }
    else if (threeChars == "GCT") {
        decodedFile << "n";
    }
    else if (threeChars == "GGA") {
        decodedFile << "o";
    }
    else if (threeChars == "GGC") {
        decodedFile << "p";
    }
    else if (threeChars == "GGG") {
        decodedFile << "q";
    }
    else if (threeChars == "GGT") {
        decodedFile << "r";
    }
    else if (threeChars == "GTA") {
        decodedFile << "s";
    }
    else if (threeChars == "GTC") {
        decodedFile << "t";
    }
    else if (threeChars == "GTG") {
        decodedFile << "u";
    }
    else if (threeChars == "GTT") {
        decodedFile << "v";
    }
    else if (threeChars == "TAA") {
        decodedFile << "w";
    }
    else if (threeChars == "TAC") {
        decodedFile << "x";
    }
    else if (threeChars == "TAG") {
        decodedFile << "y";
    }
    else if (threeChars == "TAT") {
        decodedFile << "z";
    }
    else if (threeChars == "TCA") {
        decodedFile << "0";
    }
    else if (threeChars == "TCC") {
        decodedFile << "1";
    }
    else if (threeChars == "TCG") {
        decodedFile << "2";
    }
    else if (threeChars == "TCT") {
        decodedFile << "3";
    }
    else if (threeChars == "TGA") {
        decodedFile << "4";
    }
    else if (threeChars == "TGC") {
        decodedFile << "5";
    }
    else if (threeChars == "TGG") {
        decodedFile << "6";
    }
    else if (threeChars == "TGT") {
        decodedFile << "7";
    } 
    else if (threeChars == "TTA") {
        decodedFile << "8";
    }
    else if (threeChars == "TTC") {
        decodedFile << "9";
    }
    else if (threeChars == "TTG") {
        decodedFile << ",";
    }
    else if (threeChars == "TTT") {
        decodedFile << " ";
    }

}

void decodeText() {
	
    try {
		std::ifstream decodingFile("DecodingFile.txt");
		if (!decodingFile.is_open()) {
			throw 001;
		}


		while (decodingFile.read(buffer, 3)) {
			buffer[3] = '\0';
			decodeLogic(buffer);
		}

		decodingFile.close();
		system("DecodedFile.txt");
	}
	catch (...) {
		std::cout << " Error 001: file failed to open \n";
	}
}