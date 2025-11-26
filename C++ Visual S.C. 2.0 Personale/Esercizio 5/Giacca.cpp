#include <iostream>
#include "GiaccheAVento.h"

GiaccheAVento::GiaccheAVento(){
  taglia = 50;
  percentualeChiusura = 100;
}

void GiaccheAVento::apri(int a){
  if(percentualeChiusura - a>=0 && percentualeChiusura - a<=100){
    percentualeChiusura = percentualeChiusura - a;
  }
}

void GiaccheAVento::chiudi(int a){
  if(percentualeChiusura + a>=0 && percentualeChiusura + a<=100){
    percentualeChiusura = percentualeChiusura + a;
  }
}

void GiaccheAVento::apriTotalmente(){
  percentualeChiusura = 0;
}

void GiaccheAVento::chiudiTotalmente(){
  percentualeChiusura = 100;
}

void GiaccheAVento::setTaglia(int t){
  if(t <= 60 && t >= 30)
    taglia =  t;
}

int GiaccheAVento::getTaglia(){
  return taglia;
}

int GiaccheAVento::getPercentualeChiusura(){
  return percentualeChiusura;
}


