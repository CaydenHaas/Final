#ifndef inversion_check_H
#define inversion_check_H

#include <iostream>
#include <cstring>

void check(std::string s)
{
    int invCount = 0;        // set inversion count to 0
    int it;                  // to hold value of the position of 0
    it = s.find('0');        // get position of 0 and set its value to it
    s.erase(s.begin() + it); // delete the position of it from string since it is  an empty space
    int n = s.length();      // set n to lenght of the string

    char arr[n];            // create array
    strcpy(arr, s.c_str()); // copy string into array

    for (int i = 0; i < n - 1; i++) // loop to count number of inversions
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                invCount++;
            }
        }
    }
    std::cout << "Number of inversions " << invCount << std::endl;
    if (invCount % 2 == 0)
    {
        std::cout << "initial board is solvable" << std::endl; // if even return true
    }
    else
        std::cout << "initial board is not solvable" << std::endl; // if odd return false
}

#endif