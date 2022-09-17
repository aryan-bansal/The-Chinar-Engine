#pragma once

#include <concepts>

namespace Chinar {

    template <class T, class U>
    concept Derived = std::is_base_of<U, T>::value;
}
