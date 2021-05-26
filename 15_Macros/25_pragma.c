// #pragma  demo  program
#include <stdio.h>
void   f1();  // Function  prototypes  are  necessary   before  using  function names  in  #pragma
void   f2();
#pragma  startup  f1 // f1   function  is  executed  before  execution  of  main   due  to  startup
#pragma  exit        f2 // f2   function  is  executed  after main  function  terminates    due  to   exit
main()
{
	printf("main function\n");
}
void  f1()
{
	printf("f1 function\n");
}
void f2()
{
	printf("f2 function\n");
}

/*
#pragma
---------------
1)  #pragma  startup  f1  ---->   f1  function  is  automatically  executed  before  main  function  is  executed

2)  #pragma  exit  f2 ---> f2  function  is  automatically  executed  after  main  function  terminates

3)  f1  function  Opens  file, database  connection, network  connection and  so  on

4)  main  function  reads  from  the  file ,  write  to  the  file, access  database and  so  on

5)  f2  function  closes  file , data  base  connection , network  connection and  so  on

6)  Functions  are  executed  in  the  order  f1 , main  and  f2
     
7) Execution  starts  at  f1  function  and  terminates  at  f2  function.  main  is  an  intermediate    function

8) Function  prototype  is  necessary  before  using  function  name  in    #pragma.
    i.e. f1  and  f2  prototypes  are   required    before  #pragma

Note:
#pragma is not supported by  gcc compiler.  Use   Turbo C  for  #pragma


*/