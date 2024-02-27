// Her bir tuş için geri döndürülecek sayısal sabitler tanımlanıyor.

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5
int okunan=0;

// Tuş oku Fonksiyonu
int tus_oku ()
{
okunan=analogRead(0);
if (okunan > 1000) return yok;
if (okunan <50) return sag;
if (okunan < 195) return ust;
if (okunan <380) return alt;
if (okunan < 555) return sol;
if (okunan < 790) return secim;
return yok;
}
