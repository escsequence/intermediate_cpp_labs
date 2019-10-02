/**
* Member function definitions for class Invoice
*
* @Author:      James Johnston
* @Version:     1.0
* @Assignment:  Lab 1
*************************/
#include "Invoice.h"

/**
* Standard constructor
*/
Invoice::Invoice() {

}

/**
* Get part number private variable.
*
* @return   The part number.
* @author   James Johnston
*/
int Invoice::getPartNumber() const {
  return partNumber;
}

/**
* Set the part number
*
* @param    partNumber, The part number value
* @author   James Johnston
*/
void Invoice::setPartNumber(int partNumber) {
  this->partNumber = partNumber;
}

/**
* Get the part description
*
* @return   Part description
* @author   James Johnston
*/
std::string Invoice::getPartDescription() const {
  return partDescription;
}

/**
* Set the part description
*
* @param    description, The description of the part
* @author   James Johnston
*/
void Invoice::setPartDescription(std::string description) {
  this->partDescription = description;
}

/**
* Get the quantity of the part
*
* @return   Quantity
* @author   James Johnston
*/
int Invoice::getQuantity() const {
  return quantity;
}

/**
* Calculate the product of cost and quantity
*
* @return   Product of cost and quantity
* @author   James Johnston
*/
double Invoice::calculateAmount() const {
  return unitPrice * quantity;
}

/**
* Set the quantity of the part
*
* @param    description, The description of the part
* @author   James Johnston
*/
void Invoice::setQuantity(int quantity) {
  if (quantity > 0)
    this->quantity = quantity;
  else
    this->quantity = 0;
}

/**
* Get the unit price
*
* @return   The unit price
* @author   James Johnston
*/
double Invoice::getUnitPrice() const {
  return unitPrice;
}

/**
* Set the unit price
*
* @param    price,  The unit price
* @author   James Johnston
*/
void Invoice::setUnitPrice(double price) {
  if (price > 0)
    this->unitPrice = price;
  else
    this->unitPrice = 0;
}

/**
* Display the entire invoice message.
* Containing: quantity, description, part number, and product
*
* @Author:	James Johnston
*/
void Invoice::displayInvoice() {

  // Set our message variable
  std::string message = "Part #%d\nDescription: %s\nQuantity: %d\n" +
                        std::string("Price: $%.2f\nTotal: $%.2f\n\n");

  // Output the message and arguments to the values
  printf( message.c_str(),
          partNumber,
          partDescription.c_str(),
          quantity,
          unitPrice,
          calculateAmount());

}
