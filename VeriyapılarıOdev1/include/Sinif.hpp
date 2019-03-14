#ifndef SINIF_HPP
#define SINIF_HPP

#include "Ogrenci.hpp"

class Sinif{
	private:
			char sinifAdi;
	public:
			Ogrenci *ogrenciler[30];
			Sinif(char p1);
			char Sinif_Getir();
};
#endif