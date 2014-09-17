/*
 * https://github.com/Pfju/
 ************************								*/
/* Exercise 2  						                    */
/* Write a program to determine the ranges of char,	    */
/* short, int, and long variables, both signed and 	    */
/* unsigned, by printing appropriate values from stand-	*/
/* and headers and by direct computation. Harder if you */
/* compute them: determine the ranges of the various 	*/
/* floating-point types. 				                */

/*	Libraries and Defines 		*/
#include <stdio.h>
#include <limits.h>
#include <math.h>

#define BASE 2
#define USTART 0

enum datatypes
{
    enChar,
    enShort,
    enInt,
    enLong,
    enUChar,
    enUShort,
    enUInt,
    enULong
};

/*	Prototypes 			*/
void voPrintValueRange(long int minValue, long int maxValue, char *name);
void voPrintMinMaxValue(int datatypes);

/*	main()				*/
int main(){
long res;
voPrintMinMaxValue(enChar);
voPrintValueRange(CHAR_MIN, CHAR_MAX, "CHAR");
voPrintMinMaxValue(enUChar);
voPrintMinMaxValue(enShort);
voPrintValueRange(SHRT_MIN, SHRT_MAX, "SHORT");
voPrintValueRange(USTART, USHRT_MAX, "unsigned_short");
voPrintMinMaxValue(enInt);
voPrintValueRange(INT_MIN, INT_MAX, "INT");
voPrintValueRange(USTART, UINT_MAX, "unsigned_int");
voPrintValueRange(LONG_MIN, LONG_MAX, "LONG");
voPrintValueRange(USTART, ULONG_MAX, "unsigned_long");

return 0;
}

/* Function Definitions */
void voPrintValueRange(long int minValue, long int maxValue, char *name)
{
    printf("%s : %d, %u\n", name, minValue, maxValue);
}

voPrintMinMaxValue(int datatype)
{
    switch (datatype)
    {
    case enInt:
        {
            unsigned int i;
            i = ~0;
            i >>= 1;
            printf("INT MIN: %d\tINT MAX: %u\n", -i-1, i);
            break;
        }
    case enShort:
        {
            unsigned short i;
            i = ~0;
            i >>= 1;
            printf("SHORT MIN: %d\tSHORT MAX: %d\n", -i-1, i);
            break;
        }
    case enChar:
        {
            unsigned char i;
            i = ~0;
            i >>= 1;
            printf("CHAR MIN: %d\tCHAR MAX: %d\n", -i-1, i);
            break;
        }
    case enUChar:
        {
            unsigned char i;
            i = ~0;
            printf("UNSINGNED CHAR MAX: %u\n", i);
        }
    default :
        break;
    }
}

