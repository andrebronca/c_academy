#include <stdio.h>

/* é criado um sinônimo para o tipo int, a partir disso
pode ser utilizado em todo lugar que o tipo int seria usado. 
*/
typedef int andre;

andre main(){
    andre a = 2;
    printf("Everyone knows that ");
    printf("%d + %d = %d \n", a, a, a + a);

    return 0;
}