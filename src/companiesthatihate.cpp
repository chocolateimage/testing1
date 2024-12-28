#include <iostream> // Include the input-output stream library
#include <map> // Include map for storing company-function mappings
#include "companiesthatihate.hpp" // Custom header file (assumed to provide additional functionality)

void companyMedion() { // Define the function for Medion company
    std::cout << "We have Medion which is the worst company that can exist because they sell broken computers that crash all the time and don't want to fix it." << std::endl; // Output a statement about Medion
    std::cout << "Can they please get bankrupt one day and just never exist?" << std::endl; // Output a follow-up statement about Medion
}

void companyMicrosoft() { // Define the function for Microsoft company
    std::cout << "What is going on with their portals... Someone made a list of them at https://msportals.io" << std::endl; // Output a statement about Microsoft and their portals
}

std::map<std::string, void(*)()> companies = { // Create a map linking company names to their functions
    {"Medion", companyMedion}, // Map "Medion" to the companyMedion function
    {"Microsoft", companyMicrosoft}, // Map "Microsoft" to the companyMicrosoft function
};

void listAllCompanies() { // Define a function to list all companies
    for (const auto &[key, value] : companies) { // Iterate over each key-value pair in the map
        std::cout << "--- " << key << " ---" << std::endl; // Print the company name with decorative formatting
        value(); // Call the associated function for the company
    }
}