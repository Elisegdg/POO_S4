#include <iostream>

template<typename T>
T get_input_from_user()
{
    T inputPicked;
    std::cin >> inputPicked;
    return inputPicked;
    // TODO ;) Use std::cin to get an int, and then return it
}