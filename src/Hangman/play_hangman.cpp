#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include "../Common/random.hpp"

// Game related fonctions

const char* pick_a_random_word()
{
    static constexpr std::array words = {
        "code",
        "crous",
        "imac",
        "opengl",
    };

    // TODO: return a random element from the array
    return words[rand<size_t>(1, words.size() - 1)];
}

void show_word_to_guess_with_missing_letters(const std::string& word, const std::vector<bool>& letters_guessed)
{
    for (size_t i = 0; i < word.size(); i++) {
        if (letters_guessed[i] == true) {
            std::cout << word[i];
        }
        else {
            std::cout << "_";
        }
    }
    std::cout << std::endl;
}

bool player_has_won(const std::vector<bool>& letters_guessed)
{
    if (std::any_of(
            std::begin(letters_guessed),
            std::end(letters_guessed),
            [](bool i) {
                return !i;
            })) {
        return false;
    }
    else {
        return true;
    }
}

bool word_contains(char letter, std::string_view word)
{
    if (word.find(letter) != std::string::npos) {
        return true;
    }
    else {
        return false;
    }
}

// Life related fonctions

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

int remove_one_life(int number_of_lives)
{
    return number_of_lives - 1;
}

// Showing messages related fonctions

void show_congrats_message()
{
    std::cout << "You won :) " << std::endl;
}

void show_defeat_message()
{
    std::cout << "You loose :( " << std::endl;
}

// Play game fonction

void play_hangman()
{
    pick_a_random_word();
}