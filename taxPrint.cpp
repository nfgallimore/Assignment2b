/* Nicholas Gallimore */
/* taxPrint.cpp */
/* Implementation for taxPrint */

#include <iostream>

#include "taxConst.hpp"
#include "taxPayer.hpp"
#include "taxPrint.hpp"

// takes a taxPayer array as input and returns nothing
void taxPrint(taxPayer* tp)
{
	std::cout << "\n\nTaxes due for this year:\n\n";

	// sets the precision of cout to 2 to represent a currency
	std::cout.precision(2);

	// prints tax payer information 
	for (int i = 0; i < SIZE; i++)
	{
		// note that init of i is 0 but printing starts from 1 */
		std::cout << "Tax Payer # " << i + 1 << ": $ " << std::fixed << tp[i].taxes << std::endl;
	}
}