//
// Created by Shaco on 8/25/2020.
//

#ifndef MATHS_CHAPTER_TWO_H
#define MATHS_CHAPTER_TWO_H

#include "../common/Vector3.h"

namespace chapter_two
{
    float Dot(const common::Vector3& lhs, const common::Vector3& rhs);
    common::Vector3 Cross(const common::Vector3& lhs, const common::Vector3& rhs);
}

#endif //MATHS_CHAPTER_TWO_H
