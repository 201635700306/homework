#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  float a;
	  printf("ÇëÊäÈë³É¼¨:\n");
      scanf("%f",&a ) ;
      if( a>= 90 ) printf("\'A\'\n") ;
      else if ( a>= 80 ) printf ("\'B\'\n") ;
      else if ( a>= 70 ) printf ("\'C\'\n") ;
      else if ( a>= 60 ) printf ("\'D\'\n") ;
      else printf("E\n") ;
	return 0;
}
