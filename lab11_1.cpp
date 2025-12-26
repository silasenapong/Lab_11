#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    srand(time(0));

    std::string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    int luck = rand() % 9;

    std::cout << "Press Enter 3 times to reveal your future.";

    std::cin.get();
    std::cin.get();
    std::cin.get();

    switch (luck)
    {
    case 0:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 1:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 2:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 3:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 4:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 5:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 6:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 7:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    case 8:
        std::cout << "You will get " << grade[luck] << " in this 261102.";
        break;

    default:
        break;
    }

    return 0;
}