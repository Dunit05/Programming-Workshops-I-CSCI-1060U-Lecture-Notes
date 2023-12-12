// Inventory Management System

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Item {
private:
    int itemNumber;
    string itemName;
    int quantity;
    double cost;
    double totalCost;

public:
    Item(int itemNumber, string itemName, int quantity, double cost) {
        this->itemNumber = itemNumber;
        this->itemName = itemName;
        this->quantity = quantity;
        this->cost = cost;
        this->totalCost = quantity * cost;
    }

    ~Item() {
        cout << "Item " << itemNumber << " is destroyed." << endl;
    }

    int getItemNumber() {
        return itemNumber;
    }

    string getItemName() {
        return itemName;
    }

    int getQuantity() {
        return quantity;
    }

    double getCost() {
        return cost;
    }

    double getTotalCost() {
        return totalCost;
    }

    void setItemNumber(int itemNumber) {
        this->itemNumber = itemNumber;
    }

    void setItemName(string itemName) {
        this->itemName = itemName;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    void setCost(double cost) {
        this->cost = cost;
    }

    void setTotalCost(double totalCost) {
        this->totalCost = totalCost;
    }
};

class Inventory {
private:
    vector<Item> items;

public:
    Inventory() {
        items = vector<Item>();
    }

    ~Inventory() {
        cout << "Inventory is destroyed." << endl;
    }

    void addItem(Item item) {
        items.push_back(item);
    }

    void removeItem(int itemNumber) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].getItemNumber() == itemNumber) {
                items.erase(items.begin() + i);
                break;
            }
        }
    }

    void updateItem(int itemNumber, int quantity) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].getItemNumber() == itemNumber) {
                items[i].setQuantity(quantity);
                items[i].setTotalCost(quantity * items[i].getCost());
                break;
            }
        }
    }

    void printItem(int itemNumber) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].getItemNumber() == itemNumber) {
                cout << "Item Number: " << items[i].getItemNumber() << endl;
                cout << "Item Name: " << items[i].getItemName() << endl;
                cout << "Quantity: " << items[i].getQuantity() << endl;
                cout << "Cost: " << items[i].getCost() << endl;
                cout << "Total Cost: " << items[i].getTotalCost() << endl;
                break;
            }
        }
    }

    void printAllItems() {
        for (int i = 0; i < items.size(); i++) {
            cout << "Item Number: " << items[i].getItemNumber() << endl;
            cout << "Item Name: " << items[i].getItemName() << endl;
            cout << "Quantity: " << items[i].getQuantity() << endl;
            cout << "Cost: " << items[i].getCost() << endl;
            cout << "Total Cost: " << items[i].getTotalCost() << endl;
        }

        for (Item item : items) {
            cout << "Item Number: " << item.getItemNumber() << endl;
            cout << "Item Name: " << item.getItemName() << endl;
            cout << "Quantity: " << item.getQuantity() << endl;
            cout << "Cost: " << item.getCost() << endl;
            cout << "Total Cost: " << item.getTotalCost() << endl;
        }
    }
};

int main() {
    Inventory inventory;

    inventory.addItem(Item(1, "Item 1", 10, 10.0));
    inventory.addItem(Item(2, "Item 2", 20, 20.0));
    inventory.addItem(Item(3, "Item 3", 30, 30.0));
    inventory.addItem(Item(4, "Item 4", 40, 40.0));
    inventory.addItem(Item(5, "Item 5", 50, 50.0));

    inventory.printAllItems();

    inventory.removeItem(3);

    inventory.printAllItems();

    inventory.updateItem(5, 100);

    inventory.printAllItems();

    inventory.printItem(2);

    return 0;
}