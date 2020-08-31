// GroceryList.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
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
#include <string>
#include <map>
//#include <bits.stdc++.h>

class GroceryList {
private:
	std::map <std::string, double> item_price;
	std::string item;
	double price;

public:
	GroceryList() {}; //constructor

	void setList(std::string item, double price) {
		item_price[item] = price;
	};

	void getList() {
		std::cout << "OUTPUT:\n" << "Items Cost\n";

		double totalPrice = 0; //hold total cost of the list

			for (std::pair <std::string, double> p : item_price) {
				std::cout << p.first << " $" << p.second << "\n";
				totalPrice = totalPrice + p.second;
			};

		std::cout << "\nTotal: $" << totalPrice;
	};
};

int main() {
	
	GroceryList newList{};
	int numItems;
	std::string item;
	double price;

	std::cout << "Enter number of grocery items you will be entering: ";
	std::cin >> numItems;

	std::cout << "\nPlease enter the item names as one word only.Example: tomatoes\n"
		<< "Enter the cost as a decimal number.Example : 2.44\n";

	for (int i = 0; i < numItems; i++) {
		std::cout << "\nEnter item " << i + 1 << ": ";
		std::cin >> item;
		std::cout << "Enter the cost of the " << item << ": ";
		std::cin >> price;

		newList.setList(item, price);
	}

	newList.getList();

	return 0;
}