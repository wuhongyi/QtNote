<!-- qstring.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 11:43:31 2017 (+0800)
;; Last-Updated: 日 12月 24 11:55:58 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qstring


```cpp
// QString


public:
    inline QString();
    QString(const QChar *unicode, int size); // Qt5: don't cap size < 0
    explicit QString(const QChar *unicode); // Qt5: merge with the above
    QString(QChar c);
    QString(int size, QChar c);
    inline QString(const QLatin1String &latin1);
    inline QString(const QString &);
    inline ~QString();
    QString &operator=(QChar c);
    QString &operator=(const QString &);
    inline QString &operator=(const QLatin1String &);
#ifdef Q_COMPILER_RVALUE_REFS
    inline QString &operator=(QString &&other)
    { qSwap(d, other.d); return *this; }
#endif
    inline void swap(QString &other) { qSwap(d, other.d); }
    inline int size() const { return d->size; }
    inline int count() const { return d->size; }
    inline int length() const;
    inline bool isEmpty() const;
    void resize(int size);

    QString &fill(QChar c, int size = -1);
    void truncate(int pos);
    void chop(int n);

    int capacity() const;
    inline void reserve(int size);
    inline void squeeze() { if (d->size < d->alloc || d->ref != 1) realloc(); d->capacity = 0;}

    inline const QChar *unicode() const;
    inline QChar *data();
    inline const QChar *data() const;
    inline const QChar *constData() const;

    inline void detach();
    inline bool isDetached() const;
    inline bool isSharedWith(const QString &other) const { return d == other.d; }
    void clear();

    inline const QChar at(int i) const;
    const QChar operator[](int i) const;
    QCharRef operator[](int i);
    const QChar operator[](uint i) const;
    QCharRef operator[](uint i);

    QString arg(qlonglong a, int fieldwidth=0, int base=10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(qulonglong a, int fieldwidth=0, int base=10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(long a, int fieldwidth=0, int base=10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(ulong a, int fieldwidth=0, int base=10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(int a, int fieldWidth = 0, int base = 10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(uint a, int fieldWidth = 0, int base = 10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(short a, int fieldWidth = 0, int base = 10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(ushort a, int fieldWidth = 0, int base = 10,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(double a, int fieldWidth = 0, char fmt = 'g', int prec = -1,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(char a, int fieldWidth = 0,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(QChar a, int fieldWidth = 0,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(const QString &a, int fieldWidth = 0,
                const QChar &fillChar = QLatin1Char(' ')) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4, const QString &a5) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4, const QString &a5, const QString &a6) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4, const QString &a5, const QString &a6,
                const QString &a7) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4, const QString &a5, const QString &a6,
                const QString &a7, const QString &a8) const Q_REQUIRED_RESULT;
    QString arg(const QString &a1, const QString &a2, const QString &a3,
                const QString &a4, const QString &a5, const QString &a6,
                const QString &a7, const QString &a8, const QString &a9) const Q_REQUIRED_RESULT;

    QString    &vsprintf(const char *format, va_list ap)
#if defined(Q_CC_GNU) && !defined(__INSURE__)
        __attribute__ ((format (printf, 2, 0)))
#endif
        ;
    QString    &sprintf(const char *format, ...)
#if defined(Q_CC_GNU) && !defined(__INSURE__)
        __attribute__ ((format (printf, 2, 3)))
#endif
        ;

    int indexOf(QChar c, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(const QString &s, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(const QLatin1String &s, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(const QStringRef &s, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(QChar c, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(const QString &s, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(const QLatin1String &s, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(const QStringRef &s, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    inline QBool contains(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int count(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int count(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int count(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

#ifndef QT_NO_REGEXP
    int indexOf(const QRegExp &, int from = 0) const;
    int lastIndexOf(const QRegExp &, int from = -1) const;
    inline QBool contains(const QRegExp &rx) const { return QBool(indexOf(rx) != -1); }
    int count(const QRegExp &) const;

    int indexOf(QRegExp &, int from = 0) const;
    int lastIndexOf(QRegExp &, int from = -1) const;
    inline QBool contains(QRegExp &rx) const { return QBool(indexOf(rx) != -1); }
#endif


    enum SectionFlag {
        SectionDefault             = 0x00,
        SectionSkipEmpty           = 0x01,
        SectionIncludeLeadingSep   = 0x02,
        SectionIncludeTrailingSep  = 0x04,
        SectionCaseInsensitiveSeps = 0x08
    };
    Q_DECLARE_FLAGS(SectionFlags, SectionFlag)

    QString section(QChar sep, int start, int end = -1, SectionFlags flags = SectionDefault) const;
    QString section(const QString &in_sep, int start, int end = -1, SectionFlags flags = SectionDefault) const;
#ifndef QT_NO_REGEXP
    QString section(const QRegExp &reg, int start, int end = -1, SectionFlags flags = SectionDefault) const;
#endif

    QString left(int n) const Q_REQUIRED_RESULT;
    QString right(int n) const Q_REQUIRED_RESULT;
    QString mid(int position, int n = -1) const Q_REQUIRED_RESULT;
    QStringRef leftRef(int n) const Q_REQUIRED_RESULT;
    QStringRef rightRef(int n) const Q_REQUIRED_RESULT;
    QStringRef midRef(int position, int n = -1) const Q_REQUIRED_RESULT;

    bool startsWith(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(const QLatin1String &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(const QChar &c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(const QLatin1String &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(const QChar &c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    QString leftJustified(int width, QChar fill = QLatin1Char(' '), bool trunc = false) const Q_REQUIRED_RESULT;
    QString rightJustified(int width, QChar fill = QLatin1Char(' '), bool trunc = false) const Q_REQUIRED_RESULT;

    QString toLower() const Q_REQUIRED_RESULT;
    QString toUpper() const Q_REQUIRED_RESULT;
    QString toCaseFolded() const Q_REQUIRED_RESULT;

    QString trimmed() const Q_REQUIRED_RESULT;
    QString simplified() const Q_REQUIRED_RESULT;

    QString &insert(int i, QChar c);
    QString &insert(int i, const QChar *uc, int len);
    inline QString &insert(int i, const QString &s) { return insert(i, s.constData(), s.length()); }
    QString &insert(int i, const QLatin1String &s);
    QString &append(QChar c);
    QString &append(const QString &s);
    QString &append(const QStringRef &s);
    QString &append(const QLatin1String &s);
    inline QString &prepend(QChar c) { return insert(0, c); }
    inline QString &prepend(const QString &s) { return insert(0, s); }
    inline QString &prepend(const QLatin1String &s) { return insert(0, s); }

    inline QString &operator+=(QChar c) {
        if (d->ref != 1 || d->size + 1 > d->alloc)
            realloc(grow(d->size + 1));
        d->data[d->size++] = c.unicode();
        d->data[d->size] = '\0';
        return *this;
    }

    inline QString &operator+=(QChar::SpecialCharacter c) { return append(QChar(c)); }
    inline QString &operator+=(const QString &s) { return append(s); }
    inline QString &operator+=(const QStringRef &s) { return append(s); }
    inline QString &operator+=(const QLatin1String &s) { return append(s); }

    QString &remove(int i, int len);
    QString &remove(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &remove(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(int i, int len, QChar after);
    QString &replace(int i, int len, const QChar *s, int slen);
    QString &replace(int i, int len, const QString &after);
    QString &replace(QChar before, QChar after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(const QChar *before, int blen, const QChar *after, int alen, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(const QLatin1String &before, const QLatin1String &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(const QLatin1String &before, const QString &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(const QString &before, const QLatin1String &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(const QString &before, const QString &after,
                     Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(QChar c, const QString &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
    QString &replace(QChar c, const QLatin1String &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);
#ifndef QT_NO_REGEXP
    QString &replace(const QRegExp &rx, const QString &after);
    inline QString &remove(const QRegExp &rx)
    { return replace(rx, QString()); }
#endif

    enum SplitBehavior { KeepEmptyParts, SkipEmptyParts };

    QStringList split(const QString &sep, SplitBehavior behavior = KeepEmptyParts,
                      Qt::CaseSensitivity cs = Qt::CaseSensitive) const Q_REQUIRED_RESULT;
    QStringList split(const QChar &sep, SplitBehavior behavior = KeepEmptyParts,
                      Qt::CaseSensitivity cs = Qt::CaseSensitive) const Q_REQUIRED_RESULT;
#ifndef QT_NO_REGEXP
    QStringList split(const QRegExp &sep, SplitBehavior behavior = KeepEmptyParts) const Q_REQUIRED_RESULT;
#endif

    enum NormalizationForm {
        NormalizationForm_D,
        NormalizationForm_C,
        NormalizationForm_KD,
        NormalizationForm_KC
    };
    QString normalized(NormalizationForm mode) const Q_REQUIRED_RESULT;
    QString normalized(NormalizationForm mode, QChar::UnicodeVersion version) const Q_REQUIRED_RESULT;

    QString repeated(int times) const;

    const ushort *utf16() const;

    QByteArray toAscii() const Q_REQUIRED_RESULT;
    QByteArray toLatin1() const Q_REQUIRED_RESULT;
    QByteArray toUtf8() const Q_REQUIRED_RESULT;
    QByteArray toLocal8Bit() const Q_REQUIRED_RESULT;
    QVector<uint> toUcs4() const Q_REQUIRED_RESULT;

    static QString fromAscii(const char *, int size = -1);
    static QString fromLatin1(const char *, int size = -1);
    static QString fromUtf8(const char *, int size = -1);
    static QString fromLocal8Bit(const char *, int size = -1);
    static QString fromUtf16(const ushort *, int size = -1);
    static QString fromUcs4(const uint *, int size = -1);
    static QString fromRawData(const QChar *, int size);

    int toWCharArray(wchar_t *array) const;
    static QString fromWCharArray(const wchar_t *, int size = -1);

    QString &setRawData(const QChar *unicode, int size);
    QString &setUnicode(const QChar *unicode, int size);
    inline QString &setUtf16(const ushort *utf16, int size);

    // ### Qt 5: merge these two functions
    int compare(const QString &s) const;
    int compare(const QString &s, Qt::CaseSensitivity cs) const;

    int compare(const QLatin1String &other, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    // ### Qt 5: merge these two functions
    static inline int compare(const QString &s1, const QString &s2)
    { return s1.compare(s2); }
    static inline int compare(const QString &s1, const QString &s2, Qt::CaseSensitivity cs)
    { return s1.compare(s2, cs); }

    static inline int compare(const QString& s1, const QLatin1String &s2,
                              Qt::CaseSensitivity cs = Qt::CaseSensitive)
    { return s1.compare(s2, cs); }
    static inline int compare(const QLatin1String& s1, const QString &s2,
                              Qt::CaseSensitivity cs = Qt::CaseSensitive)
    { return -s2.compare(s1, cs); }

    int compare(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    static int compare(const QString &s1, const QStringRef &s2,
                       Qt::CaseSensitivity = Qt::CaseSensitive);

    int localeAwareCompare(const QString& s) const;
    static int localeAwareCompare(const QString& s1, const QString& s2)
    { return s1.localeAwareCompare(s2); }

    int localeAwareCompare(const QStringRef &s) const;
    static int localeAwareCompare(const QString& s1, const QStringRef& s2);

    short  toShort(bool *ok=0, int base=10) const;
    ushort toUShort(bool *ok=0, int base=10) const;
    int toInt(bool *ok=0, int base=10) const;
    uint toUInt(bool *ok=0, int base=10) const;
    long toLong(bool *ok=0, int base=10) const;
    ulong toULong(bool *ok=0, int base=10) const;
    qlonglong toLongLong(bool *ok=0, int base=10) const;
    qulonglong toULongLong(bool *ok=0, int base=10) const;
    float toFloat(bool *ok=0) const;
    double toDouble(bool *ok=0) const;

    QString &setNum(short, int base=10);
    QString &setNum(ushort, int base=10);
    QString &setNum(int, int base=10);
    QString &setNum(uint, int base=10);
    QString &setNum(long, int base=10);
    QString &setNum(ulong, int base=10);
    QString &setNum(qlonglong, int base=10);
    QString &setNum(qulonglong, int base=10);
    QString &setNum(float, char f='g', int prec=6);
    QString &setNum(double, char f='g', int prec=6);

    static QString number(int, int base=10);
    static QString number(uint, int base=10);
    static QString number(long, int base=10);
    static QString number(ulong, int base=10);
    static QString number(qlonglong, int base=10);
    static QString number(qulonglong, int base=10);
    static QString number(double, char f='g', int prec=6);

    bool operator==(const QString &s) const;
    bool operator<(const QString &s) const;
    inline bool operator>(const QString &s) const { return s < *this; }
    inline bool operator!=(const QString &s) const { return !operator==(s); }
    inline bool operator<=(const QString &s) const { return !operator>(s); }
    inline bool operator>=(const QString &s) const { return !operator<(s); }

    bool operator==(const QLatin1String &s) const;
    bool operator<(const QLatin1String &s) const;
    bool operator>(const QLatin1String &s) const;
    inline bool operator!=(const QLatin1String &s) const { return !operator==(s); }
    inline bool operator<=(const QLatin1String &s) const { return !operator>(s); }
    inline bool operator>=(const QLatin1String &s) const { return !operator<(s); }

    // ASCII compatibility
#ifndef QT_NO_CAST_FROM_ASCII
    inline QT_ASCII_CAST_WARN_CONSTRUCTOR QString(const char *ch) : d(fromAscii_helper(ch))
    {}
    inline QT_ASCII_CAST_WARN_CONSTRUCTOR QString(const QByteArray &a)
        : d(fromAscii_helper(a.constData(), qstrnlen(a.constData(), a.size())))
    {}
    inline QT_ASCII_CAST_WARN QString &operator=(const char *ch)
    { return (*this = fromAscii(ch)); }
    inline QT_ASCII_CAST_WARN QString &operator=(const QByteArray &a)
    { return (*this = fromAscii(a.constData(), qstrnlen(a.constData(), a.size()))); }
    inline QT_ASCII_CAST_WARN QString &operator=(char c)
    { return (*this = QChar::fromAscii(c)); }

    // these are needed, so it compiles with STL support enabled
    inline QT_ASCII_CAST_WARN QString &prepend(const char *s)
    { return prepend(QString::fromAscii(s)); }
    inline QT_ASCII_CAST_WARN QString &prepend(const QByteArray &s)
    { return prepend(QString::fromAscii(s.constData(), qstrnlen(s.constData(), s.size()))); }
    inline QT_ASCII_CAST_WARN QString &append(const char *s)
    { return append(QString::fromAscii(s)); }
    inline QT_ASCII_CAST_WARN QString &append(const QByteArray &s)
    { return append(QString::fromAscii(s.constData(), qstrnlen(s.constData(), s.size()))); }
    inline QT_ASCII_CAST_WARN QString &operator+=(const char *s)
    { return append(QString::fromAscii(s)); }
    inline QT_ASCII_CAST_WARN QString &operator+=(const QByteArray &s)
    { return append(QString::fromAscii(s.constData(), qstrnlen(s.constData(), s.size()))); }
    inline QT_ASCII_CAST_WARN QString &operator+=(char c)
    { return append(QChar::fromAscii(c)); }

    inline QT_ASCII_CAST_WARN bool operator==(const char *s) const;
    inline QT_ASCII_CAST_WARN bool operator!=(const char *s) const;
    inline QT_ASCII_CAST_WARN bool operator<(const char *s) const;
    inline QT_ASCII_CAST_WARN bool operator<=(const char *s2) const;
    inline QT_ASCII_CAST_WARN bool operator>(const char *s2) const;
    inline QT_ASCII_CAST_WARN bool operator>=(const char *s2) const;

    inline QT_ASCII_CAST_WARN bool operator==(const QByteArray &s) const;
    inline QT_ASCII_CAST_WARN bool operator!=(const QByteArray &s) const;
    inline QT_ASCII_CAST_WARN bool operator<(const QByteArray &s) const
    { return *this < QString::fromAscii(s.constData(), s.size()); }
    inline QT_ASCII_CAST_WARN bool operator>(const QByteArray &s) const
    { return *this > QString::fromAscii(s.constData(), s.size()); }
    inline QT_ASCII_CAST_WARN bool operator<=(const QByteArray &s) const
    { return *this <= QString::fromAscii(s.constData(), s.size()); }
    inline QT_ASCII_CAST_WARN bool operator>=(const QByteArray &s) const
    { return *this >= QString::fromAscii(s.constData(), s.size()); }
#endif

    typedef QChar *iterator;
    typedef const QChar *const_iterator;
    typedef iterator Iterator;
    typedef const_iterator ConstIterator;
    iterator begin();
    const_iterator begin() const;
    const_iterator constBegin() const;
    iterator end();
    const_iterator end() const;
    const_iterator constEnd() const;

    // STL compatibility
    typedef const QChar & const_reference;
    typedef QChar & reference;
    typedef QChar value_type;
    inline void push_back(QChar c) { append(c); }
    inline void push_back(const QString &s) { append(s); }
    inline void push_front(QChar c) { prepend(c); }
    inline void push_front(const QString &s) { prepend(s); }

#ifndef QT_NO_STL
    static inline QString fromStdString(const std::string &s);
    inline std::string toStdString() const;
# ifdef qdoc
    static inline QString fromStdWString(const std::wstring &s);
    inline std::wstring toStdWString() const;
# else
#  ifndef QT_NO_STL_WCHAR
    static inline QString fromStdWString(const QStdWString &s);
    inline QStdWString toStdWString() const;
#  endif // QT_NO_STL_WCHAR
# endif // qdoc
#endif

    // compatibility
    struct Null { };
    static const Null null;
    inline QString(const Null &): d(&shared_null) { d->ref.ref(); }
    inline QString &operator=(const Null &) { *this = QString(); return *this; }
    inline bool isNull() const { return d == &shared_null; }

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT const char *ascii() const { return ascii_helper(); }
    inline QT3_SUPPORT const char *latin1() const { return latin1_helper(); }
    inline QT3_SUPPORT QByteArray utf8() const { return toUtf8(); }
    inline QT3_SUPPORT QByteArray local8Bit() const{ return toLocal8Bit(); }
    inline QT3_SUPPORT void setLength(int nl) { resize(nl); }
    inline QT3_SUPPORT QString copy() const { return *this; }
    inline QT3_SUPPORT QString &remove(QChar c, bool cs)
    { return remove(c, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT QString &remove(const QString  &s, bool cs)
    { return remove(s, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT QString &replace(QChar c, const QString  &after, bool cs)
    { return replace(c, after, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT QString &replace(const QString &before, const QString &after, bool cs)
    { return replace(before, after, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
#ifndef QT_NO_CAST_FROM_ASCII
    inline QT3_SUPPORT QString &replace(char c, const QString &after, bool cs)
    { return replace(QChar::fromAscii(c), after, cs ? Qt::CaseSensitive : Qt::CaseInsensitive); }
    // strange overload, required to avoid GCC 3.3 error
    inline QT3_SUPPORT QString &replace(char c, const QString &after, Qt::CaseSensitivity cs)
    { return replace(QChar::fromAscii(c), after, cs ? Qt::CaseSensitive : Qt::CaseInsensitive); }
#endif
    inline QT3_SUPPORT int find(QChar c, int i = 0, bool cs = true) const
    { return indexOf(c, i, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT int find(const QString &s, int i = 0, bool cs = true) const
    { return indexOf(s, i, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT int findRev(QChar c, int i = -1, bool cs = true) const
    { return lastIndexOf(c, i, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT int findRev(const QString &s, int i = -1, bool cs = true) const
    { return lastIndexOf(s, i, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
#ifndef QT_NO_REGEXP
    inline QT3_SUPPORT int find(const QRegExp &rx, int i=0) const
    { return indexOf(rx, i); }
    inline QT3_SUPPORT int findRev(const QRegExp &rx, int i=-1) const
    { return lastIndexOf(rx, i); }
    inline QT3_SUPPORT int find(QRegExp &rx, int i=0) const
    { return indexOf(rx, i); }
    inline QT3_SUPPORT int findRev(QRegExp &rx, int i=-1) const
    { return lastIndexOf(rx, i); }
#endif
    inline QT3_SUPPORT QBool contains(QChar c, bool cs) const
    { return contains(c, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT QBool contains(const QString &s, bool cs) const
    { return contains(s, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT bool startsWith(const QString &s, bool cs) const
    { return startsWith(s, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT bool endsWith(const QString &s, bool cs) const
    { return endsWith(s, cs?Qt::CaseSensitive:Qt::CaseInsensitive); }
    inline QT3_SUPPORT QChar constref(uint i) const
    { return at(i); }
    QT3_SUPPORT QChar &ref(uint i);
    inline QT3_SUPPORT QString leftJustify(int width, QChar aFill = QLatin1Char(' '), bool trunc=false) const
    { return leftJustified(width, aFill, trunc); }
    inline QT3_SUPPORT QString rightJustify(int width, QChar aFill = QLatin1Char(' '), bool trunc=false) const
    { return rightJustified(width, aFill, trunc); }
    inline QT3_SUPPORT QString lower() const { return toLower(); }
    inline QT3_SUPPORT QString upper() const { return toUpper(); }
    inline QT3_SUPPORT QString stripWhiteSpace() const { return trimmed(); }
    inline QT3_SUPPORT QString simplifyWhiteSpace() const { return simplified(); }
    inline QT3_SUPPORT QString &setUnicodeCodes(const ushort *unicode_as_ushorts, int aSize)
    { return setUtf16(unicode_as_ushorts, aSize); }
    inline QT3_SUPPORT const ushort *ucs2() const { return utf16(); }
    inline static QT3_SUPPORT QString fromUcs2(const ushort *unicode, int size = -1)
    { return fromUtf16(unicode, size); }
    inline QT3_SUPPORT QString &setAscii(const char *str, int len = -1)
    { *this = fromAscii(str, len); return *this; }
    inline QT3_SUPPORT QString &setLatin1(const char *str, int len = -1)
    { *this = fromLatin1(str, len); return *this; }



public:
#ifndef QT_NO_CAST_TO_ASCII
    inline QT3_SUPPORT operator const char *() const { return ascii_helper(); }


public:
    typedef Data * DataPtr;
    inline DataPtr &data_ptr() { return d; }
```




