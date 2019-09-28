#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

class Invoice {
private:
  int partNumber;  // Part number

  std::string partDescription;  // The part description

  int quantity;  // Quantity of this item

  double unitPrice;  // Unit price

public:
  Invoice() {} // Empty constructor.

  /**
  * Get part number private variable.
  *
  * @return   The part number.
  * @author   James Johnston
  */
  int getPartNumber() const;

  /**
  * Set the part number
  *
  * @param    partNumber, The part number value
  * @author   James Johnston
  */
  void setPartNumber(int partNumber);

  /**
  * Calculate the product of cost and quantity
  *
  * @return   Product of cost and quantity
  * @author   James Johnston
  */
  double calculateAmount() const;

  /**
  * Get the part description
  *
  * @return   Part description
  * @author   James Johnston
  */
  std::string getPartDescription() const;

  /**
  * Set the part description
  *
  * @param    description, The description of the part
  * @author   James Johnston
  */
  void setPartDescription(std::string description);


  /**
  * Get the quantity of the part
  *
  * @return   Quantity
  * @author   James Johnston
  */
  int getQuantity() const;

  /**
  * Set the quantity of the part
  *
  * @param    description, The description of the part
  * @author   James Johnston
  */
  void setQuantity(int quantity);

  /**
  * Get the unit price
  *
  * @return   The unit price
  * @author   James Johnston
  */
  double getUnitPrice() const;

  /**
  * Set the unit price
  *
  * @param    price,  The unit price
  * @author   James Johnston
  */
  void setUnitPrice(double price);

  /**
  * Display the entire invoice message.
  * Containing: quantity, description, part number, and product
  *
  * @Author:	James Johnston
  */
  void displayInvoice();
};

#endif
