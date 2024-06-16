#include <stdio.h>
#include <iostream>

int main(){
    int x,y,i;

std::cout<<"Enter tow numbers: "<<std::endl;
std::cin>>x>>y;
std::cout<<"Values before swap: "<<std::endl;
std::cout<<"x= "<<x<<std::endl;
std::cout<<"y= "<<y<<std::endl;
i=x+y;
x=i-x;
y=i-y;
std::cout<<"Values after swap: "<<std::endl;
std::cout<<"x= "<<x<<std::endl;
std::cout<<"y= "<<y<<std::endl;
return 0;


}
