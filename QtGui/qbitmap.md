<!-- qbitmap.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 二 1月  2 22:26:50 2018 (+0800)
;; Last-Updated: 二 1月  2 22:27:51 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qbitmap


```cpp
// QBitmap : public QPixmap


public:
    QBitmap();
    QBitmap(const QPixmap &);
    QBitmap(int w, int h);
    explicit QBitmap(const QSize &);
    explicit QBitmap(const QString &fileName, const char *format=0);
    ~QBitmap();

    QBitmap &operator=(const QPixmap &);
    inline void swap(QBitmap &other) { QPixmap::swap(other); } // prevent QBitmap<->QPixmap swaps
    operator QVariant() const;

    inline void clear() { fill(Qt::color0); }

    static QBitmap fromImage(const QImage &image, Qt::ImageConversionFlags flags = Qt::AutoColor);
    static QBitmap fromData(const QSize &size, const uchar *bits,
                            QImage::Format monoFormat = QImage::Format_MonoLSB);

    QBitmap transformed(const QMatrix &) const;
    QBitmap transformed(const QTransform &matrix) const;
#ifdef QT3_SUPPORT
    inline QT3_SUPPORT_CONSTRUCTOR QBitmap(int w, int h, bool clear);
    inline QT3_SUPPORT_CONSTRUCTOR QBitmap(const QSize &, bool clear);
    QT3_SUPPORT_CONSTRUCTOR QBitmap(int w, int h, const uchar *bits, bool isXbitmap=false);
    QT3_SUPPORT_CONSTRUCTOR QBitmap(const QSize &, const uchar *bits, bool isXbitmap=false);
    inline QT3_SUPPORT QBitmap xForm(const QMatrix &matrix) const { return transformed(QTransform(matrix)); }
    QT3_SUPPORT_CONSTRUCTOR QBitmap(const QImage &image) { *this = fromImage(image); }
    QT3_SUPPORT QBitmap &operator=(const QImage &image) { *this = fromImage(image); return *this; }
#endif

    typedef QExplicitlySharedDataPointer<QPixmapData> DataPtr;

```

<!-- qbitmap.md ends here -->
