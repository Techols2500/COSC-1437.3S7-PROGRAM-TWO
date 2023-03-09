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

#include <memory.h> 

#include "String.h"

String::String()
{
	cout << "In default constructor" << endl;
	pData = new char[1];
	pData[0] = '\0';
	NumChars = 0;
	NumSlots = NumChars;
}

String::String(const String & Str)
{
	cout << "In Copy constructor" << endl;
	NumChars = Str.NumChars;
	NumSlots = NumChars;
	pData = new char[NumChars + 1];
	strcpy(pData, Str.pData);
}

String::String(const char Str[])
{
	cout << "In constructor" << endl;
	NumChars = strlen(Str);
	NumSlots = NumChars;
	pData = new char[NumChars + 1];
	strcpy(pData, Str);
}

String::~String()
{
	cout << "In destructor" << endl;
	delete[] pData;
}

String & String::Concat(const String & Str)
{
	char *pTemp;
	NumSlots = NumChars + Str.NumChars + 1;
	pTemp = new char[NumSlots + 1];
	strcpy(pTemp, Str.pData);
	strcat(pTemp, pData);
	delete[] pData;
	pData = pTemp;
	NumChars = NumSlots;
	Copy(Str);
	return *this;
}

String & String::Concat(const char Str[])
{
	char *pTemp;
	NumSlots = NumChars + strlen(Str) + 1;
	pTemp = new char[NumSlots + 1];
	strcpy(pTemp, pData);
	strcat(pTemp, Str);
	delete[] pData;
	pData = pTemp;
	NumChars = NumSlots;
	Copy(Str);
	return *this;
}


String & String::Copy(const String & Str)
{
	if (this != &Str)
	{
		if (Str.NumChars > NumSlots)
		{
			delete[] pData;
			NumSlots = Str.NumChars;
			pData = new char[NumSlots + 1];
		}
		else;
		NumChars = Str.NumChars;
		strcpy(pData, Str.pData);
	}
	else;
	return *this;
}

String & String::Copy(const char Str[])
{
	size_t		TempLength;

	TempLength = strlen(Str);
	if (TempLength > NumSlots)
	{
		delete[] pData;
		pData = new char[TempLength + 1];
		NumSlots = TempLength;
	}
	else;
	NumChars = TempLength;
	strcpy(pData, Str);
	return *this;
}

istream & String::Read(istream & in)
{
	char	c;
	char *	pTemp;

	NumChars = 0;
	while ((c = in.get()) != '\n')
	{
		pData[NumChars++] = c;
		if (NumChars >= NumSlots)
		{
			pTemp = new char[(NumSlots += 50) + 1];
			memcpy(pTemp, pData, NumChars);
			delete[] pData;
			pData = pTemp;
		}
		else;
	}
	pData[NumChars] = '\0';

	in >> pData;

	return in;
}

String String::operator & (const String & Str) const
{
	String Temp(*this);
	Temp.Concat(Str);
	return Temp;
}

String String:: operator & (const char Str[]) const
{
	String Temp(*this);
	Temp.Concat(Str);
	return Temp;
}

String & String:: operator &= (const String & Str)
{

	String Temp(*this);
	Temp.Concat(Str);
	String & Copy(Temp);
	return *this;
}

String & String :: operator &= (const char Str[])
{
	String Temp(*this);
	Temp.Concat(Str);
	String & Copy(Temp);
	return *this;
}
