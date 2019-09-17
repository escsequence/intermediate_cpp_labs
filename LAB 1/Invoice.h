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

  int getPartNumber() const;

  void setPartNumber(int partNumber);

  std::string getPartDescription() const;

  void setPartDescription(std::string description);

  int getQuantity() const;

  void setQuantity(int quantity);

  double getUnitPrice();

  void setUnitPrice(double price);

  void displayInvoice();
};
