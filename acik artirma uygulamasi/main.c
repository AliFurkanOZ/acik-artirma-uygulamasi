#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Açýk artýrma öðesini temsil eden struct
typedef struct {
    char oge_adi[50];
    double mevcut_teklif;
} acik_artirma_ogesi;

const int MAX_URUN_SAYISI = 10;
const double BASLANGIC_TEKLIFI = 1000.0;

acik_artirma_ogesi acik_artirma_ogeleri[10];

void baslangic() {
	int i;
    for (i = 0; i < MAX_URUN_SAYISI; i++) {
        sprintf(acik_artirma_ogeleri[i].oge_adi, "Urun %d", i + 1);
        acik_artirma_ogeleri[i].mevcut_teklif = BASLANGIC_TEKLIFI;
    }
}

void teklif_ver(int oge_dizini, double teklif_tutari) {
    if (oge_dizini >= 0 && oge_dizini < MAX_URUN_SAYISI) {
        if (teklif_tutari > acik_artirma_ogeleri[oge_dizini].mevcut_teklif) {
            acik_artirma_ogeleri[oge_dizini].mevcut_teklif = teklif_tutari;
            printf("Teklifiniz kabul edildi. Yeni teklif: %.2f $\n", teklif_tutari);
        } else {
            printf("Teklif, mevcut tekliften dusuk. Yeni teklif veriniz.\n");
        }
    } else {
        printf("Gecersiz oge indeksi. Teklif verilemedi.\n");
    }
}

void son() {
    printf("Acik artirma sona erdi. Iste kazanan teklifler:\n\n");
    int i;
    for (i = 0; i < MAX_URUN_SAYISI; i++) {
        printf("%s: %.2f $ verdi\n", acik_artirma_ogeleri[i].oge_adi, acik_artirma_ogeleri[i].mevcut_teklif);
    }
}

int main() {
    int secim;
    double yeni_teklif;
    int oge_no;

    baslangic();

    printf("***** ACIK ARTIRMA UYGULAMASI *****\n\n");
    printf("Hos geldiniz! Acik artirmaya basliyoruz.\n");

    do {
        printf("\nAsagidaki urunler icin teklif vermek istiyorsaniz:\n");
        printf("0 - Cikis\n");
		
		int i;
        for (i = 0; i < MAX_URUN_SAYISI; i++) {
            printf("%d - %s icin teklif ver\n", i + 1, acik_artirma_ogeleri[i].oge_adi);
        }

        printf("Lutfen seciminizi yapin: ");
        scanf("%d", &secim);

        if (secim == 0) {
            printf("Cikis yapiliyor...\n");
            break;
        }

        if (secim < 1 || secim > MAX_URUN_SAYISI) {
            printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
            continue;
        }

        printf("Yeni teklif miktarini girin: ");
        scanf("%lf", &yeni_teklif);

        oge_no = secim - 1;
        teklif_ver(oge_no, yeni_teklif);

    } while (1);

    son();

    return 0;
}

