#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*  UwU   */
int main(){
    const char *dec_1 = R"""(

#include <stdio.h>
int main(void){

unsigned int c[] =  {)""";

    const char *dec_2 = R"""(};
int lenght = )""";



    const char *dec_3 = R"""(;
char j[lenght];
for(int i=0;i<=lenght;++i){
    j [i]= c[i]^0x81;	
}
printf(j);

}
)""";
    

    
    const char *banner = R"""(
  _______________________
< github.com/1rayko/cbruh >
  -----------------------
         \   ^__^ 
          \  (oo)\_______
             (__)\       )\/\
                 ||----w |
                 ||     ||
    
)""";
    printf(banner);
    char str[256];
    printf("Type string: ");
    scanf("%[^\n]",str);


    char* b = malloc(strlen(str));
    printf(dec_1);

    for (int i=0;i<=strlen(str);++i){
        unsigned int b = str[i]^0x81;

        if (i == strlen(str)){
            printf( "0x%x\n",b );
        }
        else{
            printf( "0x%x,",b );
        }

    }
    printf(dec_2);

    printf("%d",strlen(str));

    printf (dec_3);

    return 0;

}
