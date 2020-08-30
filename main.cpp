#include <iostream>
#include "include/common/Vector3.h"
#include "include/chapter_2/ChapterTwo.h"


int main()
{
    std::cout << "Hello, World!" << std::endl;
    auto vec1 = new common::Vector3(2, 2, 1);
    auto vec2 = new common::Vector3(1, -2, 0);
    std::cout << chapter_two::Cross(*vec1, *vec2) << std::endl;
    return 0;
}
