#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare variables
    string name;
    int id;
    string itemName[3] = {"Printer", "Phone", "Table"};
    string buy;
    double amount;
    double itemCost[3] = {230.0, 140.0, 80.0};
    double total;
    double vat = 0.12;
    double pay;
    double balance;
    double debt;
    double success;

    cout << "\nWelcome to our Item Purchasing Program. \n\n";

    //Display items being sold and their price
    cout << "Available items in stock: \n";
    cout << "\t"<< itemName[0] << "- price $" << itemCost[0] << ".\n";
    cout << "\t"<< itemName[1] << "- price $" << itemCost[1] << ".\n";
    cout << "\t"<< itemName[2] << "- price $" << itemCost[2] << ".\n";
    cout << "Vat on each item you purchase: " << vat << "\n";
    //Collect user name and ID
    cout << "Please enter your name and user ID: .Please leave a space between. Example://John 12345. \t";
    cin >> name >> id;

    //Display items and their corresponding cost to be purchased
    cout << "Purchase one item you desire\n \t 1. Printer\n \t 2. Phone\n \t 3. Table \n\n";
    cin >> buy;
    if ( buy == itemName[0]){
        cout << "That will cost $" << itemCost[0] << "\n\n";
    } else if ( buy == itemName[1]) {
        cout << "That will cost $" << itemCost[1] << "\n\n";
    } else if ( buy == itemName[2]) {
        cout << "That will cost $" << itemCost[2] << "\n\n";
    }else{
        cout << "Item name must begin with a capital letter Or you misspelled the item. Example://Printer or Phone." << endl;
    }
    cout << "How much do want to buy: ";
    cin >> amount;

    //Display the total of the user's purchase
    if ( buy == itemName[0]){
        total = itemCost[0] * amount - vat;
        cout << "Total cost $ " << total << " with 12% vat\n\n";
    } else if ( buy == itemName[1]){
        total = itemCost[1] * amount - vat;
        cout << "Total cost $ " << total << " with 12% vat\n\n";
    } else if ( buy == itemName[2]){
        total = itemCost[2] * amount - vat;
        cout << "Total cost $ " << total << " with 12% vat\n\n";
    }else{
        cout << "!ERROR: //Item name not typed correctly\n\n";
    }

    //Display the user's balance or debt based on amount paid
    cout << "Enter amount to be paid: \n";
    cin >> pay;
    if ( pay < total){
        debt = pay - total;
        cout << "Incomplete payment you owe: $" << debt << "\n\n";
    }else if ( pay > total){
        balance = pay - total;
        cout << "Full payment with remaining balance: $" << balance << "\n\n";
    }else if ( pay == total){
        success = pay - total;
        cout << "Successful Payment\n\n";
    }else  {
        cout << "!ERROR: //Item name not typed correctly\n\n";
    }

    //Display receipt to user
    cout << "Payment Receipt.\n\n";
    cout << "Name: " << name << "," << " ID: " << id << "\n";
    if ( buy == itemName[0]){
        cout << "Item Bought:  "<< itemName[0] << "\n";
    }else if ( buy == itemName[1]){
        cout << "Item Bought:  "<< itemName[1] << "\n";
    }else if ( buy == itemName[2]){
        cout << "Item Bought:  "<< itemName[2] << "\n";
    }else{
        cout << "ERROR\n\n";
    }

    cout << "Quantity Bought: " << amount << "\n";
    cout << "Total Cost: $" << total << "\n";
    cout << "Vat: " << vat << "\n";
    cout << "Amount Paid: $" << pay << "\n";
    cout << "Balance: $" << balance << "\n";
    cout << "Debt: $" << debt << "\n";
    return 0;
}
