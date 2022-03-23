#pragma once
#include <iostream>

template<typename T>
T get_input_from_user()
{
    T input_picked;
    std::cin >> input_picked;
    return input_picked;
    // TODO ;) Use std::cin to get an int, and then return it
}