```cpp
// QLatin1String

public:
    inline explicit QLatin1String(const char *s) : chars(s) {}
    inline QLatin1String &operator=(const QLatin1String &other)
    { chars = other.chars; return *this; }

    inline const char *latin1() const { return chars; }

    inline bool operator==(const QString &s) const
    { return s == *this; }
    inline bool operator!=(const QString &s) const
    { return s != *this; }
    inline bool operator>(const QString &s) const
    { return s < *this; }
    inline bool operator<(const QString &s) const
    { return s > *this; }
    inline bool operator>=(const QString &s) const
    { return s <= *this; }
    inline bool operator<=(const QString &s) const
    { return s >= *this; }

    inline QT_ASCII_CAST_WARN bool operator==(const char *s) const
        { return QString::fromAscii(s) == *this; }
    inline QT_ASCII_CAST_WARN bool operator!=(const char *s) const
        { return QString::fromAscii(s) != *this; }
    inline QT_ASCII_CAST_WARN bool operator<(const char *s) const
        { return QString::fromAscii(s) > *this; }
    inline QT_ASCII_CAST_WARN bool operator>(const char *s) const
        { return QString::fromAscii(s) < *this; }
    inline QT_ASCII_CAST_WARN bool operator<=(const char *s) const
        { return QString::fromAscii(s) >= *this; }
    inline QT_ASCII_CAST_WARN bool operator>=(const char *s) const
        { return QString::fromAscii(s) <= *this; }
```



