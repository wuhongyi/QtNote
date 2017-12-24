<!-- qiodevice.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 21:27:02 2017 (+0800)
;; Last-Updated: 日 12月 24 21:29:48 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qiodevice

```cpp
// QIODevice
// #ifndef QT_NO_QOBJECT
//     : public QObject
// #endif


public:
    enum OpenModeFlag {
        NotOpen = 0x0000,
        ReadOnly = 0x0001,
        WriteOnly = 0x0002,
        ReadWrite = ReadOnly | WriteOnly,
        Append = 0x0004,
        Truncate = 0x0008,
        Text = 0x0010,
        Unbuffered = 0x0020
    };
    Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)

    QIODevice();
#ifndef QT_NO_QOBJECT
    explicit QIODevice(QObject *parent);
#endif
    virtual ~QIODevice();

    OpenMode openMode() const;

    void setTextModeEnabled(bool enabled);
    bool isTextModeEnabled() const;

    bool isOpen() const;
    bool isReadable() const;
    bool isWritable() const;
    virtual bool isSequential() const;

    virtual bool open(OpenMode mode);
    virtual void close();

    // ### Qt 5: pos() and seek() should not be virtual, and
    // ### seek() should call a virtual seekData() function.
    virtual qint64 pos() const;
    virtual qint64 size() const;
    virtual bool seek(qint64 pos);
    virtual bool atEnd() const;
    virtual bool reset();

    virtual qint64 bytesAvailable() const;
    virtual qint64 bytesToWrite() const;

    qint64 read(char *data, qint64 maxlen);
    QByteArray read(qint64 maxlen);
    QByteArray readAll();
    qint64 readLine(char *data, qint64 maxlen);
    QByteArray readLine(qint64 maxlen = 0);
    virtual bool canReadLine() const;

    qint64 write(const char *data, qint64 len);
    qint64 write(const char *data);
    inline qint64 write(const QByteArray &data)
    { return write(data.constData(), data.size()); }

    qint64 peek(char *data, qint64 maxlen);
    QByteArray peek(qint64 maxlen);

    virtual bool waitForReadyRead(int msecs);
    virtual bool waitForBytesWritten(int msecs);

    void ungetChar(char c);
    bool putChar(char c);
    bool getChar(char *c);

    QString errorString() const;

#ifndef QT_NO_QOBJECT
Q_SIGNALS:
    void readyRead();
    void bytesWritten(qint64 bytes);
    void aboutToClose();
    void readChannelFinished();
#endif


#ifdef QT3_SUPPORT
public:
    typedef qint64 Offset;

    inline QT3_SUPPORT int flags() const { return static_cast<int>(openMode()); }
    inline QT3_SUPPORT int mode() const { return static_cast<int>(openMode()); }
    inline QT3_SUPPORT int state() const;

    inline QT3_SUPPORT bool isDirectAccess() const { return !isSequential(); }
    inline QT3_SUPPORT bool isSequentialAccess() const { return isSequential(); }
    inline QT3_SUPPORT bool isCombinedAccess() const { return false; }
    inline QT3_SUPPORT bool isBuffered() const { return true; }
    inline QT3_SUPPORT bool isRaw() const { return false; }
    inline QT3_SUPPORT bool isSynchronous() const { return true; }
    inline QT3_SUPPORT bool isAsynchronous() const { return false; }
    inline QT3_SUPPORT bool isTranslated() const { return (openMode() & Text) != 0; }
    inline QT3_SUPPORT bool isInactive() const { return !isOpen(); }

    typedef int Status;
    QT3_SUPPORT Status status() const;
    QT3_SUPPORT void resetStatus();

    inline QT3_SUPPORT Offset at() const { return pos(); }
    inline QT3_SUPPORT bool at(Offset offset) { return seek(offset); }

    inline QT3_SUPPORT qint64 readBlock(char *data, quint64 maxlen) { return read(data, maxlen); }
    inline QT3_SUPPORT qint64 writeBlock(const char *data, quint64 len) { return write(data, len); }
    inline QT3_SUPPORT qint64 writeBlock(const QByteArray &data) { return write(data); }

    inline QT3_SUPPORT int getch() { char c; return getChar(&c) ? int(uchar(c)) : -1; }
    inline QT3_SUPPORT int putch(int c) { return putChar(char(c)) ? int(uchar(c)) : -1; }
    inline QT3_SUPPORT int ungetch(int c) { ungetChar(uchar(c)); return c; }
#endif
```


<!-- qiodevice.md ends here -->
