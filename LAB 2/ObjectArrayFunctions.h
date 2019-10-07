#ifndef OBJECT_ARRAY_FUNCTIONS_H
#define OBJECT_ARRAY_FUNCTIONS_H
#include "Invoice.h"

/**
 * The maximum amount of items to add to our invoice array.
 */
const int INVOICE_COUNT = 10;

/**
* This function will iterate to INVOICE_COUNT, and add in Invoice objects.
*
* @param    Invoice*, Pointer of the Invoice array object
* @author   James Johnston
*/
void getInvoicesFromUser(Invoice* myInvoices);

/**
* Returns the Invoice with the maximum cost
*
* @return   The Invoice object with the maximum cost
* @author   James Johnston
*/
Invoice getMaximumCostInvoice(Invoice invoice[]);

#endif