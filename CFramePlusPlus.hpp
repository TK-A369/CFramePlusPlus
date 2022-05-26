#include <array>

namespace CFramePlusPlus {

template <typename T, int dimIn, int dimOut>
class CFrame {
   public:
    CFrame(std::array<T, dimOut> transformation,
           std::array<std::array<T, dimIn>, dimOut>);
};

}  // namespace CFramePlusPlus
