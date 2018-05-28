#ifndef CIRCLE_CPP
#define CIRCLE_CPP
#define _USE_MATH_DEFINES

#include <math.h>
#include "vec2.hpp"
#include "circle.hpp"
#include "color.hpp"
#include <string>
#include <ostream>
#include <sstream>


Circle::Circle(): 
    radius_{0.0f}, 
    mp_{0.0f,0.0f},
    color_{0.0f},
    name_{"default_Circle_01"}
    {};

Circle::Circle (float radius, Vec2 const & mp, Color const& color,std::string const& name):
    radius_{radius},
    mp_{mp},
    color_{color},
    name_{name}
    {};

float Circle::get_radius() const{
    return radius_;
}

Vec2 Circle::get_mp() const{
    return mp_;
}

Color Circle::get_color() const{
    return color_;
} 

std::string Circle::get_name() const{
    return name_;
}   

float Circle::circumference() const{
    return 2*M_PI*get_radius();
}



bool Circle::is_inside(Vec2 const& v){
    Vec2 dif = v-get_mp();
    if(sqrt(pow(dif.x,2)+pow(dif.y,2)) <= get_radius()){
        return true;
    }
    else{
        return false;
    }
}    

std::ostream& Circle::print(std::ostream& outstream) const
{
outstream << get_radius() <<";" <<get_mp().x <<";" <<get_mp().y <<";" << get_color().r_ <<";" << get_color().g_<<";" <<get_color().b_ <<";" <<get_name();
return outstream;
}

//std::ostream operator<<(std::ostream& outstream, Circle const& c1){
//return c1.print(outstream);
//}

bool operator <(Circle const& c1, Circle const& c2){
    return(c1.get_radius() < c2.get_radius());
    }


bool operator >(Circle const& c1, Circle const& c2){
    return(c1.get_radius() > c2.get_radius());
}

bool operator == (Circle const& c1, Circle const& c2){
    return(c1.get_radius() == c2.get_radius());
}

#endif


