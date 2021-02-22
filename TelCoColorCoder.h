#include<iostream>
#include<string>
using namespace std;
void testNumberToPair(int pairNumber,TelCoColorCoder::MajorColor expectedMajor,TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber(TelCoColorCoder::MajorColor major,TelCoColorCoder::MinorColor minor,int expectedPairNumber);
namespace TelCoColorCoder
{
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
			ColorPair GetColorFromPairNumber(int pairNumber);
			
    };
}
