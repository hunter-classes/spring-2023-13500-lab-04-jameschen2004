#include "funcs.h"
#include <iostream>

int main(){

    std::cout << "box(5,5): \n" << box(5,5);
    std::cout << "----------------\n";
    std::cout << "checkerboard(5,6): \n" << checkerboard(5,6);
    std::cout << "----------------\n";
    std::cout << "cross(9): \n" << cross(9);
    std::cout << "----------------\n";
    std::cout << "lower_triangle(6): \n" << lower_triangle(6);
    std::cout << "----------------\n";
    std::cout << "upper_triangle(5): \n" << upper_triangle(5);
    std::cout << "----------------\n";
    std::cout << "upside_down_trapezoid(12,4): \n" << upside_down_trapezoid(12,4);
    std::cout << "----------------\n";
    std::cout << "checkerboard3x3(20,20): \n" << checkerboard3x3(20,20);

    return 0;
}