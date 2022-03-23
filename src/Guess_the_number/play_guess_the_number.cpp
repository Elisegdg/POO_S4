#include <iostream>
#include "../Common/get_input_from_user.hpp"
#include "../Common/random.hpp"

void play_guess_the_number()
{
    auto number_random = rand<int>(0, 100);
    bool is_finished   = false;
    while (!is_finished) {
        // Ask for a number
        std::cout << "Entrez un nombre svp" << std::endl;
        int number_picked = get_input_from_user<int>();
        // If it is the correct one then set finished to true
        if (number_random == number_picked) {
            std::cout << "Gagné !" << std::endl;
            is_finished = true;
        }
        else if (number_random < number_picked) {
            std::cout << "Smaller" << std::endl;
        }
        else {
            std::cout << "Greater" << std::endl;
        }
        // Else give a hint to the user ("Greater" or "Smaller")
    }
}