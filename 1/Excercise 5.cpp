//
//  Excercise 5.cpp
//  Excercise
//
//  Created by Erli Cai on 03/08/2020.
//  Copyright © 2020 Erli Cai. All rights reserved.
//

#include <iostream>

int main()
{
    // prompt user to enter two numbers
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 ;
    std::cout << " and " << v2 << " is ";
    std::cout << v1 + v2 << std::endl;
    return 0;
}

