//************************************************************************** 
//
// Programming Excerise 2   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jun 2017
//
//************************************************************************** 
#ifndef MY_STRING_H
#define MY_STRING_H

#include <iostream>

using namespace std;

#include <String.h>


class String
{
public:
	String();
	String(const String &);
	explicit	String(const char[]);
	~String();
	int			Compare(const String &) const;
	int			Compare(const char[]) const;
	String &	Copy(const String &);
	String &	Copy(const char[]);

	String &	Concat(const String &);
	String &	Concat(const char[]);

	ostream	&	Display(ostream & = cout) const;
	istream &	Read(istream & = cin);

	String &	operator =	(const String &);
	String &	operator = (const char[]);
	bool		operator == (const String &) const;
	bool		operator == (const char[]) const;
	bool 		operator != (const String &) const;
	bool 		operator != (const char[]) const;

	bool		operator <	(const String &) const;
	bool		operator <	(const char[]) const;
	bool		operator <= (const String &)const;
	bool		operator <= (const char[])const;

	bool        operator > (const String &) const;
	bool		operator > (const char[]) const;
	bool        operator >= (const String &) const;
	bool		operator >= (const char[]) const;

	String		operator & (const String &)const;
	String		operator & (const char[]) const;
	String &	operator &= (const String &);
	String &	operator &= (const char[]);

private:
	char *	pData;
	size_t	NumChars;
	size_t	NumSlots;
};

inline ostream & operator << (ostream & out, const String & Str)
{
	Str.Display(out);
	return out;
}

inline istream & operator >> (istream & in, String & Str)
{
	Str.Read(in);
	return in;
}

inline int String::Compare(const String & Str) const
{
	return strcmp(pData, Str.pData);
}

inline int String::Compare(const char Str[]) const
{
	return strcmp(pData, Str);
}

inline ostream & String::Display(ostream & out) const
{
	out << pData << endl;
	return out;
}

inline String & String::operator = (const String & Str)
{
	return Copy(Str);
}

inline String & String::operator = (const char Str[])
{
	return Copy(Str);
}

inline bool String::operator == (const char Str[]) const
{
	if (strcmp(pData, Str) == 0)
		return true;
	else
		return false;
}

inline bool String::operator == (const String & Str) const

{
	if (strcmp(pData, Str.pData) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool operator == (const char pChar[], const String & Str)
{
	return Str == pChar;
}

inline bool operator != (const char pChar[], const String & Str)
{
	return Str != pChar;
}





inline bool String::operator != (const char Str[]) const
{
	if (strcmp(pData, Str) != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool String::operator != (const String & Str) const

{
	if (strcmp(pData, Str.pData) != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


inline bool String::operator < (const String & Str) const
{
	if (strcmp(pData, Str.pData) < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


inline bool String::operator < (const char Str[]) const
{

	if (strcmp(pData, Str) < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool operator < (const char pChar[], const String & Str)
{
	return Str > pChar;
}


inline bool String::operator > (const String & Str) const
{
	if (strcmp(Str.pData, pData) > 0)
		return true;
	else
		return false;

}

inline bool String::operator > (const char Str[]) const
{

	if (strcmp(pData, Str) > 0)
		return true;
	else
		return false;
}

inline bool operator > (const char pChar[], const String & Str)
{
	return Str < pChar;
}


inline bool String::operator >= (const String & Str) const
{
	if (strcmp(pData, Str.pData) >= 0)
		return true;
	else
		return false;

}

inline bool String::operator >= (const char Str[]) const
{

	if (strcmp(pData, Str) >= 0)
		return true;
	else
		return false;
}

inline bool operator >= (const char pChar[], const String & Str)
{
	return Str <= pChar;
}


inline bool String::operator <= (const String & Str) const
{
	if (strcmp(pData, Str.pData) <= 0)
		return true;
	else
		return false;

}

inline bool String::operator <= (const char Str[]) const
{

	if (strcmp(pData, Str) <= 0)
		return true;
	else
		return false;
}

inline bool operator <= (const char pChar[], const String & Str)
{
	return Str >= pChar;
}




#endif
