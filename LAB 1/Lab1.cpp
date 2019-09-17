#include "Invoice.h"
using namespace std;
bool applicationRunning;

int getMenuChoice() {
  printf("Please enter a command: ");
  int menuChoice;
  cin >> menuChoice;
  cin.ignore();
  return menuChoice;
}

template<typename T>
T getValue(string message) {
  T returnValue;
  cout << message;
  cin >> returnValue;
  cin.ignore();
  return returnValue;
}

string getInvoiceDescription() {
    string returnValue;
    cout << "Description: ";
    getline(cin, returnValue);
    return returnValue;
}

int main() {
  // Create an Invoice objeect
  Invoice newInvoice = Invoice();

  // Set and get the values from the user
  newInvoice.setPartNumber(getValue<int>("Part #: "));
  newInvoice.setPartDescription(getInvoiceDescription());
  newInvoice.setUnitPrice(getValue<double>("Unit Price: $"));
  newInvoice.setQuantity(getValue<int>("Quantity: "));

  // Display a message regarding the item being added.
  cout << endl << "Item successfully added!" << endl << endl;

  // Call a public method in Invoice to show us the Invoice data
  newInvoice.displayInvoice();

  // Program terminated.
  return 0;
}
