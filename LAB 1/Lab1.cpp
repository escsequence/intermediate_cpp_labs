#include "Invoice.h"
using namespace std;
bool applicationRunning;

void displayMenu() {
  printf("------------------------------------\n");
  printf("%d\t-\t%s\n", 1, "New Invoice");
  printf("%d\t-\t%s\n", 2, "List Invoices & Exit");
  printf("------------------------------------\n");
}


int getMenuChoice() {
  printf("Please enter a command: ");
  int menuChoice;
  cin >> menuChoice;
  // Ignore other input
  cin.ignore();
  return menuChoice;
}

string getInvoiceDescription() {
    string returnValue;
    cout << "Description: ";
    getline(cin, returnValue);
    return returnValue;
}

int getInvoicePartNumber() {
    int returnValue;
    cout << "Part #: ";
    cin >> returnValue;
    cin.ignore();
    return returnValue;
}

double getInvoicePrice() {
    double returnValue;
    cout << "Unit Price: $";
    cin >> returnValue;
    cin.ignore();
    return returnValue;
}

int getInvoiceQuantity() {
    int returnValue;
    cout << "Quantity: ";
    cin >> returnValue;
    cin.ignore();
    return returnValue;
}



int main() {
    Invoice newInvoice;

    newInvoice.setPartNumber(getInvoicePartNumber());
    newInvoice.setPartDescription(getInvoiceDescription());
    newInvoice.setUnitPrice(getInvoicePrice());
    newInvoice.setQuantity(getInvoiceQuantity());
    cout << endl << "Item successfully added!" << endl << endl;

    newInvoice.displayInvoice();
    return 0;
}
