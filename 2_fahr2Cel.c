#include <stdio.h>
/* Print Fahrenheit-Celsius table for fahr = 0, 20, ... , 300 */

// Inline Comment
/*
Multiline Comment
*/

/*
Comments may be used freely to make a program easier to understand.
Comments may appear any-where a blank or tab or newline can.
*/

// Symbolic Constants
#define		LOWER	0	// Lower Limit of Table
#define		UPPER	300	// Upper Limit of Table
#define		STEP	20	// step size

int main()
	{
	float fahr, celsius;
	// int lower, upper, step;
	/*
	In C, all variables must be declared before they are used, usually at the
	beginning of the function before any executable statements. A declaration
	announces the properties of variables; it consists of a type name and a list of
	variables,
	*/
	/*
	The range of both int and float depends on the machine you are
	using; 16-bit ints, which lie between -32768 and +32767, are common, as are
	32-bit ints. A float number is typically a 32-bit quantity, with at least six
	significant digits and magnitude generally between about 10E-38 and 10E+38
	*/
	/*
	C provides several other basic data types besides int and float, including:
	char				short		long		double
	character-a single byte		short integer	long integer	double-precision floating point
	The sizes of these objects are also machine-dependent.
	*/

	//for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	//	printf("%3d %6.1£\n", fahr, (5.0/9.0)*(fahr-32));

	fahr = LOWER;		//Individual Statements are terminated by Semicolons.
	while (fahr <= UPPER) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f \t %6.1f\n", fahr, celsius);	// with each % indicating where one of the other 
							// (second, third, .. .) arguments is to 
							// be substi-tuted, and in what form
							// it is to be printed.
		/*
		The printf conversion specification %3. Of says that a floating-point
		number (here fahr) is to be printed at least three characters wide, with no
		decimal point and no fraction digits. %6 . 1f describes another number
		(celsius) that is to be printed at least six characters wide, with 1 digit after
		the decimal point.
		*/
		fahr = fahr + STEP;
		}
	}
