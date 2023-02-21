#include "funcs.h"
#include <iostream>
#include <string>

std::string box(int width, int height){

    std::string result;
    for(int i=0; i < height; i++){
        for(int i=0; i < width; i++){
            result = result + "*";
        }
        result = result + "\n";} 
    
    return result;
}
