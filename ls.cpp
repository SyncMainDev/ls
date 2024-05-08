#include "stdlib.h"
#include <string>

void main(int argc, char *argv[])
{
    std::string newargs("DIR");
    // Starting idx 1 to skip 'ls'
    for(int idx = 1; idx < argc; ++idx)
        {
        newargs.append(" ");
        newargs.append(argv[idx]);
        }
    system(newargs.c_str());
}
