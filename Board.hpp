#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel{
    class Board{
        public:
        void post(unsigned int row,unsigned int col, Direction d,string str);
        string read(unsigned int row,unsigned int col, Direction d,unsigned int size);
        void show();
    };
};
