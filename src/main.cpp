#include <iostream> // For printing to stdout
#include <vector> // For lists
#include <ctime> // Needed for setting random value to current time

int main() { // Entry point
    std::srand(std::time(nullptr)); // Setting the random value to current time
    std::cout << "Hello, World!" << std::endl; // The text "Hello world!" gets written to stdout with a newline
    std::vector<std::string> example; // Create a list for later
    int max = (std::rand() / (RAND_MAX / 15)); // Set a max variable for the for loop, set it here because in the for loop it gets executed every iteration
    for (int i = 0; i < max; i++) { // The for loop
        example.push_back(std::to_string(std::rand())); // Add a random value as a string to the list
    }
    for (auto x : example) { // Iterate over every random number
        std::cout << x << std::endl; // Write the random number to stdout with a newline
    }
    
    return 0; // Exit with exit code 0
}