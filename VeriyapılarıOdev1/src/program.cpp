/**
* @description Dizileri heapbölleğe atama
* @course 1-C
* @assignment 1.ODEV
* @date 30.10.2018
* @author Ali Tüzün ali.tuzun11@gmail.com
*/


#include "Yonetim.hpp"
int main () {
  Yonetim *yonetim=new Yonetim();
  

  while(true){
      int secim=0;
      char sinifscm1,sinifscm2;
      char ogrncscm1,ogrncscm2;
      yonetim->Yazdir();
      cout<< "1. Sinif Degistir"<<endl
			<< "2. Ogrenci Degistir"<<endl
			<< "3. Cikis"<<endl
			<< ">>>";
      cin>> secim;
      if(secim==1){
        cout<<"1.Sinif Adi: ";
        cin>>sinifscm1;
        cout<<"2.Sinif Adi: ";
        cin>>sinifscm2;
        yonetim->Sinif_Degistir(sinifscm1,sinifscm2);
      }
      else if(secim==2){
        cout<<"1.Ogrenci : ";
        cin>>ogrncscm1;
        cout<<"2.Ogrenci : ";
        cin>>ogrncscm2;
        yonetim->Ogrenci_Degistir(ogrncscm1,ogrncscm2);
      }
      else if(secim==3)
          break;

}
}