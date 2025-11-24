// copyright Maximiliano Fairman Nov 23rd, 2025
// all rights reserved
// Created on Nov 23rd, 2025
// this program uses nested loops 
// to print out all the valid RGB colours.


#include <iostream>

int main() {
    for (int r = 0; r <= 255; r += 1) {          // Red component
        for (int g = 0; g <= 255; g += 1) {      // Green component
            for (int b = 0; b <= 255; b += 1) {  // Blue component
                // ANSI escape code to set text color
                std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m"
                          << "RGB(" << r << ", " << g << ", " << b << ")"
                          << "\033[0m" << std::endl;
                // Reset to default color after printing
            }
        }
    }
    std::cout << "\nDone printing all RGB colours." << std::endl;
    
}
