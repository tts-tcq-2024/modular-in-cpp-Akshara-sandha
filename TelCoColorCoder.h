#ifndef TELCOCOLORCODER_H_
#define TELCOCOLORCODER_H_

#include <iostream>
#include <string>
#include <assert.h>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    std::string ColorPairToString(int pairNumber);

    void testNumberToPair(int pairNumber,
        MajorColor expectedMajor,
        MinorColor expectedMinor);

    void testPairToNumber(
        MajorColor major,
        MinorColor minor,
        int expectedPairNumber);

    void printColorCodingReference();

}

#endif /* TELCOCOLORCODER_H_ */
