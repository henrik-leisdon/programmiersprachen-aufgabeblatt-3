#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
#include <string>

class Circle{

    public:
        Circle();
        Circle(float radius, Vec2 const& mp, Color const& color, std::string const& name);
        
        float get_radius() const;
        Vec2 get_mp() const;
        Color get_color() const;
        std::string get_name() const; 
        float circumference() const;

        
        bool is_inside(Vec2 const& v);

        std::ostream& print(std::ostream& outstream) const;

    private:

        float radius_;
        Vec2 mp_;
        Color color_;
        std::string name_;
};


//std::ostream operator<<(std::ostream& os, Circle const& c);

bool operator <(Circle const& c1, Circle const& c2);
bool operator >(Circle const& c1, Circle const& c2);
bool operator == (Circle const& c1, Circle const& c2);

/*
template<typename T>
class less
{
    public:
    operator<(Circle const& c1, Circle const& c2){
        return c1<c2;
    }
};
*/
#endif
