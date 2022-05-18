#include <iostream>
#include "Common/get_input_from_user.hpp"
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
    bool quit = false;
    while (!quit) {
        show_the_list_of_commands();
        std::cout << "Choose your game" << std::endl;
        const auto command = get_input_from_user<char>();
        switch (command) {
        case '1':
            play_guess_the_number();
            break;
        case '2':
            play_hangman();
            break;
        case 'q':
            quit = true;
            break;
        default:
            std::cout << "Invalid command" << std::endl;
            break;
        }
    }
    return 0;
}