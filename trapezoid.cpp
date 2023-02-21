#include "funcs.h"
#include <iostream>
#include <string>

std::string upside_down_trapezoid(int width, int height){

    std::string result;
    if(width < 2*height){
        result = result + "Impossible shape!";
    }

    else{    
        for(int i=0; i < height; i++){        
            for(int star=0; star < width; star++){
                if(star < i || star > (width-i)-1){
                    result = result + " ";
                }
                else{
                    result = result + "*";
                }
            }

            result = result + "\n";
        }
    }
    return result;
}   