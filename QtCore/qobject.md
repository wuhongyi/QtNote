<!-- qobject.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 20:41:12 2017 (+0800)
;; Last-Updated: 三 12月 13 20:43:17 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qobject

```cpp
// QObject


public:
    Q_INVOKABLE explicit QObject(QObject *parent=0);
    virtual ~QObject();

    virtual bool event(QEvent *);
    virtual bool eventFilter(QObject *, QEvent *);

#ifdef qdoc
    static QString tr(const char *sourceText, const char *comment = 0, int n = -1);
    static QString trUtf8(const char *sourceText, const char *comment = 0, int n = -1);
    virtual const QMetaObject *metaObject() const;
    static const QMetaObject staticMetaObject;
#endif
#ifdef QT_NO_TRANSLATION
    static QString tr(const char *sourceText, const char *, int)
        { return QString::fromLatin1(sourceText); }
    static QString tr(const char *sourceText, const char * = 0)
        { return QString::fromLatin1(sourceText); }
#ifndef QT_NO_TEXTCODEC
    static QString trUtf8(const char *sourceText, const char *, int)
        { return QString::fromUtf8(sourceText); }
    static QString trUtf8(const char *sourceText, const char * = 0)
        { return QString::fromUtf8(sourceText); }
#endif
#endif //QT_NO_TRANSLATION

    QString objectName() const;
    void setObjectName(const QString &name);

    inline bool isWidgetType() const { return d_ptr->isWidget; }

    inline bool signalsBlocked() const { return d_ptr->blockSig; }
    bool blockSignals(bool b);

    QThread *thread() const;
    void moveToThread(QThread *thread);

    int startTimer(int interval);
    void killTimer(int id);

    template<typename T>
    inline T findChild(const QString &aName = QString()) const
    { return static_cast<T>(qt_qFindChild_helper(this, aName, reinterpret_cast<T>(0)->staticMetaObject)); }

    template<typename T>
    inline QList<T> findChildren(const QString &aName = QString()) const
    {
        QList<T> list;
        union {
            QList<T> *typedList;
            QList<void *> *voidList;
        } u;
        u.typedList = &list;
        qt_qFindChildren_helper(this, aName, 0, reinterpret_cast<T>(0)->staticMetaObject, u.voidList);
        return list;
    }

#ifndef QT_NO_REGEXP
    template<typename T>
    inline QList<T> findChildren(const QRegExp &re) const
    {
        QList<T> list;
        union {
            QList<T> *typedList;
            QList<void *> *voidList;
        } u;
        u.typedList = &list;
        qt_qFindChildren_helper(this, QString(), &re, reinterpret_cast<T>(0)->staticMetaObject, u.voidList);
        return list;
    }
#endif

#ifdef QT3_SUPPORT
    QT3_SUPPORT QObject *child(const char *objName, const char *inheritsClass = 0,
                   bool recursiveSearch = true) const;
    QT3_SUPPORT QObjectList queryList(const char *inheritsClass = 0,
                          const char *objName = 0,
                          bool regexpMatch = true,
                          bool recursiveSearch = true) const;
#endif
    inline const QObjectList &children() const { return d_ptr->children; }

    void setParent(QObject *);
    void installEventFilter(QObject *);
    void removeEventFilter(QObject *);


    static bool connect(const QObject *sender, const char *signal,
                        const QObject *receiver, const char *member, Qt::ConnectionType =
#ifdef qdoc
                        Qt::AutoConnection
#else
#ifdef QT3_SUPPORT
                        Qt::AutoCompatConnection
#else
                        Qt::AutoConnection
#endif
#endif
        );
        
    static bool connect(const QObject *sender, const QMetaMethod &signal,
                        const QObject *receiver, const QMetaMethod &method,
                        Qt::ConnectionType type = 
#ifdef qdoc
                        Qt::AutoConnection
#else
#ifdef QT3_SUPPORT
                        Qt::AutoCompatConnection
#else
                        Qt::AutoConnection
#endif
#endif
        );

    inline bool connect(const QObject *sender, const char *signal,
                        const char *member, Qt::ConnectionType type =
#ifdef qdoc
                        Qt::AutoConnection
#else
#ifdef QT3_SUPPORT
                        Qt::AutoCompatConnection
#else
                        Qt::AutoConnection
#endif
#endif
        ) const;

    static bool disconnect(const QObject *sender, const char *signal,
                           const QObject *receiver, const char *member);
    static bool disconnect(const QObject *sender, const QMetaMethod &signal,
                           const QObject *receiver, const QMetaMethod &member);
    inline bool disconnect(const char *signal = 0,
                           const QObject *receiver = 0, const char *member = 0)
        { return disconnect(this, signal, receiver, member); }
    inline bool disconnect(const QObject *receiver, const char *member = 0)
        { return disconnect(this, 0, receiver, member); }

    void dumpObjectTree();
    void dumpObjectInfo();

#ifndef QT_NO_PROPERTIES
    bool setProperty(const char *name, const QVariant &value);
    QVariant property(const char *name) const;
    QList<QByteArray> dynamicPropertyNames() const;
#endif // QT_NO_PROPERTIES

#ifndef QT_NO_USERDATA
    static uint registerUserData();
    void setUserData(uint id, QObjectUserData* data);
    QObjectUserData* userData(uint id) const;
#endif // QT_NO_USERDATA

Q_SIGNALS:
    void destroyed(QObject * = 0);

public:
    inline QObject *parent() const { return d_ptr->parent; }

    inline bool inherits(const char *classname) const
        { return const_cast<QObject *>(this)->qt_metacast(classname) != 0; }

public Q_SLOTS:
    void deleteLater();

```




```cpp
// QObjectData

public:
    virtual ~QObjectData() = 0;
    QObject *q_ptr;
    QObject *parent;
    QObjectList children;

    uint isWidget : 1;
    uint pendTimer : 1;
    uint blockSig : 1;
    uint wasDeleted : 1;
    uint ownObjectName : 1;
    uint sendChildEvents : 1;
    uint receiveChildEvents : 1;
    uint inEventHandler : 1; //only used if QT_JAMBI_BUILD
    uint inThreadChangeEvent : 1;
    uint hasGuards : 1; //true iff there is one or more QPointer attached to this object
    uint unused : 22;
    int postedEvents;
    QMetaObject *metaObject; // assert dynamic
```


<!-- qobject.md ends here -->
