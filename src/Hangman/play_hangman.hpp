#pragma once

#include <iostream>

const char* pick_a_random_word();

void show_number_of_lives(int number_of_lives);

bool player_is_alive(int number_of_lives);

int remove_one_life(int number_of_lives);

void show_congrats_message();

void show_defeat_message();

void show_word_to_guess_with_missing_letters(const std::string& word, const std::vector<bool>& letters_guessed);

void mark_as_guessed(char guessed_letter, std::vector<bool>& letters_guessed, std::string_view word_to_guess);

bool player_has_won(const std::vector<bool>& letters_guessed);

bool word_contains(char letter, std::string_view word);

void play_hangman();
