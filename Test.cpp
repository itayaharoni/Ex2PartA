/**
 * AUTHOR: <Itay Aharoni>
 * 
 * Date: 2021-03-10 02:29:04
 */

#include "doctest.h"
#include "Board.hpp"
using namespace ariel;
#include <string>
using namespace std;

Board b;
TEST_CASE("Testing post/read functions:") {
    b.post(1,1,Direction::Horizontal,"Hello");
    b.post(1,1,Direction::Vertical,"Hello");
    CHECK("Hello"==b.read(1,1,Direction::Horizontal,5));
    CHECK("Hello"==b.read(1,1,Direction::Vertical,5));
    CHECK("Hello_"==b.read(1,1,Direction::Vertical,6));
    CHECK("H"==b.read(1,1,Direction::Vertical,1));
    CHECK("llo"==b.read(3,1,Direction::Vertical,3));
    CHECK("llo_"==b.read(3,1,Direction::Vertical,4));
    CHECK("_____"==b.read(1,6,Direction::Vertical,5));
    CHECK("l"==b.read(3,1,Direction::Vertical,1));
    CHECK("l"==b.read(1,3,Direction::Vertical,1));
    CHECK("l"==b.read(1,4,Direction::Vertical,1));
    CHECK("l"==b.read(4,1,Direction::Vertical,1));
    b.post(1,1,Direction::Vertical,"HelloHello");
    b.post(1,1,Direction::Horizontal,"HelloHello");
    CHECK("Hello"==b.read(6,1,Direction::Vertical,5));
    CHECK("Hello"==b.read(1,6,Direction::Horizontal,5));
    CHECK("e_"==b.read(2,1,Direction::Horizontal,2));
    CHECK("_"==b.read(2,2,Direction::Horizontal,1));
    CHECK("H"==b.read(1,1,Direction::Vertical,1));
    b.post(1,1,Direction::Vertical,"P");
    CHECK("Pello"==b.read(1,1,Direction::Vertical,5));
    CHECK("Pello"==b.read(1,1,Direction::Horizontal,5));
    CHECK("PelloHello"==b.read(1,1,Direction::Vertical,10));
    CHECK("PelloHello"==b.read(1,1,Direction::Horizontal,10));
}

