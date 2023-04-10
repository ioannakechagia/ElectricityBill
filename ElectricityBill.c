#include <stdio.h>
#include <stdlib.h>

int main(){
    float sunolikosLogariasmos=0;
    float logariasmosHlektrikou=0;
    float loipaTelh;
    float fpa=1;
    double timimaKatanalosis;
    int sunolikiKatanalosi;
    int posoS; // stroggilopoihmeno poso 
    float enantiReumatos;
    float enan;
    int i, j;
    int sinolikosLogariasmos[10];
    int sum=0; //athroisma sinolikwn logariasmwn (int)
    float mesosOros;
    int sl;
    
    //upologismos sinolikou logariasmou gia ton 10o pelath 
    printf("Eisagete thn sunoliki katanalwsh reumatos se KW gia ton 10o pelath:\t");
    scanf("%d", &sunolikiKatanalosi);
    for(i=0; sunolikiKatanalosi<0; i++){
        printf("\nParakalw eisagete thetiko arithmo: \n");
        scanf("%d", &sunolikiKatanalosi);
    }
    
    printf("\nEisagete to poso ofeilhs tou prohgoumenou logariasmou gia ton 10o pelath:\t");
    scanf("%d", &posoS);
    
    printf("\nEisagete thn axia tou reumatos pou dothike ws enanti sto prohgoumeno logariasmo ston 10o pelath:\t");
    scanf("%f", &enantiReumatos);
    
    printf("\nEisagete to poso enanti tou prohgoumenou logariasmou tou 10ou pelath:\t");
    scanf("%f", &enan);
    
    if(sunolikiKatanalosi>=1 && sunolikiKatanalosi<=820){
      timimaKatanalosis=0.06817*sunolikiKatanalosi;
    }
    else if (sunolikiKatanalosi>=821 &&sunolikiKatanalosi<=1640){
      timimaKatanalosis=820*0.06817+0.08687*(sunolikiKatanalosi-820);
    }
    else if (sunolikiKatanalosi>=1641 && sunolikiKatanalosi<=2050){
      timimaKatanalosis=0.06817*820+0.08687*(1640-820)+0.10662*(sunolikiKatanalosi-1640);
    }
    else if(sunolikiKatanalosi>2050){
      timimaKatanalosis=0.06817*820+0.08687*(1640-820)+0.10662*(2050-1640)+0.14127*(sunolikiKatanalosi-2050);
    }

    logariasmosHlektrikou=timimaKatanalosis+36-posoS-enantiReumatos+3.5; //36EURO pagia xreosi, 3,5EURO telos ananeosimwn pigwn
    fpa=0.08*logariasmosHlektrikou;
    
    loipaTelh=13.10-enan+6.80; //6,80EURO telos akiniths periousias (statheri timi)
    
    sunolikosLogariasmos=logariasmosHlektrikou+loipaTelh+fpa;
    sinolikosLogariasmos[9]=sunolikosLogariasmos+0.5; // +0,5 gia stroggilopoihsh
    
    //pinakas 
    for(i=0; i<9; i++)
    { 
        sunolikiKatanalosi=rand()%(3000);
        posoS=rand()%(100);
        enantiReumatos=rand()%(40);
        enan=rand()%(20);
        
    if(sunolikiKatanalosi>=1 && sunolikiKatanalosi<=820){
      timimaKatanalosis=0.06817*sunolikiKatanalosi;
    }
    else if (sunolikiKatanalosi>=821 &&sunolikiKatanalosi<=1640){
      timimaKatanalosis=820*0.06817+0.08687*(sunolikiKatanalosi-820);
    }
    else if (sunolikiKatanalosi>=1641 && sunolikiKatanalosi<=2050){
      timimaKatanalosis=0.06817*820+0.08687*(1640-820)+0.10662*(sunolikiKatanalosi-1640);
    }
    else if(sunolikiKatanalosi>2050){
      timimaKatanalosis=0.06817*820+0.08687*(1640-820)+0.10662*(2050-1640)+0.14127*(sunolikiKatanalosi-2050);
    }
    
    logariasmosHlektrikou=timimaKatanalosis+36-posoS-enantiReumatos+3.5; //36EURO pagia xreosi, 3,5EURO telos ananeosimwn pigwn
    fpa=0.08*logariasmosHlektrikou;
        
    loipaTelh=13.10-enan+6.80; //6,80EURO telos akiniths periousias (statheri timi)
        
        sunolikosLogariasmos=logariasmosHlektrikou+loipaTelh+fpa;
        sinolikosLogariasmos[i]=sunolikosLogariasmos+0.5; // +0,5 gia stroggilopoihsh
        printf("\n O logariasmos tou %d pelath einai: %d EURO\n", i+1, sinolikosLogariasmos[i]);
    }
    printf("\n O logariasmos tou 10ou pelath einai: %d EURO\n", sinolikosLogariasmos[9]);
    
    //upologismos mesou orou logariasmwn 
    for (i=0; i<10; i++)
    {
        sum+=sinolikosLogariasmos[i];
    }
    
    mesosOros=(float)sum/10;
    
    printf("\n H mesh timh twn logariasmwn twn pelatwn einai: %.2f EURO \n ", mesosOros); //me emfanisi duo dekadikwn
    
    //taxinomisi pinaka
    for(i=1; i<10; i++)
    {       
        for(j=9; j>=i; j=j-1)
        {
            if(sinolikosLogariasmos[j]<sinolikosLogariasmos[j-1])
            {
                sl=sinolikosLogariasmos[j-1];
                sinolikosLogariasmos[j-1]=sinolikosLogariasmos[j];
                sinolikosLogariasmos[j]=sl;
                
            }
        }
    }
    //ektiposi taxinomimenou pinaka
    printf("\n Oi sinolokoi logariasmoi 10 atomwn se auksousa seira einai:");
    for (i=0; i<10; i++)
    {
        printf("\n %d EURO", sinolikosLogariasmos[i]);
    }
    
    
    return 0;
}











