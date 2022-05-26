#pragma once

#include <array>

namespace CFramePlusPlus {

template <typename T, int dimIn, int dimOut>
class CFrame {
   public:
    CFrame(std::array<T, dimOut> transformation,
           std::array<std::array<T, dimIn>, dimOut> axes) {
        _transformation = transformation;
        _axes = axes;
    }
    std::array<T, dimOut> operator*(std::array<T, dimIn> in) {
        std::array<T, dimOut> res;

        // For each output dim
        for (int i = 0; i < dimOut; i++) {
            res[i] = 0;

            // For each input dim
            for (int j = 0; j < dimIn; j++) {
                res[i] += _axes[i][j] * in[j];
            }
        }

        return res;
    }

   private:
    std::array<T, dimOut> _transformation;
    std::array<std::array<T, dimIn>, dimOut> _axes;
};

}  // namespace CFramePlusPlus
