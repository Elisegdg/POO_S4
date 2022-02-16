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
    return words[rand<int>(1, words.size() - 1)];
}

void show_number_of_lives(int number_of_lives)
{
    std::cout << "You have " << number_of_lives << " lives." << std::endl;
}

bool player_is_alive(int number_of_lives)
{
    if (number_of_lives < 0) {
        return false;
    }
    else {
        return true;
    }
}
