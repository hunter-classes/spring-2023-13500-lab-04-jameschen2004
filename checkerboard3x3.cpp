#include "funcs.h"
#include <iostream>
#include <string>

std::string checkerboard3x3(int width, int height){
    
    std::string result;

    for(int i=1; i <= height; i++){
        if(i%6 < 4 && i%6 != 0){
            for(int star=1; star <= width; star++){
                if(star%6 < 4 && star%6 != 0){
                    result = result + "*";
                }
                else{
                    result = result + " ";
                }
            }
        }
        else{
            for(int star=1; star <= width; star++){
                if(star%6 < 4 && star%6 != 0){
                    result = result + " ";
                }
                else{
                    result = result + "*";
                }
            }
        }
        result = result + "\n";
    }
    return result;


}