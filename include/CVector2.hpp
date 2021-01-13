#pragma once
#include <iostream>
#include <cmath>
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
    CVector2(const CVector2& source);
    CVector2();
    
    // Get random CVector2
    static CVector2 getRandom(double minimum, double maximum);
    static CVector2 getRandom();
    
    // Get 2D vector from angle
    static CVector2 fromAngle(double angle);
    
    
    ///////////////////////////////
    // Especial vector functions //
    ///////////////////////////////
    
    // Get the distance between two vectors
    static double getDistance(const CVector2& a, const CVector2& b);
    
    // Get angle between two vectors (in radians)
    static double getAngleBetween(CVector2& a, CVector2& b);
    
    // Get the dot product between two vectors
    static double dot(const CVector2& a, const CVector2& b);
    
    // Get the hadamard product between two vectors
    static CVector2 hadamard(const CVector2& a, const CVector2& b);
    
    
    // Constrain values between a certain range
    void constrain(double minimum, double maximum);
    
    // Get heading vector representation
    void normalize();
    CVector2 getNormalized();
    double getHeading();
    
    // 2D vector rotations
    void rotate(double angle);
    CVector2 getRotate(double angle);
    
    // Set and get vector's magnitude
    void setMagnitude(double magnitude);
    double getMagnitude();
    
    // 2D vector multiplication techniques
    double dot(const CVector2& source);
    void hadamard(const CVector2& source);
    
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
