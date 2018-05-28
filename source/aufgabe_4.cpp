#include <iostream>
#include "circle.hpp"
#include <set>
#include <string>
#include <algorithm>

int main(){
    Circle c1(200.0f,{200,200},{1.0f,1.0f,0.0f},"Kreis_1");
    Circle c2(1100.0f,{200,900},{1.0f,1.0f,1.0f},"Kreis_2");
    Circle c3(10.0f,{900,300},{0.0f,1.0f,1.0f},"Kreis_3");
    Circle c4(300.0f,{2200,100},{0.0f,1.0f,0.0f},"Kreis_3");

    std::set<Circle> circles;
    circles.insert(c1);
    circles.insert(c2);
    circles.insert(c3);
    circles.insert(c4);

    std::cout <<"NAME: \n";
    std::string search;
    std::cin >> search;

    for(auto it= circles.begin(); it!= circles.end(); it++){
        if((*it).get_name().compare(search)==0){
            std::cout <<*it;
        }
    }

    return 0;
}