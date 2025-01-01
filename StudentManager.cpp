#include "StudentManager.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <random>

// Generate random student names and save to a file
void StudentManager::generateRandomStudents(const std::string& fileName, int recordCount) {
    std::ofstream outFile(fileName);
    if (!outFile) {
        throw std::runtime_error("Error: Unable to create file " + fileName);
    }

    for (int i = 0; i < recordCount; ++i) {
        outFile << "Name" << i + 1 << " Surname" << i + 1 << "\n";
    }

    outFile.close();
}

// Load students from a file
void StudentManager::loadStudentsFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (!inFile) {
        throw std::runtime_error("Error: File " + fileName + " does not exist");
    }

    students.clear();
    std::string line;
    while (std::getline(inFile, line)) {
        students.push_back(line);
    }

    inFile.close();
}

// Sort students alphabetically
void StudentManager::sortStudents() {
    if (students.empty()) {
        throw std::runtime_error("Error: No students to sort");
    }

    std::sort(students.begin(), students.end());
}

// Display sorted students
void StudentManager::displayStudents() const {
    for (const auto& student : students) {
        std::cout << student << "\n";
    }
}

// Safe division utility
double StudentManager::safeDivision(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero condition!");
    }
    return static_cast<double>(a) / b;
}
