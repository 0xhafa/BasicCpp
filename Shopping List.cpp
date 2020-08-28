
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