#include <CVector2.hpp>


////////////////////////////////////
// Construct CVector2 environment //
////////////////////////////////////

// Construct CVector2 environment
CVector2::CVector2(double _x, double _y)
{
    this->x = _x;
    this->y = _y;
}

CVector2::CVector2(double scalar)
{
    this->x = scalar;
    this->y = scalar;
}

CVector2::CVector2()
{
    this->x = 0;
    this->y = 0;
}


// Get random CVector2
CVector2 CVector2::getRandom(double minimum, double maximum)
{
    double new_x = minimum + ((double)rand() / RAND_MAX) * (maximum - minimum);
    double new_y = minimum + ((double)rand() / RAND_MAX) * (maximum - minimum);
    return CVector2(new_x, new_y);
}

CVector2 CVector2::getRandom()
{
    double new_x = (double)rand() / RAND_MAX;
    double new_y = (double)rand() / RAND_MAX;
    return CVector2(new_x, new_y);
}



/////////////////////////////////////////////
// Math operations (operators overloading) //
/////////////////////////////////////////////

// Addition
CVector2 operator+(const CVector2& left, const CVector2& right)
{
    double new_x = left.x + right.x;
    double new_y = left.y + right.y;
    return CVector2(new_x, new_y);
}

CVector2 operator+(const CVector2& left, const double right)
{
    double new_x = left.x + right;
    double new_y = left.y + right;
    return CVector2(new_x, new_y);
}

CVector2 operator+(const double left, const CVector2& right)
{
    double new_x = left + right.x;
    double new_y = left + right.y;
    return CVector2(new_x, new_y);
}


// Subtraction
CVector2 operator-(const CVector2& left, const CVector2& right)
{
    double new_x = left.x - right.x;
    double new_y = left.y - right.y;
    return CVector2(new_x, new_y);
}

CVector2 operator-(const CVector2& left, const double right)
{
    double new_x = left.x - right;
    double new_y = left.y - right;
    return CVector2(new_x, new_y);
}

CVector2 operator-(const double left, const CVector2& right)
{
    double new_x = left - right.x;
    double new_y = left - right.y;
    return CVector2(new_x, new_y);
}


// Multiplication (Scalar)
CVector2 operator*(const CVector2& left, const double right)
{
    double new_x = left.x * right;
    double new_y = left.y * right;
    return CVector2(new_x, new_y);
}

CVector2 operator*(const double left, const CVector2& right)
{
    double new_x = left * right.x;
    double new_y = left * right.y;
    return CVector2(new_x, new_y);
}


// Division (Scalar)
CVector2 operator/(const CVector2& left, const double right)
{
    double new_x = left.x / right;
    double new_y = left.y / right;
    return CVector2(new_x, new_y);
}

CVector2 operator/(const double left, const CVector2& right)
{
    double new_x = left / right.x;
    double new_y = left / right.y;
    return CVector2(new_x, new_y);
}


// Assingment operators
CVector2 operator+=(CVector2& left, const CVector2& right)
{
    left.x += right.x;
    left.y += right.y;
    return left;
}

CVector2 operator-=(CVector2& left, const CVector2& right)
{
    left.x -= right.x;
    left.y -= right.y;
    return left;
}

CVector2 operator*=(CVector2& left, const double right)
{
    left.x *= right;
    left.y *= right;
    return left;
}

CVector2 operator/=(CVector2& left, const double right)
{
    left.x /= right;
    left.y /= right;
    return left;
}
