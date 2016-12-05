#pragma once

template<typename array>
array biggest(array first, array second) {
    if (first > second) return first;
    return second;
}
