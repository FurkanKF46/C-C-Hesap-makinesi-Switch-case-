#include <iostream>
using namespace std;
//FURKAN KOCA 221030910028
int main () {
double sayi1,sayi2,sonuc;
char islem;
cout <<"Yapmak istediginiz islemi yaziniz:"<<endl;
cin >>sayi1>>islem>>sayi2;	
switch(islem) {
case '+':
sonuc = sayi1 + sayi2;
break;	
case '-':
sonuc = sayi1 - sayi2;
break;
case 'x':
sonuc = sayi1 * sayi2;
break;
case '/':
sonuc = sayi1 / sayi2;
break;
default:
cout <<"Yapmak istediginiz islemde bir sorun var lutfen tekrar deneyiniz"<< endl;
break;
}
cout<< "Islem sonucu: "<<sonuc<< endl;
return 0;
}
