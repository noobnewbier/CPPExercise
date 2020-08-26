//
// Created by Shaco on 8/25/2020.
//

#include "Vector3.h"

namespace common
{

    void Vector3::SetZ(float z)
    {
        m_z = z;
    }

    void Vector3::SetY(float y)
    {
        m_y = y;
    }

    void Vector3::SetX(float x)
    {
        m_x = x;
    }

    Vector3::Vector3(float mX, float mY, float mZ) : m_x(mX), m_y(mY), m_z(mZ) {}

    Vector3 &Vector3::operator+=(const Vector3 &rhs)
    {
        this->m_x += rhs.m_x;
        this->m_y += rhs.m_y;
        this->m_z += rhs.m_z;

        return *this;
    }

    Vector3 operator+(Vector3 lhs, const Vector3 &rhs)
    {
        return lhs += rhs;
    }

    Vector3 operator-(const Vector3 &vec)
    {
        return Vector3(-vec.m_x, -vec.m_y, -vec.m_z);
    }

    Vector3 &Vector3::operator-=(const Vector3 &rhs)
    {
        this->m_x -= rhs.m_x;
        this->m_y -= rhs.m_y;
        this->m_z -= rhs.m_z;

        return *this;
    }

    Vector3 operator-(Vector3 lhs, const Vector3 &rhs)
    {
        return lhs -= rhs;
    }

    Vector3 &Vector3::operator*=(const Vector3 &rhs)
    {
        this->m_x *= rhs.m_x;
        this->m_y *= rhs.m_y;
        this->m_z *= rhs.m_z;

        return *this;
    }

    Vector3 &Vector3::operator/=(const Vector3 &rhs)
    {
        this->m_x /= rhs.m_x;
        this->m_y /= rhs.m_y;
        this->m_z /= rhs.m_z;

        return *this;
    }

    Vector3 operator*(Vector3 lhs, const Vector3 &rhs)
    {
        return lhs *= rhs;
    }

    Vector3 operator/(Vector3 lhs, const Vector3 &rhs)
    {

        return lhs /= rhs;
    }

}