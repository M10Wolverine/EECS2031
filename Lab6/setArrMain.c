/***************************************
* EECS2031Z Lab6 *
* Filename: setArrMain *
* Author: Zhang, Alan *
* Email: alanzhan@my.yorku.ca *
* EECS_username: alanzhan *
* York Student #: 215677214 * 
****************************************/
#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;
       
     int a=0, b=100, c=200,d=300,e=400;
     arr[0] = &a;
     arr[1] = &b;
     arr[2] = &c;
     arr[3] = &d;
     arr[4] = &e;
       
     for(i=0; i<5;i++) 
         printf("arr[%d] -*-> %d\n", i, *arr[i]);  /* should be 0, 100, 200, 300, 400 */

     return 0;
}
