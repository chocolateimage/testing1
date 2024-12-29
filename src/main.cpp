#include <iostream> // Include input-output stream library
#include <stdexcept> // Include exception handling
#include <string> // Include string operations
#include <vector> // Include vector for dynamic array
#include <ctime> // Include time for seeding random number generator
#include "companiesthatihate.hpp" // Include for "listAllCompanies"

void show_usage(char** argv) { // Display usage instructions
    std::cerr << "Usage: " << argv[0] << " <max amount>" << std::endl; // Print usage instructions to standard error
}

int main(int argc, char** argv) { // Main entry point
    if (argc != 2) { // Check if the correct number of arguments is provided
        show_usage(argv); // Show usage instructions
        return 1; // Exit with error code 1
    }

    int maxAmount; // Declare a variable to store the maximum amount
    try {
        maxAmount = std::stoi(argv[1]); // Convert the second argument to an integer
    } catch (std::invalid_argument&) { // Catch exception if conversion fails
        show_usage(argv); // Show usage instructions
        std::cerr << "Error: The max amount must be a number" << std::endl; // Print error message
        return 1; // Exit with error code 1
    }

    if (maxAmount <= -1) { // Add "secret" condition
        listAllCompanies(); // List all companies that I hate
        return 0; // Early exit for "secret"
    }

    std::srand(std::time(nullptr)); // Seed the random number generator with the current time
    std::cout << "Hello, World!" << std::endl; // Output "Hello, World!" to standard output
    std::vector<std::string> example; // Declare a vector to store strings
    int amount = 0; // Initialize the variable
    if (maxAmount > 0) { // Check for a valid number
        amount = std::rand() / (RAND_MAX / maxAmount); // Generate a random number up to the maximum amount
    }
    for (int i = 0; i < amount; i++) { // Loop through the range of the generated amount
        example.push_back(std::to_string(std::rand())); // Convert random number to string and add to the vector
    }
    for (auto x : example) { // Loop through each string in the vector
        std::cout << x << std::endl; // Print each string to standard output
    }
    
    return 0; // Exit the program with success code 0
}