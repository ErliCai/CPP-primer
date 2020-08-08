//
//  Excercise 13 part 2.cpp
//  Excercise
//
//  Created by Erli Cai on 03/08/2020.
//  Copyright © 2020 Erli Cai. All rights reserved.
//

#include <stdio.h>

#include <iostream>
int main()
{
    int sum = 0;

    for (int val = 10;val >= 0;val--) {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;
    
    return 0;
}
