/*
* Lab1.cpp
* Written by:	  James Johnston
* Date:         10/5/19
* Version:		  2.0
*/

/**
* Test program for Invoice class.
*
* @Author:      James Johnston
* @Version:     2.0
* @Assignment:	Lab 2 - Create an Invoice class and call methods to it.
*/
#include "ObjectArrayFunctions.h"
#include <iomanip>

using namespace std;

/**
* Receieve input from the user and get a value
*
* @param    message,  The message to display to the user
* @return   The value entered by the user
* @author   James Johnston
*/
template<typename T>
T getValue(string message) {
  T returnValue;
  cout << message;
  cin >> returnValue;

  while(cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Incorrect input, please try again." << endl;
    cout << message;
    cin >> returnValue;
  }

  cin.ignore();
  return returnValue;
}

/**
* Receieve input from the user to get the Invoice Description
*
* @return   The string value entered by ther user
* @author   James Johnston
*/
string getInvoiceDescription() {
    string returnValue;
    cout << "Description: ";
    getline(cin, returnValue);
    return returnValue;
}

/**
* Returns the Invoice with the maximum cost
*
* @return   The Invoice object with the maximum cost
* @author   James Johnston
*/
Invoice getMaximumCostInvoice(Invoice invoice[]) {
  int indexHolder = 0;
  double maximumAmount = 0;
  for (int index = 0; index < INVOICE_COUNT; ++index) {
    if (invoice[index].calculateAmount() > maximumAmount){
      indexHolder = index;
      maximumAmount = invoice[index].calculateAmount();
    }
  }
  return invoice[indexHolder];
}

/**
* This function will iterate to INVOICE_COUNT, and add in Invoice objects.
*
* @param    Invoice*, Pointer of the Invoice array object
* @author   James Johnston
*/
void getInvoicesFromUser(Invoice* myInvoices) {
  // We initalize our objects while we take in the input for the object.
  for (int index = 0; index < INVOICE_COUNT; ++index) {
    myInvoices[index] = Invoice(getValue<int>("Part #: "),
                                getInvoiceDescription(),
                                getValue<double>("Unit Price: $"),
                                getValue<int>("Quantity: "));

    // Display a message regarding the item being added.
    cout << endl << "Item #" << (index+1) << " successfully added!" << endl << endl;
  }
}

/**
* Main method to run Invoice class Lab 2
*
* @return   Program status (0 for success)
* @author   James Johnston
*/
int main() {

  // Create our Invoice array
  Invoice myInvoices[INVOICE_COUNT];

  // Pass in the pointer for the Invoice array
  getInvoicesFromUser(myInvoices);

  // Display a message about the final item
  cout << endl << "The item with the maximum cost is..." << endl;

  // Call a public method in Invoice to show us the Invoice data
  getMaximumCostInvoice(myInvoices).displayInvoice();

  // Program terminated.
  return 0;

}
