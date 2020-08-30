//
// Created by Shaco on 8/25/2020.
//

#include "../../include/chapter_2/ChapterTwo.h"

float chapter_two::Dot(const common::Vector3 &lhs, const common::Vector3 &rhs)
{
    return lhs.X() * rhs.X() + lhs.Y() * rhs.Y() + lhs.Z() * rhs.Z();
}

common::Vector3 chapter_two::Cross(const common::Vector3 &lhs, const common::Vector3 &rhs)
{
    return common::Vector3(lhs.Y() * rhs.Z() - lhs.Z() * rhs.Y(),
                           lhs.Z() * rhs.X() - lhs.X() * rhs.Z(),
                           lhs.X() * rhs.Y() - lhs.Y() * rhs.X());
}
