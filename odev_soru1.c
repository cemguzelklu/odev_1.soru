#include <stdio.h>
#include <stdlib.h>

char* ipdegis(char* ip){//fonksiyonumuzu oluşturduk.
	static char ip2[16];//yeni ip adresi için dizi oluşturduk.
	int j=0;//yeni ip adresinin dizisi için indeks tanımladık.
	for(int i=0; i < strlen(ip);i++){//eski ip adresinin tüm indeks değerlerine ele almak için döngü oluşturduk.
		if(ip[i]=='.'){//eski ip adresinde '.' ifadesi için koşul kontrolü yaptık ve sonuç doğru çıkarsa eğer yeni ip adresinin aynı indeks değerine '(.)' değerini ekledik.
			ip2[j++] = '(';
                        ip2[j++] = '.';
                        ip2[j++] = ')';
		}else{//koşul yanlış çıkarsa yeni ip adresine birşey eklemedik ve eskisi gibi devam ettirdik.
			ip2[j++]=ip[i];
		}	
	}
	return ip2;//yeni ip adresimizi döndürdük.
}

int main(int argc, char *argv[]) {
	char ip[16];//ip adresi tanımladık(eski).
	printf("(IPv4) IP adresini giriniz = ");//kullanıcıdan ip adresi istedik.
	scanf("%s",ip);
	printf("(IPv4) IP Adresinin Degistirilmis Hali = %s\n", ipdegis(ip));//fonksiyonumuzu çağırmakla birlikte yeni ip adresimizi ekrana yazdırdık.
	
	
	return 0;
}
