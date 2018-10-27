
#include "bh.h"
#include <algorithm>
int main()
{
    binaryHeap h;
    for (int i = 0; i < 10; i++)
    {
        h.push(i);
        h.print();
    }
     return 0;
}
