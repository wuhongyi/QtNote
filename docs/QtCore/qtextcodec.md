<!-- qtextcodec.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 21:00:17 2017 (+0800)
;; Last-Updated: 三 12月 13 21:03:32 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qtextcodec


```cpp
// QTextCodec

public:
    static QTextCodec* codecForName(const QByteArray &name);
    static QTextCodec* codecForName(const char *name) { return codecForName(QByteArray(name)); }
    static QTextCodec* codecForMib(int mib);

    static QList<QByteArray> availableCodecs();
    static QList<int> availableMibs();

    static QTextCodec* codecForLocale();
    static void setCodecForLocale(QTextCodec *c);

    static QTextCodec* codecForTr();
    static void setCodecForTr(QTextCodec *c);

    static QTextCodec* codecForCStrings();
    static void setCodecForCStrings(QTextCodec *c);

    static QTextCodec *codecForHtml(const QByteArray &ba);
    static QTextCodec *codecForHtml(const QByteArray &ba, QTextCodec *defaultCodec);

    static QTextCodec *codecForUtfText(const QByteArray &ba);
    static QTextCodec *codecForUtfText(const QByteArray &ba, QTextCodec *defaultCodec);

    bool canEncode(QChar) const;
    bool canEncode(const QString&) const;

    QString toUnicode(const QByteArray&) const;
    QString toUnicode(const char* chars) const;
    QByteArray fromUnicode(const QString& uc) const;
    enum ConversionFlag {
        DefaultConversion,
        ConvertInvalidToNull = 0x80000000,
        IgnoreHeader = 0x1,
        FreeFunction = 0x2
    };
    Q_DECLARE_FLAGS(ConversionFlags, ConversionFlag)

    struct Q_CORE_EXPORT ConverterState {
        ConverterState(ConversionFlags f = DefaultConversion)
            : flags(f), remainingChars(0), invalidChars(0), d(0) { state_data[0] = state_data[1] = state_data[2] = 0; }
        ~ConverterState();
        ConversionFlags flags;
        int remainingChars;
        int invalidChars;
        uint state_data[3];
        void *d;
    private:
        Q_DISABLE_COPY(ConverterState)
    };

    QString toUnicode(const char *in, int length, ConverterState *state = 0) const
        { return convertToUnicode(in, length, state); }
    QByteArray fromUnicode(const QChar *in, int length, ConverterState *state = 0) const
        { return convertFromUnicode(in, length, state); }

    // ### Qt 5: merge these functions.
    QTextDecoder* makeDecoder() const;
    QTextDecoder* makeDecoder(ConversionFlags flags) const;
    QTextEncoder* makeEncoder() const;
    QTextEncoder* makeEncoder(ConversionFlags flags) const;

    virtual QByteArray name() const = 0;
    virtual QList<QByteArray> aliases() const;
    virtual int mibEnum() const = 0;

public:
#ifdef QT3_SUPPORT
    static QT3_SUPPORT QTextCodec* codecForContent(const char*, int) { return 0; }
    static QT3_SUPPORT const char* locale();
    static QT3_SUPPORT QTextCodec* codecForName(const char* hint, int) { return codecForName(QByteArray(hint)); }
    QT3_SUPPORT QByteArray fromUnicode(const QString& uc, int& lenInOut) const;
    QT3_SUPPORT QString toUnicode(const QByteArray&, int len) const;
    QT3_SUPPORT QByteArray mimeName() const { return name(); }
    static QT3_SUPPORT QTextCodec *codecForIndex(int i) { return codecForName(availableCodecs().value(i)); }
#endif
```


```cpp
// QTextDecoder

public:
    explicit QTextDecoder(const QTextCodec *codec) : c(codec), state() {}
    QTextDecoder(const QTextCodec *codec, QTextCodec::ConversionFlags flags);
    ~QTextDecoder();
    QString toUnicode(const char* chars, int len);
    QString toUnicode(const QByteArray &ba);
    void toUnicode(QString *target, const char *chars, int len);
    bool hasFailure() const;
```


<!-- qtextcodec.md ends here -->
