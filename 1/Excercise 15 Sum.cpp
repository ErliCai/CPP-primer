//
//  Excercise 15 Sum.cpp
//  Excercise
//
//  Created by Erli Cai on 05/08/2020.
//  Copyright © 2020 Erli Cai. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(){
    
    int sum=0, v1=0;
    while (std::cin >> v1){
        sum += v1;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
