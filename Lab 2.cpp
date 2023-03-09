//************************************************************************** 
//
// Programming Excerise 2   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jun 2017
//
//************************************************************************** 
#include <iostream>

using namespace std;

#include "String.h"

void main()
{
	String	Str1;
	String	Str2("abcdef");
	String	Str3(Str2);


	String *	pStr;

	cout << "_____________________________________ " << endl;

	cout << "Dynamically instantiating a MyString object with new" << endl;
	cout << endl;

	pStr = new String("WXYZ");
	cout << "The object contains ";
	(*pStr).Display();
	cout << endl;

	cout << "The object contains ";
	pStr->Display();
	cout << endl;

	cout << "Now get rid of the object" << endl;
	delete pStr;

	cout << "______________________________ " << endl;

	cout << "Demonstration of dynamic memory with new complete" << endl;
	cout << endl;

	cout << "Str1 contains ";
	Str1.Display();
	cout << endl;

	cout << "Str2 contains ";
	Str2.Display();
	cout << endl;

	cout << "Str3 contains ";
	Str3.Display();
	cout << endl;

	cout << "_______________________________ " << endl;

	cout << "Testing Compare" << endl;
	cout << endl;

	if (Str2.Compare(Str3) == 0)
		cout << "Str2 is the same as Str3" << endl;
	else
		cout << "Str2 is not the same as Str3" << endl;
	cout << endl;

	cout << "Finished testing Compare" << endl;

	cout << "_____________________________________ " << endl;

	cout << " Testing Compare with an array of characters" << endl;
	if (Str2.Compare("WXYZQRS") == 0)
		cout << "Str2 is the same as WXYZQRS" << endl;
	else
		cout << "Str2 is not the same as WXYZQRS" << endl;

	cout << endl;

	cout << " Finished testing Compare with an array of characters" << endl;

	cout << "________________________________ " << endl;

	cout << " Testing Copy" << endl;

	Str2.Copy("abcdefghijklmnopqrstuvwxyz");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;

	Str2.Copy("XXX");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;

	Str2.Copy("ABCD");
	cout << "Str2 now contains " << endl;
	Str2.Display();

	cout << endl;


	Str1.Copy(Str2);
	cout << "Str1 now contains " << endl;
	Str1.Display();

	cout << endl;

	cout << " Finished testing Copy" << endl;

	cout << "________________________________________ " << endl;

	cout << " Testing Concat " << endl;
	cout << endl;

	Str1.Concat(Str1);
	cout << "Str 1 has " << endl;
	Str1.Display();

	cout << endl;


	Str2.Concat(Str2);
	cout << "Str 2 has " << endl;
	Str2.Display();

	cout << endl;


	Str3.Concat(Str3);
	cout << "Str 3 has " << endl;
	Str3.Display();

	cout << endl;

	cout << " Done testing Concat Function " << endl;

	cout << "________________________________________ " << endl;

	cout << " Testing Comparison Operators " << endl;

	if (Str1 < "abcdef")
		cout << "Str1 is less than abcdef" << endl;
	else
		cout << "Str1 is not less than Str2" << endl;

	cout << endl;

	if (Str1 > "abcdef")
		cout << "Str1 is less than Str2" << endl;
	else
		cout << "Str1 is not less than Str2" << endl;

	cout << endl;

	if ("abcdef" < Str2)
		cout << "abcdef is less than Str2" << endl;
	else
		cout << "abcdef is not less than Str2" << endl;

	cout << endl;

	if ("abcdef" > Str2)
		cout << "abcdef is greater than Str2" << endl;
	else
		cout << "abcdef is not greater than Str2" << endl;

	cout << endl;

	if (Str1 >= "abcdef")
		cout << "Str1 is less than or equal to abcdef" << endl;
	else
		cout << "Str1 is not less than or equal to abcdef" << endl;

	cout << endl;

	if ("abcvd" <= Str1)
		cout << "abcvd is greater than or equal to Str1" << endl;
	else
		cout << "abcvd is not greater than or equal to Str1" << endl;

	cout << endl;

	if (Str2 >= "abcdef")
		cout << "Str2 is less or equal than abcdef" << endl;
	else
		cout << "Str2 is not less than or equal to abcdef" << endl;
	cout << endl;

	if ("abcdef" == Str2)
		cout << "Str1 is double equal to Str2" << endl;
	else
		cout << "Str1 is not double equal to Str2" << endl;

	cout << endl;

	if (Str1 != "abcdef")
		cout << "Str3 is not equal to abcdef" << endl;
	else
		cout << "Str3 is equal somehow to abcdef" << endl;

	cout << " Done testing Comparison operators" << endl;

	cout << "___________________________________" << endl;

	cout << "Testing Assignment operator" << endl;

	Str1 = Str2 = Str3;

	cout << " Str1 now contains " << Str1 << endl;
	cout << endl;

	Str2 = Str1;
	cout << " Str2 Now Contains " << Str2 << endl;


	cout << " Finished testing Assignment" << endl;

	cout << "___________________________________" << endl;

	cout << "Testing Concat With &" << endl;


	cout << "Str1 and Str2 Combined looks like" << endl;

	cout << (Str1 & Str2) << endl;

	cout << endl;

	cout << " Str3 and Str1 Combined looks like" << endl;

	cout << (Str3 & Str1) << endl;

	cout << endl;

	cout << " Finished testing Concat &" << endl;

	cout << "_________________________________________" << endl;

	cout << "Testing Concat with &= " << endl;

	Str3 &= Str1;

	cout << " Str3 now looks like " << Str1 << endl;
	cout << endl;

	Str1 &= Str2;

	cout << " Str1 now looks like " << Str2 << endl;
	cout << endl;

	cout << " Finnished testing concat &= " << endl;

	cout << "_____________________________________________" << endl;

}
