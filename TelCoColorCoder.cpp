/*****************************************************************************************************
Version History
******************************************************************************************************
Revision Number:			User Name:Karthick			Date:24-02-2021
---------------				----------------				--------
$file	: 	TelcoColrCoder.cpp			      
$brief	:       Contains business logic of TelcoColorCoder project and utility functions				      
******************************************************************************************************/
#include "TelCoColorCoder.h"

using namespace TelCoColorCoder;

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int TelCoColorCoder::numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int TelCoColorCoder::numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair::ColorPair(MajorColor major, MinorColor minor) :
	majorColor(major), minorColor(minor)
{}

MajorColor ColorPair::getMajor() {
	return majorColor;
}

MinorColor ColorPair::getMinor() {
	return minorColor;
}
std::string ColorPair::ToString() {
	std::string colorPairStr = MajorColorNames[majorColor];
	colorPairStr += " ";
	colorPairStr += MinorColorNames[minorColor];
	return colorPairStr;
}

ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
	int zeroBasedPairNumber = pairNumber - 1;
	MajorColor majorColor =
		(MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
	MinorColor minorColor =
		(MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
	return ColorPair(majorColor, minorColor);
}
int TelCoColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
	return major * numberOfMinorColors + minor + 1;
}
