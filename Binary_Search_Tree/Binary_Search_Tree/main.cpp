// Binary_Search_Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Cameron Burkholder
// Date: 09-21-2020

#include <iostream>
#include <string>
#include "../BST.h"

int main()
{
    std::cout << "Cameron Burkholder - LAB 2: Double-Threaded BST" << std::endl;
    const int NUM_INPUTS = 13;
    const int INT_INPUT[] = { 77, 70, 75, 66, 79, 68, 67, 69, 90, 85, 83, 87, 65 };
    const std::string STRING_INPUT[] = { "seventy-seven", "seventy", "seventy-five", "sixty-six", "seventy-nine", "sixty-eight", "sixty-seven", "sixty-nine", "ninety", "eighty-five", "eighty-three", "eighty-seven", "sixty-five" };

    BST<int, std::string>* dictionary = new BST<int, std::string>();

    for (int i = 0; i < NUM_INPUTS; i++) {
        dictionary->insert(INT_INPUT[i], STRING_INPUT[i]);
    }

    system("pause");
    return 0;
}
