#include <iostream>
#include "Guess_the_number/play_guess_the_number.hpp"
#include "Hangman/play_hangman.hpp"

void show_the_list_of_commands()
{
    std::cout << "List of the games" << std::endl;
    std::cout << "1 - Guess the number" << std::endl;
    std::cout << "2 - Play hangman" << std::endl;
}

int main()
{
    play_hangman();
    // play_guess_the_number();

    // std::cout << pick_a_random_word() << std::endl;
}