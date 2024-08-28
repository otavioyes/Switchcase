#include <iostream>



int main()
{

    char operacion;
    float num1{0}, num2{0};

    std::cout << "Input operator (+, -, * ou /) ";
    std::cin >> operacion;

    std::cout << "Input first numeber: ";
    std::cin >> num1;

    std::cout << "Input second number: ";
    std::cin >> num2;

    switch (operacion)
    {
    case '+':
        std::cout << "Result: " << (num1 + num2) << "\n\n ";
        break;

    case '-':
        std::cout << "Result: " << (num1 - num2) << "\n\n ";
        break;

    case '*':
        std::cout << "Result: " << (num1 * num2) << "\n\n ";
        break;

    case '/':
        std::cout << "Result: " << (num1 / num2) << "\n\n ";
        break;
    default:
        std::cout << "Operator invalid, please input opertor valid \n\n ";

    }


    return 0;

}
