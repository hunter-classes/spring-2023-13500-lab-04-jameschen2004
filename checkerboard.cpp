#include "funcs.h"
#include <iostream>
#include <string>

std::string checkerboard(int width, int height){

    std::string result;
    for(int i=0; i < height; i++){
        if(i%2 == 0){
            for(int i=0; i < width; i++){
                if(i%2 == 0){
                    result = result + "*";
                }
                else{
                    result = result + " ";
                } 
            }
        }
        else{
            for(int i=0; i < width; i++){
                if(i%2 != 0){
                    result = result + "*";
                }
                else{
                    result = result + " ";    
                }
            }
        }
    result = result + "\n";
    }
    return result;
}