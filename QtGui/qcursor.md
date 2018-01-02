<!-- qcursor.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 二 1月  2 22:37:59 2018 (+0800)
;; Last-Updated: 二 1月  2 22:41:13 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcursor

```cpp
#ifdef QT_NO_CURSOR

// QCursor

public:
    static QPoint pos();
    static void setPos(int x, int y);
    inline static void setPos(const QPoint &p) { setPos(p.x(), p.y()); }


#endif // QT_NO_CURSOR
```


```cpp
#ifndef QT_NO_CURSOR

//QCursor

public:
    QCursor();
    QCursor(Qt::CursorShape shape);
    QCursor(const QBitmap &bitmap, const QBitmap &mask, int hotX=-1, int hotY=-1);
    QCursor(const QPixmap &pixmap, int hotX=-1, int hotY=-1);
    QCursor(const QCursor &cursor);
    ~QCursor();
    QCursor &operator=(const QCursor &cursor);
#ifdef Q_COMPILER_RVALUE_REFS
    inline QCursor &operator=(QCursor &&other)
    { qSwap(d, other.d); return *this; }
#endif
    operator QVariant() const;

    Qt::CursorShape shape() const;
    void setShape(Qt::CursorShape newShape);

    const QBitmap *bitmap() const;
    const QBitmap *mask() const;
    QPixmap pixmap() const;
    QPoint hotSpot() const;

    static QPoint pos();
    static void setPos(int x, int y);
    inline static void setPos(const QPoint &p) { setPos(p.x(), p.y()); }
    
#ifdef qdoc
    HCURSOR_or_HANDLE handle() const;
    QCursor(HCURSOR cursor);
    QCursor(Qt::HANDLE cursor);
#endif


#ifndef qdoc
#if defined(Q_WS_WIN)
    HCURSOR handle() const;
    QCursor(HCURSOR cursor);
#elif defined(Q_WS_X11)
    Qt::HANDLE handle() const;
    QCursor(Qt::HANDLE cursor);
    static int x11Screen();
#elif defined(Q_WS_MAC)
    Qt::HANDLE handle() const;
#elif defined(Q_WS_QWS) || defined(Q_WS_QPA)
    int handle() const;
#elif defined(Q_OS_SYMBIAN)
    Qt::HANDLE handle() const;
#endif
#endif


#endif // QT_NO_CURSOR
```


<!-- qcursor.md ends here -->
