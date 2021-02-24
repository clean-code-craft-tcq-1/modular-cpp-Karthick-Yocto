#include "TelCoColorCoder.h"
#include<assert.h>

void testNumberToPair(int pairNumber,TelCoColorCoder::MajorColor expectedMajor,TelCoColorCoder::MinorColor expectedMinor)
{
	TelCoColorCoder::ColorPair colorPair =TelCoColorCoder::GetColorFromPairNumber(pairNumber);
	std::cout << "Got pair " << colorPair.ToString() << std::endl;
	assert(colorPair.getMajor() == expectedMajor);
	assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(TelCoColorCoder::MajorColor major,TelCoColorCoder::MinorColor minor,int expectedPairNumber)
{
	int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
	std::cout << "Got pair number " << pairNumber << std::endl;
	assert(pairNumber == expectedPairNumber);
}
void printPairColorCode()
{
	int totalColorPairCount = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
	for (int pairNumber = 1 ; pairNumber <= totalColorPairCount ; ++ pairNumber )
	{
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
		std::cout<< pairNumber << " \t   | \t "<< colorPair.ToString() << std::endl ;
	}
}

int main() {
	testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
	testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

	testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
	testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

	return 0;
}
