/*
* Lab1.cpp
* Written by:	  James Johnston
* Date:         9/18/19
* Version:		  1.0
*/

/**
* Test program for Invoice class.
*
* @Author:      James Johnston
* @Version:     1.0
* @Assignment:	Lab 1 - Create an Invoice class and call methods to it.
*/
#include "Invoice.h"
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
* Main method to run Invoice class Lab 1
*
* @return   Program status (0 for success)
* @author   James Johnston
*/
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
