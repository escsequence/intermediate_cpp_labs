#include "Invoice.h"
<<<<<<< HEAD
=======


int Invoice::getPartNumber() {
  return partNumber;
}

void Invoice::setPartNumber(int partNumber) {
  this->partNumber = partNumber;
}

std::string Invoice::getPartDescription() {
  return partDescription;
}

void Invoice::setPartDescription(std::string description) {
  this->partDescription = description;
}

int Invoice::getQuantity() {
  return quantity;
}

void Invoice::setQuantity(int quantity) {
  if (quantity > 0)
    this->quantity = quantity;
  else
    this->quantity = 0;
}

double Invoice::getUnitPrice() {
  return unitPrice;
}

void Invoice::setUnitPrice(double price) {
  if (price > 0)
    this->unitPrice = price;
  else
    this->unitPrice = 0;
}

void Invoice::displayInvoice() {
  printf( "Part #%d - Description: %s - Quantity: %d - Price: $%.2f\n",
          partNumber,
          partDescription.c_str(),
          quantity,
          unitPrice);
}
>>>>>>> ac871c2365ec8f9d33a327396188277b55ec649d
