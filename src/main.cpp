#include <iostream>
#include <random>

/// Returns a random int between min (included) and max (included)
int rand(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int get_int_from_user()
{
    int numberPicked;
    std::cin >> numberPicked;
    return numberPicked;
    // TODO ;) Use std::cin to get an int, and then return it
}

void play_guess_the_number()
{
    int  number_random = rand(0, 100);
    bool finished      = false;
    while (!finished) {
        // Ask for a number
        std::cout << "Entrez un nombre svp" << std::endl;
        int number_picked = get_int_from_user();
        // If it is the correct one then set finished to true
        if (number_random == number_picked) {
            std::cout << "Gagné !" << std::endl;
            finished = true;
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

int main()
{
    play_guess_the_number();
}