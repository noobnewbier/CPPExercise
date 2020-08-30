//
// Created by Shaco on 8/25/2020.
//

#ifndef MATHS_VECTOR3_H
#define MATHS_VECTOR3_H


#include "ostream"

namespace common
{
    class Vector3
    {
    private:
        float m_x;
        float m_y;
        float m_z;
    public:
        Vector3(float mX, float mY, float mZ);

        void SetX(float x);

        void SetY(float y);

        void SetZ(float z);

        [[nodiscard]] float X() const;

        [[nodiscard]] float Y() const;

        [[nodiscard]] float Z() const;

        Vector3 &operator+=(const Vector3 &rhs);

        Vector3 &operator-=(const Vector3 &rhs);

        Vector3 &operator*=(const Vector3 &rhs);

        Vector3 &operator/=(const Vector3 &rhs);

        friend std::ostream &operator<<(std::ostream &ostream, const Vector3 &vec);

        friend Vector3 operator-(const Vector3 &vec);

        friend Vector3 operator+(Vector3 lhs, const Vector3 &rhs);

        friend Vector3 operator-(Vector3 lhs, const Vector3 &rhs);

        friend Vector3 operator*(Vector3 lhs, const Vector3 &rhs);

        friend Vector3 operator/(Vector3 lhs, const Vector3 &rhs);
    };
}


#endif //MATHS_VECTOR3_H
