/**
* @description Dizileri heapbölleğe atama
* @course 1-C
* @assignment 1.ODEV
* @date 30.10.2018
* @author Ali Tüzün ali.tuzun11@gmail.com
*/
#include "Okul.hpp"
Okul::Okul(){
				for(int i=0;i<30;i++){
                    sinif[i]=NULL;
                }
			}
            void Okul::Sinif_Ekle(char p1)
            {
                int i=-1;
                do{
                    i++;
                }while(sinif[i]!=NULL);
                sinif[i]=new Sinif(p1);
            }
            void Okul::Ogrenci_Ekle(char p1)
            {
                int i=-1,j=-1;
                do{
                    i++;
                }while(sinif[i]!=NULL);
                i--;
                do{
                    j++;
                }while(sinif[i]->ogrenciler[j]!=NULL);
                sinif[i]->ogrenciler[j]=new Ogrenci(p1);
            }