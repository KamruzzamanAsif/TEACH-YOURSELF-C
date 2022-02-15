#include <stdio.h>
#include <string.h>
int main ()
{
    char *o="one", *t="two", *thr="three" ;
    
    printf("%s %s %s\n", o,t,thr);
    printf("%s %s %s\n", o,thr,t);
    printf("%s %s %s\n", t,thr,o);
    printf("%s %s %s\n", t,o,thr);
    printf("%s %s %s\n", thr,o,t);
    printf("%s %s %s\n", thr,t,o);

}