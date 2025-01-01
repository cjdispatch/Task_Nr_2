#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <string>
#include <vector>
#include <stdexcept>

class StudentManager {
private:
    std::vector<std::string> students; // List of students

public:
    // Methods
    void generateRandomStudents(const std::string& fileName, int recordCount);
    void loadStudentsFromFile(const std::string& fileName);
    void sortStudents();
    void displayStudents() const;

    // Static utility
    static double safeDivision(int a, int b);
};

#endif // STUDENT_MANAGER_H
