#include <iostream>

int main(int argc, char *argv[]) {
    int fav_num = 0;
    std::cout << "Enter your favorite number that is between 1 and 100: " << std::endl;
    std::cin >> fav_num;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << fav_num << " is my favorite number!" << std::endl;
    return 0;
}

