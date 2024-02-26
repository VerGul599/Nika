#include <iostream>
#include <Windows.h>
#include <string>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int pizzaCode, pizzaQuantity, pizzaPrice=0, Quantity=0, Price=0, drinkCode, drinkQuantity, drinkPrice=0;
    int Pizza1=0, Pizza2=0, Pizza3=0, Pizza4=0, Drink1=0, Drink2=0, Drink3=0;

    std::cout << "\t\t\t Меню пиццы:\n";
    std::cout << "1. Пепперони - 20$\n";
    std::cout << "2. Гавайская - 30$\n";
    std::cout << "3. Маргарита - 40$\n";
    std::cout << "4. С ананасом - 50$\n";

    std::cout << "\t\t\t Меню напитков:\n";
    std::cout << "1. Кола - 10$\n";
    std::cout << "2. Спрайт - 11$\n";
    std::cout << "3. Фанта - 12$\n\n\n";

    std::cout << "\t\t\tВведите номер пиццы и количество:\n ";
    std::cin >> pizzaCode >> pizzaQuantity;
    std::cout << "\t\t\tВведите номер напитка и количество: \n";
    std::cin >> drinkCode >> drinkQuantity;

    if (pizzaCode == 1)
    {
        Pizza1 = pizzaQuantity;

    }
    if (pizzaCode == 2)
    {
        Pizza2 = pizzaQuantity;
    }
    if (pizzaCode == 3)
    {
        Pizza3 = pizzaQuantity;
    }
    if (pizzaCode == 4)
    {
        Pizza4 = pizzaQuantity;
    }

    Price += pizzaPrice * pizzaQuantity;
    Quantity += pizzaQuantity;

    if (drinkCode == 1)
    {
        Drink1 = drinkQuantity;
    }
    if (drinkCode == 2)
    {
        Drink2 = drinkQuantity;
    }
    if (drinkCode == 3)
    {
        Drink3 = drinkQuantity;
    }

    Price += drinkPrice * drinkQuantity;
    Quantity += drinkQuantity;

    
    if (Price > 50)
    {
        Price *= 0.8;
    }
    if (Quantity / 5 > 0)
    {
        Price -= pizzaPrice;
    }
    if (drinkPrice > 2 && drinkQuantity > 3)
    {
        Price *= 0.85;
    }
   
    std::cout << "Пиццы:\n";
    std::cout<< "Пепперони " << Pizza1 << " - $" << Pizza1 * 20 << "\n";
    std::cout << "Гавайская " << Pizza2 << " - $" << Pizza2 * 30 << "\n";
    std::cout << "Сырная " << Pizza3 << " - $" <<Pizza3 * 40 << "\n";
    std::cout << "Маргарита " << Pizza4 << " - $" << Pizza4 * 50 << "\n";

    std::cout << "Напитки:\n";
    std::cout << "Кола " << Drink1 << " - $" << Drink1 * 10 << "\n";
    std::cout << "Спрайт " << Drink2 << " - $" << Drink2 * 11 << "\n";
    std::cout << "Фанта " <<Drink3 << " - $" << Drink3 * 12 << "\n";
    
    std::cout << "Итого к оплате: "<< Price << "$" ;
  
  return 0;
   
}
