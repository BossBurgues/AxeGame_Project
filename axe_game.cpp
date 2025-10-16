#include "raylib.h"
int main() 
{
    
    bool equal{4 == 9};
    /*Returns false because 4 is not equal to 9*/
    bool notEqual{4 != 9};
    /*Returns true becouse 4 is not equal to 9*/
    bool lessThan{4 < 9};
    /*Returns true because 4 is less than 9*/
    bool greaterThan{4 > 9};
    /*Returns false because 4 is not greater than 9*/
    bool lessThanOrEqual{4 <= 9};
    /*Returns true because 4 is less than or equal to 9*/
    bool greaterThanOrEqual{4 >= 9};
    /*Returns false because 4 is not greater than or equal to 9*/

    int width;
    width = 350;
    InitWindow(width, 600, "Axe Game");

}