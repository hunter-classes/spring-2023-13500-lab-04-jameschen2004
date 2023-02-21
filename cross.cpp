#include "funcs.h"
#include <iostream>
#include <string>

std::string cross(int size){

    std::string result;

    for(int i=0; i < size; i++){

        for(int star=0; star < size; star++){

            if(i==star || star==(size-i)-1){
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