```cpp
// QCharRef

public:

    // most QChar operations repeated here

    // all this is not documented: We just say "like QChar" and let it be.
    inline operator QChar() const
        { return i < s.d->size ? s.d->data[i] : 0; }
    inline QCharRef &operator=(const QChar &c)
        { if (i >= s.d->size) s.expand(i); else s.detach();
          s.d->data[i] = c.unicode();  return *this; }

    // An operator= for each QChar cast constructors
#ifndef QT_NO_CAST_FROM_ASCII
    inline QT_ASCII_CAST_WARN QCharRef &operator=(char c)
    { return operator=(QChar::fromAscii(c)); }
    inline QT_ASCII_CAST_WARN QCharRef &operator=(uchar c)
    { return operator=(QChar::fromAscii(c)); }
#endif
    inline QCharRef &operator=(const QCharRef &c) { return operator=(QChar(c)); }
    inline QCharRef &operator=(ushort rc) { return operator=(QChar(rc)); }
    inline QCharRef &operator=(short rc) { return operator=(QChar(rc)); }
    inline QCharRef &operator=(uint rc) { return operator=(QChar(rc)); }
    inline QCharRef &operator=(int rc) { return operator=(QChar(rc)); }

    // each function...
    inline bool isNull() const { return QChar(*this).isNull(); }
    inline bool isPrint() const { return QChar(*this).isPrint(); }
    inline bool isPunct() const { return QChar(*this).isPunct(); }
    inline bool isSpace() const { return QChar(*this).isSpace(); }
    inline bool isMark() const { return QChar(*this).isMark(); }
    inline bool isLetter() const { return QChar(*this).isLetter(); }
    inline bool isNumber() const { return QChar(*this).isNumber(); }
    inline bool isLetterOrNumber() { return QChar(*this).isLetterOrNumber(); }
    inline bool isDigit() const { return QChar(*this).isDigit(); }
    inline bool isLower() const { return QChar(*this).isLower(); }
    inline bool isUpper() const { return QChar(*this).isUpper(); }
    inline bool isTitleCase() const { return QChar(*this).isTitleCase(); }

    inline int digitValue() const { return QChar(*this).digitValue(); }
    QChar toLower() const { return QChar(*this).toLower(); }
    QChar toUpper() const { return QChar(*this).toUpper(); }
    QChar toTitleCase () const { return QChar(*this).toTitleCase(); }

    QChar::Category category() const { return QChar(*this).category(); }
    QChar::Direction direction() const { return QChar(*this).direction(); }
    QChar::Joining joining() const { return QChar(*this).joining(); }
    bool hasMirrored() const { return QChar(*this).hasMirrored(); }
    QChar mirroredChar() const { return QChar(*this).mirroredChar(); }
    QString decomposition() const { return QChar(*this).decomposition(); }
    QChar::Decomposition decompositionTag() const { return QChar(*this).decompositionTag(); }
    uchar combiningClass() const { return QChar(*this).combiningClass(); }

    QChar::UnicodeVersion unicodeVersion() const { return QChar(*this).unicodeVersion(); }

    inline uchar cell() const { return QChar(*this).cell(); }
    inline uchar row() const { return QChar(*this).row(); }
    inline void setCell(uchar cell);
    inline void setRow(uchar row);

#ifdef Q_COMPILER_MANGLES_RETURN_TYPE
    const char toAscii() const { return QChar(*this).toAscii(); }
    const char toLatin1() const { return QChar(*this).toLatin1(); }
    const ushort unicode() const { return QChar(*this).unicode(); }
#else
    char toAscii() const { return QChar(*this).toAscii(); }
    char toLatin1() const { return QChar(*this).toLatin1(); }
    ushort unicode() const { return QChar(*this).unicode(); }
#endif
    ushort& unicode() { return s.data()[i].unicode(); }

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT bool mirrored() const { return hasMirrored(); }
    inline QT3_SUPPORT QChar lower() const { return QChar(*this).toLower(); }
    inline QT3_SUPPORT QChar upper() const { return QChar(*this).toUpper(); }
#ifdef Q_COMPILER_MANGLES_RETURN_TYPE
    const QT3_SUPPORT char latin1() const { return QChar(*this).toLatin1(); }
    const QT3_SUPPORT char ascii() const { return QChar(*this).toAscii(); }
#else
    QT3_SUPPORT char latin1() const { return QChar(*this).toLatin1(); }
    QT3_SUPPORT char ascii() const { return QChar(*this).toAscii(); }
#endif
#endif
```



