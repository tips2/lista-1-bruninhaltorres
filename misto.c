#include <stdio.h>
#include <stdbool.h>
 
bool base_Fatos(bool recheado){
    return recheado = true;
}
 
int main () {
    bool sanduiche = false, presunto = false, queijo = false, recheado = false, saboroso = false, caro = false;
 
    base_Fatos(recheado);
 
    for(int i = 0; i < 10; i++){
        if (recheado && queijo){
            presunto = true;
        } if (recheado && caro){
            sanduiche = true;
        } if (saboroso){
            printf("Saboroso = sim\n");
            break;
        } if(sanduiche && presunto) {
            saboroso = true;
        } if (recheado){
            caro = true;
            queijo = true;
        }  
    }
    if(!saboroso){
        printf("Saboroso = não\n");
    }
    return 0;
}
