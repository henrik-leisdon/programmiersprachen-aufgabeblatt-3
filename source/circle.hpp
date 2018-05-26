#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include <string>
#include <iostream>
#include "vec2.hpp"
#include "color.hpp"


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
        std::string printing(std::ostream os, float radius, Vec2 const& mp, Color const& color, std::string name) const;

    private:

        float radius_;
        Vec2 mp_;
        Color color_;
        std::string name_;
};

std::ostream operator<<(std::ostream& os, const Circle& c1);



#endif
