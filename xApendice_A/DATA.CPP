// DATA.CPP
// Codigo para controle de datas

#include <iostream>
#include "data.h"

Data::Data() : dia(0), mes(0), ano(0), dataOk(false) {}

bool Data::anoBissexto() const {
  return
  (
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

char Data::ultimoDiaNoMes(void) const {
  if (mes == static_cast<uint16_t>(Mes::FEVEREIRO))
    return (anoBissexto()) ? 29 : 28;
  else if (mes <= static_cast<uint16_t>(Mes::JULHO))
    return (mes % 2 != 0) ? 31 : 30;
  else
    return (mes % 2 != 0) ? 30 : 31;
}

void Data::validaData(void) {
  dataOk = (ano >=    1) and
           (ano <= 9999) and
           (mes >=    1) and
           (mes <=   12) and
           (dia >=    1) and
           (dia <= ultimoDiaNoMes()) and
      not ((ano == 1582) and
           (mes ==   10) and
           (dia >=    5) and
           (dia <=   14));
}

void Data::alteraData(uint16_t dia, uint16_t mes, uint16_t ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
  validaData();
}

void Data::mostraData(void) const {
  if (dataOk == true)
    {
      std::cout.fill('0');
      std::cout.width(2); std::cout << dia << '/';
      std::cout.width(2); std::cout << mes << '/';
      std::cout.width(4); std::cout << ano << std::endl;
    }
  else
    std::cout << "**/**/****" << std::endl;
}
