#include <iostream>

int main() {
    // Declare variables to store dog age, early years, later years, and human years
    int dog_age;           // The dog's age in years
    int early_years;       // Human equivalent age for the first 2 years
    int later_years;       // Human equivalent age for years after the first 2
    int human_years;       // Total human years

    // Step 1: Ask the user for their dog's age
    std::cout << "Enter your dog's age in years: ";
    std::cin >> dog_age; // User input for dog age

    // Step 2: Ensure the dog age is valid
    if (dog_age <= 0) {
        std::cout << "Please enter a valid positive age for the dog." << std::endl;
        return 1; // Exit the program if invalid age is entered
    }

    // Step 3: Calculate human equivalent age
    // The first 2 years of the dog's life are equivalent to 21 human years
    if (dog_age == 1) {
        early_years = 21;  // A 1-year-old dog is 21 human years old
        later_years = 0;   // No later years to calculate
    } else if (dog_age == 2) {
        early_years = 21;  // First two years are always 21 human years
        later_years = 4;   // A 2-year-old dog is equivalent to 24 human years (21 + 4)
    } else {
        early_years = 21;                    // The first 2 years count as 21 human years
        later_years = (dog_age - 2) * 4;    // Each year after the second year is equivalent to 4 human years
    }

    // Step 4: Calculate total human years
    human_years = early_years + later_years;

    // Step 5: Display the result
    std::cout << "Your dog is " << dog_age << " years old in dog years, which is approximately " 
              << human_years << " years old in human years. 🐶🐾" << std::endl;

    return 0; // Indicate successful program execution
}
