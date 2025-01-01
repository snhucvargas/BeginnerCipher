// BeginnerCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    // initialize variables
    std::string input = "";
    int cipherStep = 1;

    // Prompt the user for a message to encode.
    std::cout << "Please enter the message you would like to have encoded. Only letters will be encoded.\n";
    std::getline(std::cin, input);

    // Standardize input into all upper case letters.
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);

    // Iterate through the string
    for (int i = 0; i < input.size(); i++) {
        char encryptLetter = input[i] + cipherStep;

        // Check if encrypted letter is outside of the boundary
        if (encryptLetter > 'Z') {
            // Loop back around the start of the alphabet
            encryptLetter = encryptLetter - 'Z' + ('A' - 1);
        }
        
    }
    
}
