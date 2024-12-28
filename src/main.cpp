#include <iostream>
#include <vector>
#include <string>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    std::cout << "Hello world!" << std::endl;
    std::vector<std::string> example;
    int max = (std::rand() / (RAND_MAX / 1000));
    for (int i = 0; i < max; i++) {
        example.push_back(std::to_string(std::rand()));
    }
    for (auto x : example) {
        std::cout << x << std::endl;
    }
    
    return 0;
}