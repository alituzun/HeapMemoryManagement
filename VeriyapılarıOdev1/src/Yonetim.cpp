/**
* @description Dizileri heapbölleğe atama
* @course 1-C
* @assignment 1.ODEV
* @date 30.10.2018
* @author Ali Tüzün ali.tuzun11@gmail.com
*/
#include "Yonetim.hpp"
Yonetim::Yonetim(){
                okulum=new Okul();
                ifstream myfile ("sinif.txt");
                //Sinif *snf=new Sinif();
                string line;
                
                if (myfile.is_open())
                {
                    while ( getline (myfile,line) )
                    {
                        //cout<<"Sinif:"<<line[0]<<endl;
                        okulum->Sinif_Ekle(line[0]);
                        for(int i=2;i<line.length();i=i+2){
                            //cout<<line[i];
                        okulum->Ogrenci_Ekle(line[i]);
                        }
                    }
                    myfile.close();	
                }
			}
            void Yonetim::Sinif_Degistir(char p1,char p2)
            {
                int secim1=0,secim2=0;
                for(int i=0;okulum->sinif[i]!=NULL;i++)
                {
                    if( okulum->sinif[i]->Sinif_Getir()==p1)secim1=i;
                    if( okulum->sinif[i]->Sinif_Getir()==p2)secim2=i;
                }
                Sinif* temp=okulum->sinif[secim1];
                okulum->sinif[secim1]=okulum->sinif[secim2];
                okulum->sinif[secim2]=temp;
            }
            void Yonetim::Ogrenci_Degistir(char p1,char p2)
            {
                int secim1=0,secim2=0,secim3=0,secim4=0;
                for(int i=0;okulum->sinif[i]!=NULL;i++)
                {
                    for(int j=0;okulum->sinif[i]->ogrenciler[j]!=NULL;j++)
                    {
                        if( okulum->sinif[i]->ogrenciler[j]->Ogrenci_Getir()==p1)
                        {
                            secim1=i;
                            secim2=j;
                        }
                        if( okulum->sinif[i]->ogrenciler[j]->Ogrenci_Getir()==p2){
                            secim3=i;
                            secim4=j;
                        }
                    }
                }
                Ogrenci* temp=okulum->sinif[secim1]->ogrenciler[secim2];
                okulum->sinif[secim1]->ogrenciler[secim2]=okulum->sinif[secim3]->ogrenciler[secim4];
                okulum->sinif[secim3]->ogrenciler[secim4]=temp;
            }
            void Yonetim::Yazdir()
            {
                for(int i=0;okulum->sinif[i]!=NULL;i++)
                {
                    cout<<"Sinif "<<okulum->sinif[i]->Sinif_Getir()<<endl;
                    for(int j=0;okulum->sinif[i]->ogrenciler[j]!=NULL;j++)
                    {
                        cout<<okulum->sinif[i]->ogrenciler[j]->Ogrenci_Getir()<<"("<<okulum->sinif[i]->ogrenciler[j]<<")"<<endl;
                    }
                }
            }