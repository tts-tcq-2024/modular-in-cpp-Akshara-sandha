#include "TelCoColorCoder.h"

int main() {
    TelCoColorCoder::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelCoColorCoder::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelCoColorCoder::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelCoColorCoder::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    TelCoColorCoder::printColorCodingReference();

    return 0;
}
