### Açık Artırma Uygulaması ###

Bu C programı, basit bir açık artırma simülasyonunu gerçekleştirmektedir. Kullanıcıya, farklı ürünler için teklif verme imkanı sunar ve sonunda en yüksek teklifi veren katılımcıları gösterir.


## Kod Açıklaması

- `acik_artirma_ogesi` adında bir struct tanımlanmıştır. Bu, açık artırma öğelerini (ürün adı ve mevcut teklif) temsil eder.
- `MAX_URUN_SAYISI` ve `BASLANGIC_TEKLIFI` sabit değişkenleri, sırasıyla maksimum ürün sayısını ve başlangıç teklifini belirtir.
- `baslangic()` fonksiyonu, başlangıçta tanımlanan ürünlerin listesini ve başlangıç tekliflerini oluşturur.
- `teklif_ver()` fonksiyonu, kullanıcı tarafından girilen teklifleri kontrol eder. Eğer yeni teklif, mevcut tekliften yüksekse kabul edilir.
- `son()` fonksiyonu, açık artırma sonunda en yüksek teklif veren katılımcıları ekrana yazdırır.
- `main()` fonksiyonu, kullanıcıya ürün seçme ve teklif verme imkanı sunar. Çıkış yapılmak istendiğinde veya tüm ürünler için teklifler tamamlandığında program sona erer.


## Nasıl Kullanılır?

1. **Başlangıç**

    - Program başladığında, önceden tanımlanmış ürünler ve başlangıç teklifleri oluşturulur.
    - Kullanıcıya açık artırma başladığı bildirilir.

2. **Ürün Seçimi ve Teklif Verme**

    - Kullanıcıya, açık artırmaya katılabileceği ürünler listelenir.
    - Kullanıcı istediği ürünü seçer ve yeni bir teklif verir.
    - Eğer teklif, mevcut tekliften yüksekse kabul edilir, aksi takdirde reddedilir.

3. **Sonuçlar**

    - Kullanıcı çıkış yapmak istediğinde veya tüm ürünler için teklifler tamamlandığında program sona erer.
    - Açık artırma sonuçları, her ürün için en yüksek teklif veren katılımcıları gösterir.
