#include <iostream>
/*
void titi ()
{
	Toto obj;
   obj.i = 42;
   int *ptr = &obj.i;
   obj.j = 666;

   int *array_int[2];
   array_int[0] = &obj.i;
   array_int[1] = &obj.j;

   for (int a = 0; a < 2; ++a) {
   	if (*array_int[a] == 666)
   		*array_int[a] = 999;
   }

    // ici tu crée un ptr fun
    void (Toto::*ptrfun)(std::string string);
    ptrfun = &Toto::test;

   // ici tu appelle ptrfun et il doit faire
    //  Toto.test("hhelo")
   (obj.*ptrfun)("Hello");
   *ptr = 24;
   std::cout << obj.i << std::endl;
   std::cout << obj.j << std::endl;
   std::cout << *array_int[0]<< std::endl;
   std::cout << *array_int[1] << std::endl;

}
*/
struct Toto 
{
    void test(int i) {std::cout << i*2 <<std::endl;}
    void titi(int i) {std::cout << i+2 <<std::endl;}
    int i;
    int j;
};

struct Twat
{
	void(Toto::*ptrfun)(int i);
	int nb;
};

int main()
{
   Toto obj;
   Twat pouet;
   pouet.nb = 22;
   pouet.ptrfun = &Toto::test;
   ((obj).*(pouet.ptrfun))(pouet.nb);
   int array_int[] = {3, 12, 13, 19};
   /*
   void (Toto::*array_ptr[])(int i) = 
   {
   		&Toto::test,
   		&Toto::titi
   };

   
  	for (int i = 0; i < 4; ++i) {
   		if (array_int[i]%2 == 0)
   			(obj.*array_ptr[0])(array_int[i]);
   		else
   			(obj.*array_ptr[1])(array_int[i]);
   }
	*/

   return 0;

}
