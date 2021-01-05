#include <stdio.h>
#include <stdlib.h>
typedef enum { T, F } boolean; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int aUni(int ales,int yds,int toefl,float notOrt,int mPuan){
if(ales >=70 || notOrt >=3.0)
{
  	if(yds >=70 || toefl >=220)
	  {
  		if(mPuan >= 60)
		  {
  			return 1;
		  }
	  }
  }
	
}
int bUni(int ales,int yds,int toefl,float notOrt,int mPuan,boolean disiplin){
	if(ales >=50 || notOrt >=3.0)
	{
  	if(yds >=60 || toefl >=180)
	  {
  		if(mPuan >= 70)
		  {
  			if(disiplin == F)
			  {
  					return 1;
			  }
		  }
	  }
  }
	
}
int cUni(int ales,int yds,int toefl,float notOrt,int mPuan){
  if(ales >=40 || notOrt >=2.20)
  {
  	if(yds >=60 || toefl >=250)
	  {
  		if(mPuan >= 80)
		  {
  			return 1;
		  }
	  }
  }

}
int main(int argc, char *argv[]) {
	int ales,yds,toefl,mPuan;
	float notOrt;
	boolean disiplin;
	    printf("ALES puaninizi girin : ");
	scanf("%d",&ales);
		printf("YDS puaninizi girin : ");
	scanf("%d",&yds);
		printf("TOEFL puaninizi girin : ");
	scanf("%d",&toefl);
		printf("Mulakat puaninizi girin : ");
	scanf("%d",&mPuan);
		printf("Not ortalamanizi girin : ");
	scanf("%f",&notOrt);
	    printf("Disiplin cezasi aldinizmi [Evet =0/Hayir =1] : ");
	scanf("%d",&disiplin);
    if(cUni(ales,yds,toefl,notOrt,mPuan) != 1 && bUni(ales,yds,toefl,notOrt,mPuan,disiplin) != 1 && aUni(ales,yds,toefl,notOrt,mPuan) != 1)
        {
		printf("Hic bir universitenin yuksek lisansina giris yapamaz \n");
	}
    if(cUni(ales,yds,toefl,notOrt,mPuan) == 1)
	{
		printf("Ogrenci c universitesi yuksek lisansina girebilir \n");
	}
    if(bUni(ales,yds,toefl,notOrt,mPuan,disiplin) == 1)
	{
		printf("Ogrenci b universitesi yuksek lisansina girebilir \n");
	}
    if(aUni(ales,yds,toefl,notOrt,mPuan) == 1)
	{
		printf("Ogrenci a universitesi yuksek lisansina girebilir \n");
	}
	
	return 0;
}
