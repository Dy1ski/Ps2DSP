#include <istream>
#include <ostream>
#include "HexBlock.h"
using namespace std;

HexBlock::HexBlock()
{
	for (int i = 0; i < 16; i++)
	{
		fBuffer[i] = 0;
	}
	fSize = 16;
}

istream & HexBlock::read(istream & aIStream)
{
	// May need this
	fSize = aIStream.gcount();
	// for loop may be needed her to read up to 16 characters into the buffer
	for (int i = 0; i < fSize; i++)
	{
		aIStream >> aIStream.fBuffer[i];
		// do i need a counter here to record the numbver of characters read in size
		// maybe aIStream.size++
	}
	return aIStream;
}

unsigned long HexBlock::size() const
{
	return fSize;
}

ostream & operator<<(std::ostream & aOStream, const HexBlock & aObject)
{
	// make a for loop that goes through the buffer then out put it to aOStream
	for (int i = 0; i < aObject.fSize; i++)
	{
		aOStream << (unsigned char)i << ":\t"  << aObject.fBuffer[i] << endl; // this is probs wrong
		/* something might need to go beforwe the unsigned char*/
	}
	return aOStream;
}

/* Need to put in a (char)i something in this somewhere
Like lab 2
*/
