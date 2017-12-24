<!-- qicon.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:37:43 2017 (+0800)
;; Last-Updated: 日 12月 24 22:39:02 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qicon

```cpp
// QIcon


public:
    enum Mode { Normal, Disabled, Active, Selected };
    enum State { On, Off };

    QIcon();
    QIcon(const QPixmap &pixmap);
    QIcon(const QIcon &other);
    explicit QIcon(const QString &fileName); // file or resource name
    explicit QIcon(QIconEngine *engine);
    explicit QIcon(QIconEngineV2 *engine);
    ~QIcon();
    QIcon &operator=(const QIcon &other);
#ifdef Q_COMPILER_RVALUE_REFS
    inline QIcon &operator=(QIcon &&other)
    { qSwap(d, other.d); return *this; }
#endif
    inline void swap(QIcon &other) { qSwap(d, other.d); }

    operator QVariant() const;

    QPixmap pixmap(const QSize &size, Mode mode = Normal, State state = Off) const;
    inline QPixmap pixmap(int w, int h, Mode mode = Normal, State state = Off) const
        { return pixmap(QSize(w, h), mode, state); }
    inline QPixmap pixmap(int extent, Mode mode = Normal, State state = Off) const
        { return pixmap(QSize(extent, extent), mode, state); }

    QSize actualSize(const QSize &size, Mode mode = Normal, State state = Off) const;

    QString name() const;

    void paint(QPainter *painter, const QRect &rect, Qt::Alignment alignment = Qt::AlignCenter, Mode mode = Normal, State state = Off) const;
    inline void paint(QPainter *painter, int x, int y, int w, int h, Qt::Alignment alignment = Qt::AlignCenter, Mode mode = Normal, State state = Off) const
        { paint(painter, QRect(x, y, w, h), alignment, mode, state); }

    bool isNull() const;
    bool isDetached() const;
    void detach();

    int serialNumber() const;
    qint64 cacheKey() const;

    void addPixmap(const QPixmap &pixmap, Mode mode = Normal, State state = Off);
    void addFile(const QString &fileName, const QSize &size = QSize(), Mode mode = Normal, State state = Off);

    QList<QSize> availableSizes(Mode mode = Normal, State state = Off) const;

    static QIcon fromTheme(const QString &name, const QIcon &fallback = QIcon());
    static bool hasThemeIcon(const QString &name);

    static QStringList themeSearchPaths();
    static void setThemeSearchPaths(const QStringList &searchpath);

    static QString themeName();
    static void setThemeName(const QString &path);


#ifdef QT3_SUPPORT
    enum Size { Small, Large, Automatic = Small };
    static QT3_SUPPORT void setPixmapSize(Size which, const QSize &size);
    static QT3_SUPPORT QSize pixmapSize(Size which);
    inline QT3_SUPPORT void reset(const QPixmap &pixmap, Size /*size*/) { *this = QIcon(pixmap); }
    inline QT3_SUPPORT void setPixmap(const QPixmap &pixmap, Size, Mode mode = Normal, State state = Off)
        { addPixmap(pixmap, mode, state); }
    inline QT3_SUPPORT void setPixmap(const QString &fileName, Size, Mode mode = Normal, State state = Off)
        { addPixmap(QPixmap(fileName), mode, state); }
    QT3_SUPPORT QPixmap pixmap(Size size, Mode mode, State state = Off) const;
    QT3_SUPPORT QPixmap pixmap(Size size, bool enabled, State state = Off) const;
    QT3_SUPPORT QPixmap pixmap() const;
#endif

    Q_DUMMY_COMPARISON_OPERATOR(QIcon)



public:
    typedef QIconPrivate * DataPtr;
    inline DataPtr &data_ptr() { return d; }
```

<!-- qicon.md ends here -->
