// BeginnerCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    // Prompt the user for a message to encode.
    std::cout << "Please enter the message you would like to have encoded. Only letters will be encoded.\n";
    std::string input = "";
    std::cin >> input;

    // Standardize input into all upper case letters.
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
