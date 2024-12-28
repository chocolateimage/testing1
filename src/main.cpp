#include <iostream> // For printing to stdout
#include <stdexcept>
#include <string>
#include <vector> // For lists
#include <ctime> // Needed for setting random value to current time

void show_usage(char** argv) {
    std::cerr << "Usage: " << argv[0] << " <max amount>" << std::endl;
}

int main(int argc, char** argv) { // Entry point
    if (argc != 2) {
        show_usage(argv);
        return 1;
    }

    int maxAmount;
    try {
        maxAmount = std::stoi(argv[1]);
    } catch (std::invalid_argument&) {
        show_usage(argv);
        std::cerr << "Error: max amount must be a number" << std::endl;
        return 1;
    }

    std::srand(std::time(nullptr)); // Setting the random value to current time
    std::cout << "Hello, World!" << std::endl; // The text "Hello world!" gets written to stdout with a newline
    std::vector<std::string> example; // Create a list for later
    int amount = (std::rand() / (RAND_MAX / maxAmount)); // Set a max variable for the for loop, set it here because in the for loop it gets executed every iteration
    for (int i = 0; i < amount; i++) { // The for loop
        example.push_back(std::to_string(std::rand())); // Add a random value as a string to the list
    }
    for (auto x : example) { // Iterate over every random number
        std::cout << x << std::endl; // Write the random number to stdout with a newline
    }
    
    return 0; // Exit with exit code 0
}