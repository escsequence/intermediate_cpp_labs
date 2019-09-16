#include <iostream>

class Invoice {
private:
  int partNumber;
  std::string partDescription;
  int quantity;
  double unitPrice;
public:
<<<<<<< HEAD
=======
    Invoice() {

    }
>>>>>>> ac871c2365ec8f9d33a327396188277b55ec649d
  Invoice(int part, std::string description, int amount,
          double price) : partNumber(part), partDescription(description) {
    setQuantity(amount);
    setUnitPrice(price);
  }

  // Getters and setters
<<<<<<< HEAD
  int getPartNumber() {
    return partNumber;
  }

  void setPartNumber(int partNumber) {
    this->partNumber = partNumber;
  }

  std::string getPartDescription() {
    return partDescription;
  }

  void setPartDescription(std::string description) {
    this->partDescription = description;
  }

  int getQuantity() {
    return quantity;
  }

  void setQuantity(int quantity) {
    if (quantity > 0)
      this->quantity = quantity;
    else
      this->quantity = 0;
  }

  double getUnitPrice() {
    return unitPrice;
  }

  void setUnitPrice(double price) {
    if (price > 0)
      this->unitPrice = price;
    else
      this->unitPrice = 0;
  }

  void displayInvoice() {
    printf( "Part #%d - Description: %s - Quantity: %d - Price: $%.2f\n",
            partNumber,
            partDescription.c_str(),
            quantity,
            unitPrice);
  }
=======
  int getPartNumber();

  void setPartNumber(int partNumber);

  std::string getPartDescription();

  void setPartDescription(std::string description);

  int getQuantity();

  void setQuantity(int quantity);

  double getUnitPrice();

  void setUnitPrice(double price);

  void displayInvoice();
>>>>>>> ac871c2365ec8f9d33a327396188277b55ec649d
};
