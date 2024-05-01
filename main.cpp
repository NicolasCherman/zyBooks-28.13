// main cpp
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   /* Type your code here */
   ItemToPurchase item1, item2;
   
   cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    string name;
    getline(cin, name);
    item1.SetName(name);

    cout << "Enter the item price:";
    int price;
    cin >> price;
    item1.SetPrice(price);
    cout << endl;

    cout << "Enter the item quantity:";
    int quantity;
    cin >> quantity;
    item1.SetQuantity(quantity);
    cout << endl;
    

    cin.ignore(); 

   cout << endl;
    cout << "Item 2" << endl;
    cout << "Enter the item name:";
    getline(cin, name);
    item2.SetName(name);
    cout << endl;

    cout << "Enter the item price:";
    cin >> price;
    item2.SetPrice(price);
    cout << endl;

    cout << "Enter the item quantity:";
    cin >> quantity;
    item2.SetQuantity(quantity);
    cout << endl;

    
    int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

    cout << "\nTOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    cout << "\nTotal: $" << totalCost << endl;

    return 0;
}
   
