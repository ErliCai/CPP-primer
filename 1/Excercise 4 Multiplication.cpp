//
//  Excercise 4 Multiplication.cpp
//  Excercise
//
//  Created by Erli Cai on 01/08/2020.
//  Copyright © 2020 Erli Cai. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(){
    std::cout << "Please enter two numbers:" << std::endl;
    int v1 = 0  ,  v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << v1 << " * "<< v2
    << " is "<< v1 * v2 << std::endl;
    
    return0;
}
