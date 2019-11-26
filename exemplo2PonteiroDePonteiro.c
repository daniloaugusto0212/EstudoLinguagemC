#include <stdio.h>

int main(){
    int a = 10, *b, **c;
    b = &a;
    c = &b;
    printf("a=%d    *b=%d   **c=%d\n", a, *b, **c);
    printf("pos 'a'=%p  pos '*b'=%p  pos '**c=%p    pos '*c'=%p\n",&a,b,**c,*c,c);
    return 0;
}