#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel{
    class Board{
        public:
        void post(int row,int col, Direction d,string str);
        string read(int row,int col, Direction d,int size);
        void show();
    };
};
