#include <stdio.h>
#include <iostream>

int main() {

    int x, y;
    std::cout<<"Enter tow numbers"<<std::endl;
    std::cin>>x>>y;
    std::cout<<"x= "<<x<<std::endl;
    std::cout<<"y= "<<y<<std::endl;
    x=x+y;
    std::cout<<"x= "<<x<<std::endl;
    y=x-y;
    x=x-y;
    std::cout<<"x= "<<x<<std::endl;
    std::cout<<"y= "<<y<<std::endl;

}
