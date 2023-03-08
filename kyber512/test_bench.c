#include<stdio.h>

int crypto_kem_dec(unsigned char *ss,
                   const unsigned char *ct,
                   const unsigned char *sk);

                
int main(){
    unsigned char *ss = (char *)malloc(100*sizeof(char));
    const unsigned char *ct = "adwaith";
    const unsigned char *sk = "adwaiht";
    crypto_kem_dec(ss,ct, sk);
    return 0;
}