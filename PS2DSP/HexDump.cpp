#include "HexDump.h"
using namespace std;

bool HexDump::open(const string & aInputFileName)
{
	if(aInputFileName)
}

void HexDump::close()
{
	HexDump File;
	File.fInput.close();
}

void HexDump::processInput()
{

}

bool HexDump::operator()(const string& aInputFileName)
{
	if (aInputFileName.open(fInput))
	{
		// may use fData and the read method to produce standard output
	}
}
