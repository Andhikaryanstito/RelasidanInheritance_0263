#ifndef IBU_H
#define IBU_H

Class ibu{
    public:
          string nama;
          vektor<anak*> daftar_anak;

          ibu(string pNama): nama(pNama){
            cout<< "Ibu\""<<nama<<"\" ada\n";
          }
          ~ibu(){
            cout <<"Ibu \""<<nama<< "\" tidak ada\n";
            void tambahAnak(anak*);
            void cetakAnak();
          }
};