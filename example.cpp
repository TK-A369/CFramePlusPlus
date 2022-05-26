#include <array>
#include <iostream>

#include "CFramePlusPlus.hpp"

int main(int argc, char** argv) {
    CFramePlusPlus::CFrame<float, 2, 2> myCFrame1(
        std::array<float, 2>{0, 0},
        std::array<std::array<float, 2>, 2>{std::array<float, 2>{2, -1},
                                            std::array<float, 2>{-1, 2}});
    std::array<float, 2> pos1{6, 2};
    std::array<float, 2> res1 = myCFrame1 * pos1;
    std::cout << res1[0] << " " << res1[1] << "\n";
}