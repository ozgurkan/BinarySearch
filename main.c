#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[11]={10,15,20,25,30,35,40,45,50,55,60};
    int i,x;

    for(i=0;i<11;i++){
        printf("%d  ",dizi[i]);
    }
    printf("\n Aranacak Sayisi giriniz:");
    scanf("%d",&x);


    int ib,is,ic,Adim=0;

    ib=0;
    is=11;
    ic=(ib+is)/2;

    while(ib<=is && x!=dizi[ic]){

        if(x>dizi[ic]){
            ib=ic+1;
        }
        else{
            is=ic-1;
        }

        ic=(ib+is)/2;
        Adim++;
    }

    printf("indis=%d  bulunan adim sayisi=%d",ic,Adim);





    return 0;
}
