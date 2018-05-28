#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>

bool is_even(int n){
    return n%2 == 0;
}


template<typename Container, typename predicat>
Container filter(Container const& container, predicat const& p){
    Container filtered_c;
    for(auto it = container.begin(); it != container.end(); it++){
        if(p(*it)){
            filtered_c.push_back(*it);
        }
    }
    return filtered_c;
}

TEST_CASE("filter"){
    std::vector<int> v{1,2,3,4,5,6};
    std::vector<int> all_even=filter(v,is_even);

    REQUIRE(std::all_of(all_even.begin(),all_even.end(),is_even));

}

int main(int argc, char* argv[]){ 
    return Catch::Session().run(argc,argv);
   };