#pragma once
#include <cstdlib>
#include <time.h>


// CVector2 class 
struct CVector2
{
    
    ////////////////////////////////////
    // Construct CVector2 environment //
    ////////////////////////////////////
    
    // Axis values (X-axis and Y-axis)
    double x, y;
    
    // Construct CVector2 environment
    CVector2(double x, double y);
    CVector2(double scalar);
    CVector2();
    
    // Get random CVector2
    static CVector2 getRandom(double minimum, double maximum);
    static CVector2 getRandom();
    
};


/////////////////////////////////////////////
// Math operations (operators overloading) //
/////////////////////////////////////////////

// Addition
CVector2 operator+(const CVector2& left, const CVector2& right);
CVector2 operator+(const CVector2& left, const double right);
CVector2 operator+(const double left, const CVector2& right);

// Subtraction
CVector2 operator-(const CVector2& left, const CVector2& right);
CVector2 operator-(const CVector2& left, const double right);
CVector2 operator-(const double left, const CVector2& right);

// Multiplication (Scalar)
CVector2 operator*(const CVector2& left, const double right);
CVector2 operator*(const double left, const CVector2& right);

// Division (Scalar)
CVector2 operator/(const CVector2& left, const double right);
CVector2 operator/(const double left, const CVector2& right);


// Assingment operators
CVector2 operator+=(CVector2& left, const CVector2& right);
CVector2 operator-=(CVector2& left, const CVector2& right);
CVector2 operator*=(CVector2& left, const double right);
CVector2 operator/=(CVector2& left, const double right);
