// BeginnerCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>

// TODO: Write an encoder and decoder function

std::string encodeMessage(std::string message, int cipherStep) {
    return "Finish encoder function.";
}

std::string decodeMessage(std::string codedMessage, int cipherStep) {
    return "Finish decoder function.";
}

int main()
{
    // initialize variables
    std::string input = "";
    int cipherStep = 1;
    int alphaStart = 65;
    int alphaEnd = 122;

    // TODO: Add a prompt for the user to select whether they want to
    // encode or decode a message.

    // TODO: Run a while loop for repeated use

    // For encoding
    // Prompt the user for a message to encode.
    std::cout << "Please enter the message you would like to have encoded.\n";
    std::getline(std::cin, input);

    // Iterate through the string
    for (int i = 0; i < input.size(); i++) {
        // If the character is not a letter, leave as-is
        if ((int)input[i] < alphaStart || (int)input[i] > alphaEnd) {
            continue;
        }
        else {
            char encryptLetter = input[i] + cipherStep;

            // Check if encrypted letter is outside of the boundary
            // for lowercase
            if (encryptLetter > 'a') {
                if (encryptLetter > 'z') {
                    encryptLetter = encryptLetter - 'z' + ('a' - 1);
                }
            }
            // for uppercase
            else if (encryptLetter > 'A') {
                if (encryptLetter > 'Z') {
                    // Loop back around the start of the alphabet
                    encryptLetter = encryptLetter - 'Z' + ('A' - 1);
                }
            }

            input[i] = encryptLetter;
        }
        
    }

    // Print out the encrypted message.
    std::cout << "Here is your encoded message:\n";
    std::cout << input;    

    // For decoding
    // std::cout << "Please enter a message you would like to have decoded.\n"
    // std::getline(std::cin, input);
}
