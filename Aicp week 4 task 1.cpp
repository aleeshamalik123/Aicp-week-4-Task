#include <iostream>
#include <cmath>

class Hexagon {
private:
    double side_length;

public:
    Hexagon(double length) : side_length(length) {}

    double calc_area() {
        return 1.5 * sqrt(3) * pow(side_length, 2);
    }

    double calc_perimeter() {
        return 6 * side_length;
    }

    double calc_angle_sum() {
        return 6 * 120;
    }

    void display() {
        std::cout << "Hexagon - Side Length: " << side_length << std::endl;
        std::cout << "Area: " << calc_area() << std::endl;
        std::cout << "Perimeter: " << calc_perimeter() << std::endl;
        std::cout << "Sum of Angles: " << calc_angle_sum() << std::endl << std::endl;
    }
};

class Square {
private:
    double side_length;

public:
    Square(double length) : side_length(length) {}

    double calc_area_square() {
        return pow(side_length, 2);
    }

    double calc_peri_square() {
        return 4 * side_length;
    }

    void display() {
        std::cout << "Square - Side Length: " << side_length << std::endl;
        std::cout << "Area: " << calc_area_square() << std::endl;
        std::cout << "Perimeter: " << calc_peri_square() << std::endl << std::endl;
    }
};

int main() {
    int last_digit_cnic = 5;  

    Hexagon hexagon(last_digit_cnic);
    Square square(last_digit_cnic + 1);

    while (true) {
        std::cout << "1. Hexagon" << std::endl;
        std::cout << "2. Square" << std::endl;
        std::cout << "Any other input to exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            hexagon.display();
        } else if (choice == 2) {
            square.display();
        } else {
            std::cout<<"Exit"<<std::endl;
            break;
        }
    }

    return 0;
}

