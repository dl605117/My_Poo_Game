#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x, float y);
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(const float scalar) const;
	Vec2& operator*=(const float scalar);
public:
	float x;
	float y;
};