#include "HexDump.h"
using namespace std;

bool HexDump::open(const string & aInputFileName)
{
	return false;
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

}