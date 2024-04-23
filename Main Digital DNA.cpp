#include <iostream>
#include <Encode.h>
#include <Decode.h>
#include <fstream>

void textInputUI();
void createEncodingFile();
void encodeText();
void createEncodedFile();
void textOutputUI();
void createDecodingFile();
void createDecodedFile();
void decodeText();

void charCount();

void encodeFuncLogic() {
    createEncodingFile();
    createEncodedFile();
    encodeText();
}
void decodeFuncLogic() {
    createDecodingFile();
    createDecodedFile();
    encodeText();
}

int UILogicED = { 0 };
void UILogic() {
    std::cout << "Welcome! Choose to Encode or Decode! \n"
        << "[1] Encode \n"
        << "[2] Decode \n";
    std::cin >> UILogicED;
    if (UILogicED != 1 && UILogicED != 2) {
        system("cls");
        std::cout << "Error, invalid value entered \n";
        UILogic();
    }
}


int main(){

    UILogic();

    if (UILogicED == 1) {
        textInputUI();
        system("cls");
        textInputUI();
        createEncodingFile();
        createEncodedFile();
        encodeText();
    }
    else if (UILogicED == 2) {
        textOutputUI();
        system("cls");
        textOutputUI();
        createDecodingFile();
        createDecodedFile();
        decodeText();
    }
    //system("pause");
    //charCount();
}

