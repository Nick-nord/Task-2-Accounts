// Задача 2. Счета.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct BankPerson
{
    std::string first_name;
    int AccountNumber;
    double AmountMoneyInAccount;
    double NewBalance;
    void ChangeBalance(BankPerson& person, double NewBalance) // ссылка
    {
        AmountMoneyInAccount = NewBalance;
    }

};

int main(int argc, char** argv)
{
   
    BankPerson person;
    std::cout << "Enter the account number:";
    std::cin >> person.AccountNumber;
    std::cout << "Enter the owner's name:";
    std::cin >> person.first_name;
    std::cout << "Enter the balance:";
    std::cin >> person.AmountMoneyInAccount;
    std::cout << "Enter a new balance:";
    std::cin >> person.NewBalance;
    person.ChangeBalance(person, person.NewBalance);
    
    std::cout << "Your account:" << person.first_name << ", " << person.AccountNumber << ", " << person.AmountMoneyInAccount;

    return EXIT_SUCCESS;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
