#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>


bool is_multiple_of_3(int t){
    return t%3==0;
}


TEST_CASE("filter alle Vielfache von 3", "[erase]"){
      std::vector<unsigned int> vec(100);
      //std::generate(vec.begin(),vec.end(),std::rand()%100); 
      for(int i = 0; i<=vec.size(); i++){
          unsigned int rdm = rand()%101;
          vec[i] = rdm;
      }
    for (auto it = vec.begin(); it != vec.end(); ) {
        if (*it % 3 == 0) {
            it = vec.erase(it);
        } else {
            ++it;
        }
      }  
        //vec.erase(std::remove_if(vec.begin(),vec.end(),[](int const&t){return(t%3)!=0;}));
    
    REQUIRE(std::all_of(vec.begin(),vec.end(),is_multiple_of_3);
}

int main(int argc, char* argv[]){
    
 
    
    return Catch::Session().run(argc,argv);

    

    
}