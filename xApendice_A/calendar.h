// CALENDAR.H
// Cabecalho para controle de calendario

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

template <typename NovoTipo, typename TipoAntigo>
NovoTipo converte(TipoAntigo base)
{
  return static_cast<NovoTipo>(base);
}

// Funcionalidades operacionais
bool dataValidaFormato(const std::string &data)
{
  if (data.length() != 10)
    return false;

  if (data[2] != '/' or data[5] != '/')
    return false;

  for (size_t i = 0; i <= 9; i++) {
    if (i == 2 or i == 5)
      continue;
    if (not std::isdigit(data[i]))
      return false;
  }

  return true;
}

uint16_t pegaDia(std::string dt)
{
  return std::stoi(dt.substr(0, 2));
}

uint16_t pegaMes(std::string dt)
{
  return std::stoi(dt.substr(3, 2));
}

uint16_t pegaAno(std::string dt)
{
  return std::stoi(dt.substr(6, 4));
}

bool anoBissexto(std::string dt)
{
  uint16_t ano {pegaAno(dt)};

  return
  (
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

uint16_t ultimoDiaNoMes(std::string dt)
{
  uint16_t mes {pegaMes(dt)};

  if (mes == 2)
    return (anoBissexto(dt)) ? 29 : 28;

  if (mes == 4 or mes == 6 or mes == 9 or mes == 11)
    return 30;

  return 31;
}

bool validaData(std::string dt)
{
  uint16_t dia {pegaDia(dt)};
  uint16_t mes {pegaMes(dt)};
  uint16_t ano {pegaAno(dt)};

  return (ano >=    1) and
         (ano <= 9999) and
         (mes >=    1) and
         (mes <=   12) and
         (dia >=    1) and
         (dia <= ultimoDiaNoMes(dt)) and
          not ((ano == 1582) and
               (mes ==   10) and
               (dia >=    5) and
               (dia <=   14));
}

uint64_t dataANSI(std::string dt)
{
  std::string data;
  data.reserve(11);

  for (char caractere : dt)
    if (std::isdigit(caractere))
      data.push_back(caractere);

  data = data.substr(4, 4) +
         data.substr(2, 2) +
         data.substr(0, 2);

  return std::stoul(data);
}

uint64_t dataParaJuliano(std::string dt)
{
  float a, b, c, d, e;
  uint64_t j;

  uint16_t dia {pegaDia(dt)};
  uint16_t mes {pegaMes(dt)};
  uint16_t ano {pegaAno(dt)};
  uint64_t data {dataANSI(dt)};

  if (mes < 3)
    {
      ano = ano - 1;
      mes = mes + 12;
    }

  if (data >= 15821015) // 15/10/1582
    {
      a = converte<uint64_t>(ano / 100);
      b = converte<uint64_t>(a / 4);
      c = 2 - a + b;
    }
  if (data <= 15821004) // 04/10/1582
    c = 0;

  d = converte<uint64_t>(365.25 * (ano + 4716));
  e = converte<uint64_t>(30.6001 * (mes + 1));
  j = converte<uint64_t>(d + e + dia + 0.5 + c - 1524.5);

  return j;
}

std::string julianoParaData(uint64_t dj)
{
  char buffer[11];
  float a, d, e, f, g, h, i, j, k, l, m;

  a = converte<float>(dj);

  if (a < converte<float>(2299161))
    d = a;

  if (a > converte<float>(2299160))
    {
      e = converte<uint64_t>((a - 1867216.25) / 36524.25);
      d = a + 1 + e - converte<uint64_t>(e / 4);
    }

  f = d + 1524;
  g = converte<uint64_t>((f - 122.1) / 365.25);
  h = converte<uint64_t>(g * 365.25);
  i = converte<uint64_t>((f - h) / 30.6001);
  j = f - h - converte<uint64_t>(i * 30.6001);

  if (i < 14)
    k = i - 1;

  if (i > 13)
    k = i - 13;

  if (k > 2)
    l = g - 4716;

  if (k < 3)
    l = g - 4715;

  if (l > 0)
    m = l;

  if (l < 1)
    m = l * (-1) + 1;

  snprintf(buffer, 11, "%02.f/%02.f/%04.f", j, k, m);

  return std::string(buffer);
}

uint16_t diaDaSemana(std::string dt)
{
  return converte<uint16_t>((dataParaJuliano(dt) + 2) % 7);
}

std::string diaDaSemanaPorExtenso(std::string dt, 
                                  std::string idioma)
{
  uint16_t ds = diaDaSemana(dt) - 1;
  std::string diaDaSemana;

  std::string diasSemanaPt[] = {
    "Domingo",
    "Segunda-feira",
    "Terca-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sabado"
  };

  std::string diasSemanaEs[] = {
    "Domingo",
    "Lunes",
    "Martes",
    "Miercoles",
    "Jueves",
    "Viernes",
    "Sabado"
  };

  std::string diasSemanaEn[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  };

  if (ds < 0 or ds > 6)
    return "Data invalida";
  if (idioma == "pt")
    return diasSemanaPt[ds];
  if (idioma == "es")
    return diasSemanaEs[ds];
  if (idioma == "en")
    return diasSemanaEn[ds];

  return "Idioma nao suportado";
}
