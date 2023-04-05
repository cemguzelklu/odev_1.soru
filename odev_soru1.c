#include <stdio.h>
#include <stdlib.h>

char* ipdegis(char* ip){//fonksiyonumuzu oluþturduk.
	static char ip2[16];//yeni ip adresi için dizi oluþturduk.
	int j=0;//yeni ip adresinin dizisi için indeks tanýmladýk.
	for(int i=0; i < strlen(ip);i++){//eski ip adresinin tüm indeks deðerlerine ele almak için döngü oluþturduk.
		if(ip[i]=='.'){//eski ip adresinde '.' ifadesi için koþul kontrolü yaptýk ve sonuç doðru çýkarsa eðer yeni ip adresinin ayný indeks deðerine '(.)' deðerini ekledik.
			ip2[j++] = '(';
            ip2[j++] = '.';
            ip2[j++] = ')';
		}else{//koþul yanlýþ çýkarsa yeni ip adresine birþey eklemedik ve eskisi gibi devam ettirdik.
			ip2[j++]=ip[i];
		}	
	}
	return ip2;//yeni ip adresimizi döndürdük.
}

int main(int argc, char *argv[]) {
	char ip[16];//ip adresi tanýmladýk(eski).
	printf("(IPv4) IP adresini giriniz = ");//kullanýcýdan ip adresi istedik.
	scanf("%s",ip);
	printf("(IPv4) IP Adresinin Degistirilmis Hali = %s\n", ipdegis(ip));//fonksiyonumuzu çaðýrmakla birlikte yeni ip adresimizi ekrana yazdýrdýk.
	
	
	return 0;
}
