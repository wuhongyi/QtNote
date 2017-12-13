<!-- qcoreapplication.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 20:56:05 2017 (+0800)
;; Last-Updated: 三 12月 13 20:57:37 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcoreapplication


```cpp
// QCoreApplication : public QObject

public:
    enum { ApplicationFlags = QT_VERSION
#if !defined(QT3_SUPPORT)
        | 0x01000000
#endif
    };

#if defined(QT_BUILD_CORE_LIB) || defined(qdoc)
    QCoreApplication(int &argc, char **argv); // ### Qt5 remove
#endif
#if !defined(qdoc)
    QCoreApplication(int &argc, char **argv, int
#if !defined(QT_BUILD_CORE_LIB)
        = ApplicationFlags
#endif
        );
#endif

    ~QCoreApplication();

#ifdef QT_DEPRECATED
    QT_DEPRECATED static int argc();
    QT_DEPRECATED static char **argv();
#endif
    static QStringList arguments();

    static void setAttribute(Qt::ApplicationAttribute attribute, bool on = true);
    static bool testAttribute(Qt::ApplicationAttribute attribute);

    static void setOrganizationDomain(const QString &orgDomain);
    static QString organizationDomain();
    static void setOrganizationName(const QString &orgName);
    static QString organizationName();
    static void setApplicationName(const QString &application);
    static QString applicationName();
    static void setApplicationVersion(const QString &version);
    static QString applicationVersion();

    static QCoreApplication *instance() { return self; }

    static int exec();
    static void processEvents(QEventLoop::ProcessEventsFlags flags = QEventLoop::AllEvents);
    static void processEvents(QEventLoop::ProcessEventsFlags flags, int maxtime);
    static void exit(int retcode=0);

    static bool sendEvent(QObject *receiver, QEvent *event);
    static void postEvent(QObject *receiver, QEvent *event);
    static void postEvent(QObject *receiver, QEvent *event, int priority);
    static void sendPostedEvents(QObject *receiver, int event_type);
    static void sendPostedEvents();
    static void removePostedEvents(QObject *receiver);
    static void removePostedEvents(QObject *receiver, int eventType);
    static bool hasPendingEvents();

    virtual bool notify(QObject *, QEvent *);

    static bool startingUp();
    static bool closingDown();

    static QString applicationDirPath();
    static QString applicationFilePath();
    static qint64 applicationPid();

#ifndef QT_NO_LIBRARY
    static void setLibraryPaths(const QStringList &);
    static QStringList libraryPaths();
    static void addLibraryPath(const QString &);
    static void removeLibraryPath(const QString &);
#endif // QT_NO_LIBRARY

#ifndef QT_NO_TRANSLATION
    static void installTranslator(QTranslator * messageFile);
    static void removeTranslator(QTranslator * messageFile);
#endif
    enum Encoding { CodecForTr, UnicodeUTF8, DefaultCodec = CodecForTr };
    // ### Qt 5: merge
    static QString translate(const char * context,
                             const char * key,
                             const char * disambiguation = 0,
                             Encoding encoding = CodecForTr);
    static QString translate(const char * context,
                             const char * key,
                             const char * disambiguation,
                             Encoding encoding, int n);

    static void flush();

#if defined(QT3_SUPPORT)
    inline QT3_SUPPORT void lock() {}
    inline QT3_SUPPORT void unlock(bool = true) {}
    inline QT3_SUPPORT bool locked() { return false; }
    inline QT3_SUPPORT bool tryLock() { return false; }

    static inline QT3_SUPPORT void processOneEvent()
    { processEvents(QEventLoop::WaitForMoreEvents); }
    static QT3_SUPPORT int enter_loop();
    static QT3_SUPPORT void exit_loop();
    static QT3_SUPPORT int loopLevel();
#endif

#if defined(Q_WS_WIN)
    virtual bool winEventFilter(MSG *message, long *result);
#endif

#if defined(Q_OS_UNIX) && !defined(Q_OS_SYMBIAN)
    static void watchUnixSignal(int signal, bool watch);
#endif

    typedef bool (*EventFilter)(void *message, long *result);
    EventFilter setEventFilter(EventFilter filter);
    bool filterEvent(void *message, long *result);

public Q_SLOTS:
    static void quit();

Q_SIGNALS:
    void aboutToQuit();
    void unixSignal(int);

```

<!-- qcoreapplication.md ends here -->
