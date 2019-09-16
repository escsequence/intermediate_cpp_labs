#include "Invoice.h"
#include "vector"
using namespace std;
bool applicationRunning;

void displayMenu() {
  printf("------------------------------------\n");
  printf("%d\t-\t%s\n", 1, "Enter a new Invoice");
  printf("%d\t-\t%s\n", 2, "List Invoices");
  printf("%d\t-\t%s\n", 3, "Exit Program");
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


int main() {
  std::vector<Invoice> myInvoices = std::vector<Invoice>();
  applicationRunning = true;

  while(applicationRunning) {
    displayMenu();
    switch(getMenuChoice()) {
      case 1:
      break;
      case 2:
      break;
      case 3:
        applicationRunning = false;
        break;
      default:
        printf("\nInvalid command. Please try again with a correct entry.\n\n");
    }
  }
  //displayMenu();
  //Invoice myInvoice = Invoice(1003, "This is a wheel.", 4, 10.25);
  //myInvoice.displayInvoice();
  return 0;
}
