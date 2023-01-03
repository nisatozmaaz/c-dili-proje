#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
		
	int secenek;
	printf("\n***********************************MERHABA,HOSGELDINIZ************************************\n\n");
	Giris_Metni();
	printf("\n\n");
	
	int i=0;
	int k=1;
	while(1)
{	
	printf("Menu seceneklerimiz asagidaki gibidir.\n");
	printf("1.Kahve cesitleri: \n");
	printf("2.Cay cesitleri: \n");
	printf("3.Tatli cesitleri: \n");
	printf("4.Pasta cesitleri: \n");


   	printf("\nLutfen bir secenek seciniz:");
	scanf("%d",&secenek);
   
   	switch(secenek)
   	{
   		case 1:
   			printf("Kahve Cesitleri Sunlardir: \n");
   		    Kahve_Turu();
   			break;
   		case 2:
		    printf("Cay Cesitleri Sunlardir: \n");
		    Cay_Turu();
   			break;
   		case 3:
		   	printf("Tatli Cesitleri Sunlardir: \n");
		   	Tatli_Turu();
   			break;	
   		case 4:
		   	printf("Pasta Cesitleri Sunlardir: \n");
		   	Pasta_Turu();
   			break;
				default:
			    printf("Gecersiz islem girdiniz!!Tekrar deneyiniz.\n\n");
	                	printf("Menu seceneklerimiz asagidaki gibidir.\n");
                       	printf("1.Kahve cesitleri: \n");
                     	printf("2.Cay cesitleri: \n");
                     	printf("3.Tatli cesitleri: \n");
                       	printf("4.Pasta cesitleri: \n");
                           		printf("\Lutfen bir secenek seciniz:");
	                            scanf("%d",&secenek);
			   break;
		    
}

    printf("Siparisiniz basariyla alinmistir.\n\n");
	printf("Devam etmek icin 1 e cikmak icin 0 a basiniz: ");
	scanf("%d",&i);

    if(i==0)
    {
    	break;
	}
	else if (i==1)
	{
		k++;
		continue;
	}

}

	return 0;
}



int Kahve_Turu()
{
		int kahveturu;
	    int l;
		    printf("1-Filtre Kahve\n");
		    printf("2-Americano\n");
		    printf("3-Espresso\n");
		    printf("4-Mocha\n");
		    printf("5-Turk Kahvesi\n");
		    printf("6-Latte\n");
		    
		    printf("Lutfen kahve turu seciniz: ");
		    scanf("%d",&kahveturu);	 
		
	return kahveturu;		
}


int Cay_Turu()
{
	   int cayturu;
	   		printf("1-Soguk Cay\n");
		    printf("2-Papatya Cayi\n");
		    printf("3-Ihlamur\n");
		    printf("4-Ada Cayi\n");
		    printf("5-Yesil Cay\n");
		    
		    printf("Lutfen cay turu seciniz: ");
		    scanf("%d",&cayturu);	

    return cayturu;
}


int Tatli_Turu()
{
	    int tatlituru;
	        printf("1-Baklava\n");
	   		printf("2-Kunefe\n");
	   		printf("3-Sutlac\n");
	   		printf("4-Revani\n");
	   		printf("5-Muhallebi\n");
	   		
	   		printf("Lutfen tatli turu seciniz: ");
		    scanf("%d",&tatlituru);	

    return tatlituru;
}    


int Pasta_Turu()
{
	   int pastaturu;
	   	    printf("1-Cilekli Pasta\n");
	        printf("2-Dondurmali Pasta\n");
	        printf("3-Cikolatali Pasta\n");
	        printf("4-Mozaik Pasta\n");
	        printf("5-Meyveli Pasta\n");
	        
	        printf("Lutfen pasta turu seciniz: ");
		    scanf("%d",&pastaturu);	

    return pastaturu;	   
}


int Giris_Metni()
{

       char ad[40];
	   char soyad[40];
          printf("Adinizi giriniz:");
          gets(ad);
         
          printf("Soyadinizi giriniz:");
          gets(soyad);          
          
           printf("Hosgeldin  %s %s",ad,soyad);
}








