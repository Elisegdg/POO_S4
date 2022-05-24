#include <p6/p6.h>
#include <iostream>

int main()
{
    auto ctx = p6::Context{{1280, 720, "Hello p6"}}; // Create a context with a window
    ctx.start();                                     // Start the p6 application
}