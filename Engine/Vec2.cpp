#include "Vec2.h"

Vec2::Vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vec2 Vec2::operator+(const Vec2 & rhs) const
{
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2 & Vec2::operator+=(const Vec2 & rhs)
{
	return *this = *this + rhs;
}

Vec2 Vec2::operator*(const float scalar) const
{
	return Vec2(x * scalar, y * scalar);
}

Vec2 & Vec2::operator*=(const float scalar)
{
	return *this = *this * scalar;
}

