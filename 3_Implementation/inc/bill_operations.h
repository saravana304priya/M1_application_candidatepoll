/** 
* @file bill_operations.h
* Invoice application with 3 mathematical operations
*
*/
#ifndef __bill_OPERATIONS_H__
#define __bill_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  get the number of item and quantity of items needed
* @param[in] number of item
* @param[in] quantity 
* @return number of operand1 + operand2
*/
void generateBillHeader(char name[3], char date[30])

/**
* get the item, quantity and price of each item
* @param[in] item
* @param[in] quantity
* @param[in] price
* @return Result of quantity * price
*/
void generateBillBody(char item[30], int qty, float price)

/**
*  mutliply the price and quantity and print the net total amount
* @param[in] nettotal
* @param[in] discount
* @return Result of nettotal
* @return result of discount
*/
void generateBillFooter(float total)



#endif  /* #define __BILL_OPERATIONS_H__ */
