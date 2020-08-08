//
//  Excercise 13.cpp
//  Excercise
//
//  Created by Erli Cai on 03/08/2020.
//  Copyright © 2020 Erli Cai. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(){
    
    int sum = 0;
    for (int val=50; val <= 100; val++){
        sum += val;
    }
    
    std::cout << "Sum from 50 to 100 is " << sum << std::endl;
    return 0;
}
