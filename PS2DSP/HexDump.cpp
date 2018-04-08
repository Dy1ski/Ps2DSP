#include "HexDump.h"
using namespace std;

bool HexDump::open(const string & aInputFileName)
{
	fInput.open(aInputFileName)
	if(!fInput.good())
	{
		cerr << "File has failed to open" << endl;
		return false;
	}
	else // may not need this
	{
		return true;
	}
}

void HexDump::close()
{
	fInput.close();
}

void HexDump::processInput()
{
	while (fData.size() >= 16)
	{
		cout << setw(8) << setfill('0');
		cout << hex << (int)fInput.tellg() << ": ";
		fData.read(fInput);
		cout << fData;
	}
	
}

bool HexDump::operator()(const string& aInputFileName)
{
	if (!open(aInputFileName))
	{
		return false;
	}

	processInput();
	close();
	return true;
}
