#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <vector>
#include <algorithm>
#include "catch.hpp"

#include "circle.hpp"


TEST_CASE("Circle_sort")
{
    Circle c1 {20, {200,200}, {1,1,0}, "Kreis_1"};
    Circle c2 {400, {10,666}, {0,1,0}, "Kreis_2"};
    Circle c3 {6, {1110,53}, {0.4,0,0}, "Kreis_3"};    
    
    std::vector<Circle> sorted_circles;

    sorted_circles.push_back(c1);
    sorted_circles.push_back(c2);
    sorted_circles.push_back(c3);

    std::sort(sorted_circles.begin(), sorted_circles.end(),[](Circle const& c1, Circle const& c2)->bool{return c1.get_radius() < c2.get_radius();});

    REQUIRE(std::is_sorted(sorted_circles.begin(),sorted_circles.end()));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}



