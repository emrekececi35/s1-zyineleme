
#include<stdio.h>
int index, esyaSayisi, fiyat[20], miktar[20], cantaHacmi;
int en_yuksek(int x,int y){
	if(x>y)
	return x;
	else 
	return y;
}
int yerlestir(int esyaSayisi,int cantaHacmi){
	int esya1,esya2,enyuksek;
	if(cantaHacmi==0||esyaSayisi==0)
		return 0;
	else if(miktar[esyaSayisi]>cantaHacmi)
			return yerlestir(esyaSayisi-1,cantaHacmi);
	else{
		esya1=yerlestir(esyaSayisi-1,cantaHacmi);
		esya2=fiyat[esyaSayisi]+yerlestir(esyaSayisi-1,cantaHacmi-miktar[esyaSayisi]);
		enyuksek=en_yuksek(esya1,esya2);
		return enyuksek;
		
	}
				
	
}


int main()
{
    

    printf("Girilecek e�ya say�s�:");
    scanf("%d", &esyaSayisi);

    printf("E�yalar�n fiyat ve niktar�n� giriniz:\n");
    for(index = 0;index < esyaSayisi; ++index){
        printf("%d.E�yay� giriniz\n",index);
        scanf("%d%d", &fiyat[index], &miktar[index]);
    }

    printf("�anta Hacmini Giriniz:");
    scanf("%d", &cantaHacmi);
	
	
    printf("%d",yerlestir(esyaSayisi,cantaHacmi));
    return 0;
}
