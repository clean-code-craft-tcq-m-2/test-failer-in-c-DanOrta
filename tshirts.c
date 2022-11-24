#include "tshirts.h"

char size(int cms)
{
    char sizeName = '\0';

    // 1. If the person is too large (over 100), then that person doesn't exist
    // 2. If the person is too small (less than 15), then that person doesn't exist
    if ((cms > 100) || (cms <= 15))
    {
        /* If you enter here, someone is either trolling or the dimensions are not the expected 
        ones from a "regular" human */
        return -1;
    }
    else if(cms <= 38)
    {
        sizeName = 'S';
    }
    else if(cms > 38 && cms <= 42)
    {
        sizeName = 'M';
    }
    else if(cms > 42)
    {
        sizeName = 'L';
    }

    return sizeName;
}
