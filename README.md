# Açık Artırma Uygulaması

Bu proje, bir açık artırma sistemini simüle eden basit bir C programıdır. Kullanıcılar belirli ürünler için teklif verebilir ve açık artırma sonunda en yüksek teklif veren kişi ürünü kazanır.

## Açıklama

- **baslangic()**: Açık artırma için varsayılan ürünleri ve başlangıç tekliflerini tanımlar.
- **teklif_ver()**: Kullanıcının belirlediği ürüne teklif vermesini sağlar.
- **son()**: Açık artırmayı sonlandırır ve kazanan teklifleri listeler.

## Kullanılan Teknolojiler

- C Programlama Dili
- Standart Giriş/Çıkış İşlemleri
- Struct Kullanımı
- Döngüler ve Koşul Yapıları

## Kurulum

1. Depoyu klonlayın:
   ```bash
   git clone https://github.com/kullanici_adiniz/acik-artirma.git
   ```
2. Klasöre gidin:
   ```bash
   cd acik-artirma
   ```
3. Derleme işlemi için GCC kullanın:
   ```bash
   gcc auction.c -o auction
   ```

## Kullanım

1. Programı çalıştırın:
   ```bash
   ./auction
   ```
2. Açık artırmaya katılmak için ekranda listelenen ürünlerden birine teklif verin.
3. Teklifiniz mevcut tekliften yüksekse kabul edilir, değilse reddedilir.
4. Çıkış yapmak için `0` seçeneğini kullanın.
5. Açık artırma sona erdiğinde kazanan teklifler ekranda gösterilir.

## Örnek Çalışma

**Çıktı Örneği:**
```
***** ACIK ARTIRMA UYGULAMASI *****

Hos geldiniz! Acik artirmaya basliyoruz.

1 - Urun 1 icin teklif ver
2 - Urun 2 icin teklif ver
...
0 - Cikis
Lutfen seciminizi yapin: 1
Yeni teklif miktarini girin: 1500
Teklifiniz kabul edildi. Yeni teklif: 1500.00 $
```

## Geliştirme

- Kullanıcı adı ve kayıt sistemi eklenerek daha gerçekçi bir açık artırma deneyimi sağlanabilir.
- Ağ tabanlı çalışacak şekilde geliştirilerek birden fazla kullanıcının katılımı sağlanabilir.

## Lisans

Bu proje MIT Lisansı ile lisanslanmıştır.

