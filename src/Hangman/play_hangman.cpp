#include <array>
#include <iostream>
#include "../Common/random.hpp"

const char* pick_a_random_word()
{
    static constexpr std::array words = {
        "code",
        "crous",
        "imac",
        "opengl",
    };

    // TODO: return a random element from the array
    return words[rand(1, 4)];
}