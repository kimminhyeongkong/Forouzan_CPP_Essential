#ifndef INVOICE_H

#define INVOICE_H
#include "product.hpp"

class Invoice
{
  private:
    int invoiceNumber;
    double invoiceTotal;
  public:
    Invoice(int invoiceNumber);
    ~Invoice();
    void add(int quantity, Product product); // 의존 관계 -> Invoice 클래스는 Product 클래스에 의존
    void print() const;
};

#endif