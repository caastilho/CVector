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

CVector2::CVector2(const CVector2& source)
{
    this->x = source.x;
    this->y = source.y;
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


// Get 2D vector from angle (-pi to pi)
CVector2 CVector2::fromAngle(double angle)
{
    float new_x = cos(angle);
    float new_y = sin(angle);
    return CVector2(new_x, new_y); 
}



///////////////////////////////
// Especial vector functions //
///////////////////////////////

// Get the distance between two vectors
double CVector2::getDistance(const CVector2& a, const CVector2& b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// Get angle between two vectors (in radians)
double CVector2::getAngleBetween(CVector2& a, CVector2& b)
{
    return acos(CVector2::dot(a, b) / (a.getMagnitude() * b.getMagnitude()));
}

// Get the dot product between two vectors
double CVector2::dot(const CVector2& a, const CVector2& b)
{
    return (a.x * b.x) + (a.y * b.y); 
}

// Get the hadamard product between two vectors
CVector2 CVector2::hadamard(const CVector2& a, const CVector2& b)
{
    double new_x = a.x * b.x;
    double new_y = a.y * b.y;
    return CVector2(new_x, new_y); 
}


// Constrain values between a certain range
void CVector2::constrain(double minimum, double maximum)
{
    this->x = std::max(minimum, std::min(maximum, this->x));
    this->y = std::max(minimum, std::min(maximum, this->y));
}


// Get heading vector representation
void CVector2::normalize()
{
    double magnitude = this->getMagnitude();
    this->x /= magnitude;
    this->y /= magnitude;
}

CVector2 CVector2::getNormalized()
{
    double magnitude = this->getMagnitude();
    double new_x = this->x / magnitude;
    double new_y = this->y / magnitude; 
    
    return CVector2(new_x, new_y);
}

double CVector2::getHeading()
{
    return atan2(this->y, this->x);
}


// 2D vector rotations
void CVector2::rotate(double angle)
{
    double cosValue = cos(angle); 
    double sinValue = sin(angle);
    this->x = this->x * cosValue - this->y * sinValue;
    this->y = this->x * sinValue + this->y * cosValue;
}

CVector2 CVector2::getRotate(double angle)
{
    double cosValue = cos(angle); 
    double sinValue = sin(angle);
    
    double new_x = this->x * cosValue - this->y * sinValue;
    double new_y = this->x * sinValue + this->y * cosValue;
    return CVector2(new_x, new_y);
}


// Set and get vector's magnitude
void CVector2::setMagnitude(double magnitude)
{
    double ratio = magnitude / this->getMagnitude();
    this->x *= ratio;
    this->y *= ratio;
}

double CVector2::getMagnitude()
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}


// 2D vector multiplication techniques
double CVector2::dot(const CVector2& source)
{
    return (this->x * source.x) + (this->y * source.y);
}

void CVector2::hadamard(const CVector2& source)
{
    this->x *= source.x;
    this->y *= source.y;
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
