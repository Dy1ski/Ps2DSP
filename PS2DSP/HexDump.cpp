#include "HexDump.h"
using namespace std;

bool HexDump::open(const string & aInputFileName)
{
	fInput.open(aInputFileName)
	if(!fInput.good())
	{
		return false;
		cerr << "File has failed to open" << endl;
	}
	else
	{
		return true;
	}
}

void HexDump::close()
{
	HexDump File;
	File.fInput.close();
}

void HexDump::processInput()
{
	// use fdata here
}

bool HexDump::operator()(const string& aInputFileName)
{
	if (aInputFileName.open(fInput))
	{
		// may use fData and the read method to produce standard output
		// have a else statement if the file fails to open or close it
	}
}
