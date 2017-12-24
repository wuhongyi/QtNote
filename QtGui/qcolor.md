<!-- qcolor.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 12:22:36 2017 (+0800)
;; Last-Updated: 日 12月 24 12:23:30 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcolor


```cpp
// QColor

public:
    enum Spec { Invalid, Rgb, Hsv, Cmyk, Hsl };

    QColor();
    QColor(Qt::GlobalColor color);
    QColor(int r, int g, int b, int a = 255);
    QColor(QRgb rgb);
    QColor(const QString& name);
    QColor(const char *name);
    QColor(const QColor &color);
    QColor(Spec spec);

    bool isValid() const;

    QString name() const;
    void setNamedColor(const QString& name);

    static QStringList colorNames();

    inline Spec spec() const
    { return cspec; }

    int alpha() const;
    void setAlpha(int alpha);

    qreal alphaF() const;
    void setAlphaF(qreal alpha);

    int red() const;
    int green() const;
    int blue() const;
    void setRed(int red);
    void setGreen(int green);
    void setBlue(int blue);

    qreal redF() const;
    qreal greenF() const;
    qreal blueF() const;
    void setRedF(qreal red);
    void setGreenF(qreal green);
    void setBlueF(qreal blue);

    void getRgb(int *r, int *g, int *b, int *a = 0) const;
    void setRgb(int r, int g, int b, int a = 255);

    void getRgbF(qreal *r, qreal *g, qreal *b, qreal *a = 0) const;
    void setRgbF(qreal r, qreal g, qreal b, qreal a = 1.0);

    QRgb rgba() const;
    void setRgba(QRgb rgba);

    QRgb rgb() const;
    void setRgb(QRgb rgb);

    int hue() const; // 0 <= hue < 360
    int saturation() const;
    int hsvHue() const; // 0 <= hue < 360
    int hsvSaturation() const;
    int value() const;

    qreal hueF() const; // 0.0 <= hueF < 360.0
    qreal saturationF() const;
    qreal hsvHueF() const; // 0.0 <= hueF < 360.0
    qreal hsvSaturationF() const;
    qreal valueF() const;

    void getHsv(int *h, int *s, int *v, int *a = 0) const;
    void setHsv(int h, int s, int v, int a = 255);

    void getHsvF(qreal *h, qreal *s, qreal *v, qreal *a = 0) const;
    void setHsvF(qreal h, qreal s, qreal v, qreal a = 1.0);

    int cyan() const;
    int magenta() const;
    int yellow() const;
    int black() const;

    qreal cyanF() const;
    qreal magentaF() const;
    qreal yellowF() const;
    qreal blackF() const;

    void getCmyk(int *c, int *m, int *y, int *k, int *a = 0);
    void setCmyk(int c, int m, int y, int k, int a = 255);

    void getCmykF(qreal *c, qreal *m, qreal *y, qreal *k, qreal *a = 0);
    void setCmykF(qreal c, qreal m, qreal y, qreal k, qreal a = 1.0);

    int hslHue() const; // 0 <= hue < 360
    int hslSaturation() const;
    int lightness() const;

    qreal hslHueF() const; // 0.0 <= hueF < 360.0
    qreal hslSaturationF() const;
    qreal lightnessF() const;

    void getHsl(int *h, int *s, int *l, int *a = 0) const;
    void setHsl(int h, int s, int l, int a = 255);

    void getHslF(qreal *h, qreal *s, qreal *l, qreal *a = 0) const;
    void setHslF(qreal h, qreal s, qreal l, qreal a = 1.0);

    QColor toRgb() const;
    QColor toHsv() const;
    QColor toCmyk() const;
    QColor toHsl() const;

    QColor convertTo(Spec colorSpec) const;

    static QColor fromRgb(QRgb rgb);
    static QColor fromRgba(QRgb rgba);

    static QColor fromRgb(int r, int g, int b, int a = 255);
    static QColor fromRgbF(qreal r, qreal g, qreal b, qreal a = 1.0);

    static QColor fromHsv(int h, int s, int v, int a = 255);
    static QColor fromHsvF(qreal h, qreal s, qreal v, qreal a = 1.0);

    static QColor fromCmyk(int c, int m, int y, int k, int a = 255);
    static QColor fromCmykF(qreal c, qreal m, qreal y, qreal k, qreal a = 1.0);

    static QColor fromHsl(int h, int s, int l, int a = 255);
    static QColor fromHslF(qreal h, qreal s, qreal l, qreal a = 1.0);

    QColor light(int f = 150) const;
    QColor lighter(int f = 150) const;
    QColor dark(int f = 200) const;
    QColor darker(int f = 200) const;

    QColor &operator=(const QColor &);
    QColor &operator=(Qt::GlobalColor color);

    bool operator==(const QColor &c) const;
    bool operator!=(const QColor &c) const;

    operator QVariant() const;

#ifdef Q_WS_X11
    static bool allowX11ColorNames();
    static void setAllowX11ColorNames(bool enabled);
#endif

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT_CONSTRUCTOR QColor(int x, int y, int z, Spec colorSpec)
    { if (colorSpec == Hsv) setHsv(x, y, z); else setRgb(x, y, z); }

    inline QT3_SUPPORT void rgb(int *r, int *g, int *b) const
    { getRgb(r, g, b); }
    inline QT3_SUPPORT void hsv(int *h, int *s, int *v) const
    { getHsv(h, s, v); }

    inline QT3_SUPPORT void setRgba(int r, int g, int b, int a)
    { setRgb(r, g, b, a); }
    inline QT3_SUPPORT void getRgba(int *r, int *g, int *b, int *a) const
    { getRgb(r, g, b, a); }

    QT3_SUPPORT uint pixel(int screen = -1) const;
#endif

    static bool isValidColor(const QString &name);
```

<!-- qcolor.md ends here -->
