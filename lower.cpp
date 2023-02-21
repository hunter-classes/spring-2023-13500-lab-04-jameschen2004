#include "funcs.h"
#include <iostream>
#include <string>

std::string lower_triangle(int length){

    std::string result;
    for(int i=1; i <= length; i++){

        for(int star=1; star <= length; star++){
            if(star <= i){
                result = result + "*";
            }
        }
        result = result + "\n";
    }

    return result;
}