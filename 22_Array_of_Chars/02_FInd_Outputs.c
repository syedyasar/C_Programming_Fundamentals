//  Find  outputs
#include  <stdio.h>
main()
{
	char  a[] =  {'R' , 'a' , 'm' , 'a' , ' ' , 'R', 'a' , 'o' , '\0'};  // String  is   represented  char  wise
	printf("%s\n" , a);  //  string   in   array   'a'  ---->  Rama   Rao
	printf("%d\n" , sizeof(a));  // array  size  is  9 * 1 = 9B
}


/*
1) char   a[] = "Hyd";  ---> System  appends  '\0'  becoz  it  is  a  string

2) char  a[] = {'H' , 'y' , 'd' , '\0'};  ---> Programmer  must  append  '\0'   becoz  it  is  array  of  characters

3) char  a[] = {'H' , 'y' , 'd'};
     printf("%s" , a); --->  Hyd<garbage>
*/