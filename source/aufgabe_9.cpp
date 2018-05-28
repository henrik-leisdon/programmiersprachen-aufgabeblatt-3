#include <cstdlib> // std::rand()
#include <vector> // std::vector<>
#include <list> // std::list<>
#include <iostream> // std::cout
#include <iterator> // std::ostream_iterator<>
#include <algorithm> // std::reverse, std::generate

int main()
{
std::vector<int> v_0(10); //Vector der länge 10

for (auto& v : v_0) { //füllen des Vectors mit zufallszahlen
v = std::rand();
}

std::copy(std::cbegin(v_0), std::cend(v_0),  //kopiert den Vektor v_0
std::ostream_iterator<int>(std::cout, "\n")); //ausgabe von v_0?

std::list<int> l_0(std::cbegin(v_0), std::cend(v_0)); //füllt die Liste l_0 mit den Werten von v_0
std::list<int> l_1(std::cbegin(l_0), std::cend(l_0)); //füllt die Liste l_1 mit den Werten von v_0
std::reverse(std::begin(l_1), std::end(l_1));         //reverse = rückwärts anordnen der Werte
std::copy(std::cbegin(l_1), std::cend(l_1),           //kopieren von l_1
std::ostream_iterator<int>(std::cout, "\n"));         //ausgabe von l_1?

l_1.sort();                                           //sortiert die elemente in l_1
std::copy(l_1.cbegin(), l_1.cend(),                     
std::ostream_iterator<int>(std::cout, "\n"));         //ausgabe der sortierten elemente

std::generate(std::begin(v_0), std::end(v_0), std::rand);   //generiert neue zufallszahlen in v_0
std::copy(v_0.crbegin(), v_0.crend(),
std::ostream_iterator<int>(std::cout, "\n"));           //output der neuen Zufallszahlen in v_0

return 0;

}