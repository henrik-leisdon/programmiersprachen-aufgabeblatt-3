#include <list>
#include <iostream>
#include <algorithm>

int main()
{
    std::list<unsigned int> liste;
    for(int i=0;i<=100;i++){
        liste.push_back(rand()); 
    }

    for (std::list<unsigned int>::iterator it = liste.begin(); it != liste.end(); it++){
    std::cout << *it;   

    }

    return 0;
}
