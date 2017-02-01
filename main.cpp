/* Nicholas Gallimore */
/* main.cpp */
/* Driver program for arrayOfStructs assignment */

#include "taxPayer.hpp"
#include "taxConst.hpp"
#include "taxTaker.hpp"
#include "taxPrint.hpp"

int main()
{
	taxPayer citizen[SIZE];
	taxTaker(citizen);
	taxPrint(citizen);
	return 0;
}