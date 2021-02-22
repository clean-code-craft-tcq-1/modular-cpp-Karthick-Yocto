#include "TelCoColorCoder.h"

int main() {
    ColorPair  obj;
    obj.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    obj.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    obj.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    obj.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
