// DATA.H
// Cabecalho para controle de datas

#pragma once

class Data {
  private:
    uint16_t dia, mes, ano;
    bool dataOk;

  public:
    enum class Mes { FEVEREIRO = 2, JULHO = 7 };

    bool anoBissexto() const;
    char ultimoDiaNoMes() const;
    void validaData();
    void alteraData(uint16_t d, uint16_t m, uint16_t a);
    void mostraData() const;
    Data();
};
