<!-- qstringlist.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 11:57:28 2017 (+0800)
;; Last-Updated: 日 12月 24 11:58:24 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qstringlist


```cpp
// QStringList : public QList<QString>

public:
    inline QStringList() { }
    inline explicit QStringList(const QString &i) { append(i); }
    inline QStringList(const QStringList &l) : QList<QString>(l) { }
    inline QStringList(const QList<QString> &l) : QList<QString>(l) { }
#ifdef Q_COMPILER_INITIALIZER_LISTS
    inline QStringList(std::initializer_list<QString> args) : QList<QString>(args) { }
#endif

    inline void sort();
    inline int removeDuplicates();

    inline QString join(const QString &sep) const;

    inline QStringList filter(const QString &str, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;
    inline QBool contains(const QString &str, Qt::CaseSensitivity cs = Qt::CaseSensitive) const;

    inline QStringList &replaceInStrings(const QString &before, const QString &after, Qt::CaseSensitivity cs = Qt::CaseSensitive);

    inline QStringList operator+(const QStringList &other) const
    { QStringList n = *this; n += other; return n; }
    inline QStringList &operator<<(const QString &str)
    { append(str); return *this; }
    inline QStringList &operator<<(const QStringList &l)
    { *this += l; return *this; }

#ifndef QT_NO_REGEXP
    inline QStringList filter(const QRegExp &rx) const;
    inline QStringList &replaceInStrings(const QRegExp &rx, const QString &after);
    inline int indexOf(const QRegExp &rx, int from = 0) const;
    inline int lastIndexOf(const QRegExp &rx, int from = -1) const;
    inline int indexOf(QRegExp &rx, int from = 0) const;
    inline int lastIndexOf(QRegExp &rx, int from = -1) const;
#endif
#if !defined(Q_NO_USING_KEYWORD)
    using QList<QString>::indexOf;
    using QList<QString>::lastIndexOf;
#else
    inline int indexOf(const QString &str, int from = 0) const
    { return QList<QString>::indexOf(str, from); }
    inline int lastIndexOf(const QString &str, int from = -1) const
    { return QList<QString>::lastIndexOf(str, from); }
#endif
#ifdef QT3_SUPPORT
    static inline QT3_SUPPORT QStringList split(const QString &sep, const QString &str, bool allowEmptyEntries = false);
    static inline QT3_SUPPORT QStringList split(const QChar &sep, const QString &str, bool allowEmptyEntries = false);
    inline QT3_SUPPORT QStringList grep(const QString &str, bool cs = true) const
        { return filter(str, cs ? Qt::CaseSensitive : Qt::CaseInsensitive); }

#ifndef QT_NO_REGEXP
    static inline QT3_SUPPORT QStringList split(const QRegExp &sep, const QString &str, bool allowEmptyEntries = false);
    inline QT3_SUPPORT QStringList grep(const QRegExp &rx) const { return filter(rx); }
    inline QT3_SUPPORT QStringList &gres(const QRegExp &rx, const QString &after)
        { return replaceInStrings(rx, after); }
#endif
    inline QT3_SUPPORT QStringList &gres(const QString &before, const QString &after, bool cs = true)
        { return replaceInStrings(before, after, cs ? Qt::CaseSensitive : Qt::CaseInsensitive); }

    inline Iterator QT3_SUPPORT fromLast() { return (isEmpty() ? end() : --end()); }
    inline ConstIterator QT3_SUPPORT fromLast() const { return (isEmpty() ? end() : --end()); }
#endif
```

<!-- qstringlist.md ends here -->
