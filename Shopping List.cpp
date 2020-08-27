/*
Write a program that allows you to enter grocery item names into an array of strings and the cost
of each item in an array of doubles. At the beginning of the program prompt the user to enter the
total number of items they will be entering. Max value of 100. After entering the item names and cost,
the application should display the names and cost and total cost of all items.

***Your program must work EXACTLY like the one shown below.***

Example Run:

Enter number of grocery items you will be entering: 3

Please enter the item names as one word only. Example: tomatoes
Enter the cost as a decimal number. Example: 2.44

Enter item 1: apples
Enter the cost of the apples: 3.56

Enter item 2: milk
Enter the cost of the milk: 2.50

Enter item 3: bread
Enter the cost of the bread: 2.99

OUTPUT:
Items Cost
apples $3.56
milk $2.50
bread $2.99

Total: $9.05
*/

#include <iostream>
#include <map>
#include <string>
//#include <bits/stdc++.h>


class GroceryList {
private:
    //int m_numItems;
    //vector <double> m_itemsPrice;
    //vector <std::string> m_itemsList;
    std::map <std::string, double> m_itemsList;

public:
    GroceryList() {};

    void setItems(std::string item, double price) {
        m_itemsList[item] = price;
    }

    double getPrice(std::string chave) {
        return m_itemsList[chave];
    }

    void outputItems() {

        std::cout << "\nOUTPUT:\n" << "Items Cost\n";

        double grandTotal = 0;

        for (std::pair<std::string, double> p : m_itemsList) {
            std::cout << p.first << " $" << p.second << "\n";
            grandTotal = grandTotal + p.second;
        }

        std::cout << "\nTotal: $" << grandTotal;
    };
};


int main()
{
    int numItems;
    std::string item;
    double price;
    std::cout << "Enter number of grocery items you will be entering: ";
    std::cin >> numItems;
    GroceryList today;

    std::cout << "Please enter the item names as one word only. Example: tomatoes \n"
        << "Enter the cost as a decimal number. Example: 2.44\n";

    for (int i = 0; i < numItems; i++) {
        std::cout << "\nEnter item " << i + 1 << ": ";
        std::cin >> item;
        std::cout << "Enter cost of the " << item << ": ";
        std::cin >> price;
        today.setItems(item, price);
    }

    today.outputItems();
    return 0;
}