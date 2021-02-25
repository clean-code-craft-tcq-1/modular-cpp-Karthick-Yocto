/*****************************************************************************************************
Version History
******************************************************************************************************
Revision Number:			User Name:Karthick			Date:24-02-2021
---------------				----------------				--------
$file	: 	TelcoColrCoder.h			      
$brief	:       Contains skeleton of TelcoColorCoder project and utility functions				      

******************************************************************************************************/
#ifndef TELCOCOLORCODER
#define TELCOCOLORCODER

#include<iostream>
#include<string>

namespace TelCoColorCoder
{
	enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

	extern int numberOfMajorColors;
	extern int numberOfMinorColors; 


	class ColorPair {
	private:
		MajorColor majorColor;
		MinorColor minorColor;
	public:
		ColorPair(MajorColor major, MinorColor minor);

		MajorColor getMajor();
		MinorColor getMinor();
		std::string ToString();
	};
	ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif /*End of TELCOCOLORCODER */
