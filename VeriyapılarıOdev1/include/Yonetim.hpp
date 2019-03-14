#ifndef YONETIM_HPP
#define YONETIM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Okul.hpp"

using namespace std;
class Yonetim{
    private:
    Okul *okulum;
	public:
			Yonetim();
            void Sinif_Degistir(char p1,char p2);
            void Ogrenci_Degistir(char p1,char p2);
            void Yazdir();
};
#endif