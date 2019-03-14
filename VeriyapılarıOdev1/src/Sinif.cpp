/**
* @description Dizileri heapbölleğe atama
* @course 1-C
* @assignment 1.ODEV
* @date 30.10.2018
* @author Ali Tüzün ali.tuzun11@gmail.com
*/
#include "Sinif.hpp"

Sinif::Sinif(char p1){
		sinifAdi=p1;
		for(int i=0;i<30;i++){
			ogrenciler[i]=NULL;
		}
	}
			char Sinif::Sinif_Getir(){
			return sinifAdi;
		}