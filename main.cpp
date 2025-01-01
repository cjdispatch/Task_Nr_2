#include "StudentManager.h"
#include <iostream>
#include <exception>

int main() {
    StudentManager manager;

    try {
        // Generate random student files
        manager.generateRandomStudents("students_10.txt", 10);
        manager.generateRandomStudents("students_100.txt", 100);
        manager.generateRandomStudents("students_1000.txt", 1000);
        manager.generateRandomStudents("students_10000.txt", 10000);

        // Load and sort students
        manager.loadStudentsFromFile("students_100.txt");
        manager.sortStudents();

        // Display sorted students
        std::cout << "Sorted Students:\n";
        manager.displayStudents();

        // Safe division example
        int a = 10, b = 2; // Change b to a non-zero value
        try {
            double result = StudentManager::safeDivision(a, b);
            std::cout << "Result of division: " << result << "\n";
        } catch (const std::exception& ex) {
            std::cerr << "Error during division: " << ex.what() << "\n";
        }

    } catch (const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << "\n";
    }

    return 0;
}
