#include <iostream>
#include <map>
#include "companiesthatihate.hpp"

void companyMedion() {
    std::cout << "We have Medion which is the worst company that can exist because they sell broken computers that crash all the time and don't want to fix it." << std::endl;
    std::cout << "Can they please get bankrupt one day and just never exist?" << std::endl;
}
void companyMicrosoft() {
    std::cout << "What is going on with their portals... Someone made a list of them at https://msportals.io" << std::endl;
}

std::map<std::string, void(*)()> companies = {
    {"Medion", companyMedion},
    {"Microsoft", companyMicrosoft},
};

void listAllCompanies() {
    for (const auto &[key, value] : companies) {
        std::cout << "--- " << key << " ---" << std::endl;
        value();
    }
}