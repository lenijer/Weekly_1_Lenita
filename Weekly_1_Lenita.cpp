#include <iostream>
#include <string>
#include <limits>

std::string FullName;
char Intial;
int age;
long phonenumber;
std::string DateOfBirth;
int Task;

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();

int main()
{
    std::cout << "Enter the number corresponding to the Task you want to test: ";
    std::cin >> Task;
    std::cout << "\n\n";
    switch (Task) {
    case 1:
        Task1();
        break;
    case 2:
        Task2();
        break;
    case 3:
        Task3();
        break;
    case 4:
        Task4();
        break;
    case 5:
        Task5();
        break;
    }
    return 0;
}

void Task1() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //ask for full name
    std::cout << "Write your full name: ";
    std::getline(std::cin, FullName);

    //asks fir the intial
    std::cout << "Whats your first intial? ";
    std::cin >> Intial;

    //asks for age
    std::cout << "Whats your age? ";
    std::cin >> age;

    //asks for phone number
    std::cout << "Whats your phonenumber? ";
    std::cin >> phonenumber;

    //asks for date of birth
    std::cout << "Date of bith: (dd/mm/yyyy) ";
    std::cin >> DateOfBirth;

    std::cout <<
        "---------------------------------" <<
        "\n| Name          | " << FullName <<
        "\n| Initial       | " << Intial <<
        "\n| Age           | " << age <<
        "\n| Phonenumber   | " << phonenumber <<
        "\n| Date Of Birth | " << DateOfBirth <<
        "\n---------------------------------";
}

std::string LikeCoffee;

void Task2() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //asks for the name
    std::cout << "Whats your name? ";
    std::getline(std::cin, FullName);

    //asks their age
    std::cout << "And your age? ";
    std::cin >> age;

    //ask if they like coffee
    std::cout << "Do you like coffee? (Answer: yes/no)";
    std::cin >> LikeCoffee;
    if (LikeCoffee == "Yes") {
        LikeCoffee = "You seem to like coffee\n";
    }
    else {
        LikeCoffee = "You don't seem fond of coffee\n";
    }

    std::cout << "\n\nYour name is " << FullName << "\n\nYou are " << age << " years old." << "\n\n" << LikeCoffee;
}

void Task3() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What might your age be? ";
    std::cin >> age;

    if (age < 20) {
        std::cout << "You are young";
    }
    else if ((age >= 20) && (age <= 40)) {
        std::cout << "You are a grownup";
    }
    else if ((age >= 41) && (age <= 59)) {
        std::cout << "You are old";
    }
    else if (age > 60) {
        std::cout << "You are 60";
    }
    else {
        std::cout << "You ARE really old";
    }
}

int selection;

void Task4() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Whats your favorite dring answer with corresponding number:\n1.Coffee\n2.Tea\n3.Coca Cola\n";
    std::cin >> selection;

    if ((selection > 3) || (selection <= 0)) {
        std::cout << "Aww, there wasn't enough options for you were there.";
    }
    else {
        switch (selection)
        {
        case 1:
            std::cout << "Coffee is delicious";
            break;
        case 2:
            std::cout << "Tea gives peace of mind";
            break;
        case 3:
            std::cout << "Coke will give you a white smile";
            break;
        }
    }
}

void Task5() {

    std::cout <<
        "\n     1   2   3   4   5   6" <<
        "\n    --- --- --- --- --- ---" <<
        "\nA  : * : * : * : * : * : * :  A" <<
        "\n    --- --- --- --- --- ---" <<
        "\nB  : * : * : * : * : * : * :  B" <<
        "\n    --- --- --- --- --- ---" <<
        "\nC  : * : * : * : * : * : * :  C" <<
        "\n    --- --- --- --- --- ---" <<
        "\nD  : * : * : * : * : * : * :  D" <<
        "\n    --- --- --- --- --- ---" <<
        "\n     1   2   3   4   5   6";
}