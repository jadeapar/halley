#include <stdio.h>
    #define LAST 1986
    int main(){
    int nextseen,year,remainder,sub,add;
    printf("Enter Year:\n");
    scanf("%d",&year);
        if (year<= LAST){
        printf("Input year must be greater than 1986");}
        else{
            sub= year-LAST;
            remainder= sub %76;
            add= 76-remainder ;
            nextseen=add+year;
            printf("Next Appearance: %d\n", nextseen);
}
return 0;
}
