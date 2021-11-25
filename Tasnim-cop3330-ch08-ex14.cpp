/*
    ->We can declare a non-reference function argument const which passes the value of a constant in the parameter

    ->The meaning of a non reference function argument const is that in this function a value of a const variable has been passed
     in the parameter. The value of the passed variable is constant which means later on that function the value of that
     variable cannot be changed. It will give an error.

    ->We might want to do that when the value of the variable that we want to pass in the function needs to stay same through out the function.
      If we want to make sure the passing varible's value needs to stay the same, then we need to choose the const int variable in a non reference function

    ->People might not to use a non reference function argument const because it restricts the value of the passing varible to one type. Once it has been declared, 
      it cannot be changed throughout the function which can be problem if the function is trying to work for the value of the passing varible.
*/

#include "std_lib_facilities.h"

void tell_const_value(const int r)
{
    cout<<"The radius is "<<r<<endl; 
}

double find_area(const int r)
{
     double area = M_PI*(r*r);
     return area;
}

double find_circumference(const int r)
{
    double c= 2*M_PI*r;
    return c;

}

void print_info(const int r)
{
    double area = find_area(r);
    double cir= find_circumference(r);
    cout<<"The area is "<<area<<".\nThe circumference is "<<cir;

    //    r=9; if we try to change the value of r, it will give an error.

}

int main()
{
    int radius=5;

    tell_const_value(radius);
    print_info(radius);


    return 0;
}