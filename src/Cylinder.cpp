# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<iomanip>
const double pi=3.14159265358979323846;



double Cylinder :: SurfaceArea(){
    
    return 2 * pi * radius * (radius + height);
}

double Cylinder :: Volume(){

    return pi * radius * radius * height;
}

double Cylinder :: Circumference(){

    return 2 * pi * radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
	in>>cldr.radius>>cldr.height;
	return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{  
   out<<"Circumference: "<<  fixed<<std::setprecision(3)<<cldr.Circumference()<<endl;
	out<<"SurfaceArea: "<<  fixed<<std::setprecision(3)<<cldr.SurfaceArea()<<endl;
	out<<"Volume: "<<  fixed<<std::setprecision(3)<<cldr.Volume();
	return out;
}

# endif
