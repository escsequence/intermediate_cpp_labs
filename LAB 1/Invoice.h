#include <iostream>

class Invoice {
private:
  int partNumber;
  std::string partDescription;
  int quantity;
  double unitPrice;
public:
    Invoice() {

    }
  Invoice(int part, std::string description, int amount,
          double price) : partNumber(part), partDescription(description) {
    setQuantity(amount);
    setUnitPrice(price);
  }

  int getPartNumber();

  void setPartNumber(int partNumber);

  std::string getPartDescription();

  void setPartDescription(std::string description);

  int getQuantity();

  void setQuantity(int quantity);

  double getUnitPrice();

  void setUnitPrice(double price);

  void displayInvoice();
};
