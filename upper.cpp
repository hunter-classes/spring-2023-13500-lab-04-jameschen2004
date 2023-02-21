#include "funcs.h"
#include <iostream>
#include <string>

std::string upper_triangle(int length){

    std::string result;
    for(int i=0; i < length; i++){

        for(int star=0; star <= length; star++){
            if(star > i){
                result = result + "*";
            }
            else{
                result = result + " ";
            }    
        }
        result = result + "\n";
    }
    return result;
}