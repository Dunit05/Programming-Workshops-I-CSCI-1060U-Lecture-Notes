#include <iostream>

int main() {
    // Write an if - else_if - else statement to determine the grade of a student based on their "score" variable.Assign grades as follows :

    //     If "score" is greater than or
    //     equal to 90,
    //     print "A".If "score" is greater than or equal to 80, print "B".If "score" is greater than or equal to 70, print "C".If "score" is greater than or equal to 60, print "D".Otherwise, print "F".

    int score = 80;

    if (score >= 90) {
        std::cout << "A" << std::endl;
    } else if (score >= 80) {
        std::cout << "B" << std::endl;
    } else if (score >= 70) {
        std::cout << "C" << std::endl;
    } else if (score >= 60) {
        std::cout << "D" << std::endl;
    } else {
        std::cout << "F" << std::endl;
    }
}