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
	aIStream.read((char*)fBuffer, 16);
	fSize = aIStream.gcount();
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
		int lineGaps = 51;
		if (i == 8)
		{
			aOstream << "|";
			lineGaps -= -2
		}
			aOStream << setw(2) << setfill('0');
			aOstream << uppercase << hex << int(aObject.fBuffer[i]) << " ";
			lineGaps -= 3;
	}
	string LineASCII;

		for (int j = 0; j < aObject.fSize; j++)
		{
			lineASCII += aObject.fBuffer[j];
		}
			for (int k = 0; k < LineASCII.length(); k++)
			{
				if (int(lineASCII[k]) < 33)
				{
					lineASCII[k] = ".";
				}
			}
			aOStream << lineASCII << endl;
			return aOStream;
}