```cpp
#ifdef QT3_SUPPORT
// QConstString : public QString

public:
    inline QT3_SUPPORT_CONSTRUCTOR QConstString(const QChar *aUnicode, int aSize)
        :QString(aUnicode, aSize){} // cannot use fromRawData() due to changed semantics
    inline QT3_SUPPORT const QString &string() const { return *this; }
#endif
```



```cpp
// QStringRef

public:
    inline QStringRef():m_string(0), m_position(0), m_size(0){}
    inline QStringRef(const QString *string, int position, int size);
    inline QStringRef(const QString *string);
    inline QStringRef(const QStringRef &other)
        :m_string(other.m_string), m_position(other.m_position), m_size(other.m_size)
        {}

    inline ~QStringRef(){}
    inline const QString *string() const { return m_string; }
    inline int position() const { return m_position; }
    inline int size() const { return m_size; }
    inline int count() const { return m_size; }
    inline int length() const { return m_size; }

    inline QStringRef &operator=(const QStringRef &other) {
        m_string = other.m_string; m_position = other.m_position;
        m_size = other.m_size; return *this;
    }

    int indexOf(const QString &str, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(QChar ch, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(QLatin1String str, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int indexOf(const QStringRef &str, int from = 0, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(const QString &str, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(QChar ch, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(QLatin1String str, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int lastIndexOf(const QStringRef &str, int from = -1, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    inline QBool contains(const QString &str, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(QChar ch, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(QLatin1String str, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(const QStringRef &str, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    int count(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int count(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int count(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    bool startsWith(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(QLatin1String s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool startsWith(const QStringRef &c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    bool endsWith(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(QLatin1String s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(QChar c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    bool endsWith(const QStringRef &c, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    inline QStringRef &operator=(const QString *string);

    inline const QChar *unicode() const {
        if (!m_string)
            return reinterpret_cast<const QChar *>(QString::shared_null.data);
        return m_string->unicode() + m_position;
    }
    inline const QChar *data() const { return unicode(); }
    inline const QChar *constData() const {  return unicode(); }

    QByteArray toAscii() const Q_REQUIRED_RESULT;
    QByteArray toLatin1() const Q_REQUIRED_RESULT;
    QByteArray toUtf8() const Q_REQUIRED_RESULT;
    QByteArray toLocal8Bit() const Q_REQUIRED_RESULT;
    QVector<uint> toUcs4() const Q_REQUIRED_RESULT;

    inline void clear() { m_string = 0; m_position = m_size = 0; }
    QString toString() const;
    inline bool isEmpty() const { return m_size == 0; }
    inline bool isNull() const { return m_string == 0 || m_string->isNull(); }

    QStringRef appendTo(QString *string) const;

    inline const QChar at(int i) const
        { Q_ASSERT(uint(i) < uint(size())); return m_string->at(i + m_position); }

    int compare(const QString &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int compare(const QStringRef &s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    int compare(QLatin1String s, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    static int compare(const QStringRef &s1, const QString &s2,
                       Qt::CaseSensitivity = Qt::CaseSensitive);
    static int compare(const QStringRef &s1, const QStringRef &s2,
                       Qt::CaseSensitivity = Qt::CaseSensitive);
    static int compare(const QStringRef &s1, QLatin1String s2,
                       Qt::CaseSensitivity cs = Qt::CaseSensitive);

    int localeAwareCompare(const QString &s) const;
    int localeAwareCompare(const QStringRef &s) const;
    static int localeAwareCompare(const QStringRef &s1, const QString &s2);
    static int localeAwareCompare(const QStringRef &s1, const QStringRef &s2);
```



<!-- qstring.md ends here -->
