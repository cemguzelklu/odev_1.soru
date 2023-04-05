#include <stdio.h>
#include <stdlib.h>

char* ipdegis(char* ip){//fonksiyonumuzu olu�turduk.
	static char ip2[16];//yeni ip adresi i�in dizi olu�turduk.
	int j=0;//yeni ip adresinin dizisi i�in indeks tan�mlad�k.
	for(int i=0; i < strlen(ip);i++){//eski ip adresinin t�m indeks de�erlerine ele almak i�in d�ng� olu�turduk.
		if(ip[i]=='.'){//eski ip adresinde '.' ifadesi i�in ko�ul kontrol� yapt�k ve sonu� do�ru ��karsa e�er yeni ip adresinin ayn� indeks de�erine '(.)' de�erini ekledik.
			ip2[j++] = '(';
            ip2[j++] = '.';
            ip2[j++] = ')';
		}else{//ko�ul yanl�� ��karsa yeni ip adresine bir�ey eklemedik ve eskisi gibi devam ettirdik.
			ip2[j++]=ip[i];
		}	
	}
	return ip2;//yeni ip adresimizi d�nd�rd�k.
}

int main(int argc, char *argv[]) {
	char ip[16];//ip adresi tan�mlad�k(eski).
	printf("(IPv4) IP adresini giriniz = ");//kullan�c�dan ip adresi istedik.
	scanf("%s",ip);
	printf("(IPv4) IP Adresinin Degistirilmis Hali = %s\n", ipdegis(ip));//fonksiyonumuzu �a��rmakla birlikte yeni ip adresimizi ekrana yazd�rd�k.
	
	
	return 0;
}
