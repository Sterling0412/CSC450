//Include necessary libraries 
#include <iostream>
#include <string>

//Define main function
int main() {
    // Declare variables to store person's information
    std::string firstName = "Randy";
    std::string lastName = "Johnson";
    std::string streetAddress = "234 Grand Lane";
    std::string city = "Pheonix";
    std::string zipCode = "35496";

    //Print personal information
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zipcode: " << zipCode << std::endl;

    return 0;
}