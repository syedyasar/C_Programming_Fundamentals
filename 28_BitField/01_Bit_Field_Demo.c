// Bit  Fields demo program
#include <stdio.h>
struct s1
{
	int  a  :  3;  //  'a'  is  bit  field   of  length  3
	unsigned  b : 4;
	int  c : 5;
	unsigned  d : 6;
};
main()
{
	struct  s1   s = { 3 , 15 , -16 , 0};
	printf(" a : %d \n" , s . a); //  3
	printf(" b : %u \n" , s . b); //  15
	printf(" c : %d \n" , s . c); //  -16
	printf(" d : %u \n" , s . d); // 0
	printf("\n");
	struct  s1   m  = { 4 , 16 , -17 , -1};
	printf(" a : %d \n" , m . a); //  4   is   max value + 1 = min value = -4
	printf(" b : %u \n" , m . b); //  16 is max value + 1 = min value = 0
	printf(" c : %d \n" , m . c); //  -17  is  min value - 1 =  max value = 15
	printf(" d : %u \n" , m . d); // -1  is  min value - 1 = max value = 63
}

/*
1) a , b , c , d  are  bit  fields

2) consider  int   a  :   3;  --->   where  'a'  is  bit  field  of  length 3  i.e. 3 bits

3) First  bit  is  sign  bit  and  remianing  2  bits  are  magnitude  bits

4) sign  bit  is  0    ---->  +ve  magnitude
    sign  bit  is  1    ---->  -ve  magnitude

5) Maximum  value  of   'a'  is  2 ^ 2 - 1 = 3   and
    Minimum   is  -2 ^ 2 = -4
    (power is length of magnitude)

6) Consider  unsigned  b  :  4;  --->  where  'b'  is  bit  field  of  length  4   i.e. 4 bits

7) All  the  4  bits  are  magnitude  bits  and  there  is  no  sign  bit  due  to  unsigned
    Maximum  value  of  'b'  is  2 ^  4 - 1 = 15  and
    minimum  value  is  0
    (-ve values are not allowed  becoz  there  is  no   sign  bit)

8) Range  of  bit  field  'c'  is  -2^4  to  2^4-1 =  -16   to  15

9) Range  of  bit  field  'd'  is  0  to  2 ^ 6 - 1 = 63

Advantage  of  Bit  fields:
------------------------------------------
Memory  wastage  can  be  avoided  by  allocating  exact  size  using   bit-fields.
In  other  words, additional  memory  allocation  can  be  avoided

Eg 1 :  unsigned  gender  :  1;    ---->  Single  bit  is  enough  for  gender  becoz  gender  has  only   2   options
           0 - Female  and  1 - Male
           Hence  don't   declare   char    gender;
           i.e.  Don't  allocate  8  bits  for  gender    becoz    gender  has  2  only  options

Eg 2 :  unsigned    ms  :  2;  --->  2  bits  are  enough  for  marital  status  becoz  ms  has  4  options
           (00 - Bachelor , 01 - Married , 10 - Divorced , 11 - Widowed)
           Hence  don't  declare  int    ms;
           i.e. Don't  allocate   32  bits  for  ms    becoz      ms  has  only  4  options

Eg 3 :  unsigned  month : 4;   --->  4  bits  are  enough  for  month    becoz    there  are  12  months.
           0000  -  January ,  0001  -  Feb , 0010  -  Mar , 0011  -  April , 0100  -  May , 0101  - June ,  0110  - July ,
           0111  - Aug , 1000  - Sep , 1001  - Oct , 1010  - Nov , 1011  - Dec  and  1100 , 1101 , 1110 , 1111  are  unused

Eg 4 :   unsigned  date : 5;    --->  5  bits  are  enough  for  date  becoz    dates  are  1  to  31.
            There  are  2 ^ 5 = 32  combinations  and  last  one  is  left  unused.
*/
