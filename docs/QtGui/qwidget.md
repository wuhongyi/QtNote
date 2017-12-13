<!-- qwidget.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 20:20:37 2017 (+0800)
;; Last-Updated: 三 12月 13 20:36:58 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 2
;; URL: http://wuhongyi.cn -->

# qwidget

```cpp
// QWidget : public QObject, public QPaintDevice

public:
    enum RenderFlag {
        DrawWindowBackground = 0x1,
        DrawChildren = 0x2,
        IgnoreMask = 0x4
    };
    Q_DECLARE_FLAGS(RenderFlags, RenderFlag)

    explicit QWidget(QWidget* parent = 0, Qt::WindowFlags f = 0);
#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QWidget(QWidget* parent, const char *name, Qt::WindowFlags f = 0);
#endif
    ~QWidget();

    int devType() const;

    WId winId() const;
    void createWinId(); // internal, going away
    inline WId internalWinId() const { return data->winid; }
    WId effectiveWinId() const;

    // GUI style setting
    QStyle *style() const;
    void setStyle(QStyle *);
    // Widget types and states

    bool isTopLevel() const;
    bool isWindow() const;

    bool isModal() const;
    Qt::WindowModality windowModality() const;
    void setWindowModality(Qt::WindowModality windowModality);

    bool isEnabled() const;
    bool isEnabledTo(QWidget*) const;
    bool isEnabledToTLW() const;

public Q_SLOTS:
    void setEnabled(bool);
    void setDisabled(bool);
    void setWindowModified(bool);

    // Widget coordinates

public:
    QRect frameGeometry() const;
    const QRect &geometry() const;
    QRect normalGeometry() const;

    int x() const;
    int y() const;
    QPoint pos() const;
    QSize frameSize() const;
    QSize size() const;
    inline int width() const;
    inline int height() const;
    inline QRect rect() const;
    QRect childrenRect() const;
    QRegion childrenRegion() const;

    QSize minimumSize() const;
    QSize maximumSize() const;
    int minimumWidth() const;
    int minimumHeight() const;
    int maximumWidth() const;
    int maximumHeight() const;
    void setMinimumSize(const QSize &);
    void setMinimumSize(int minw, int minh);
    void setMaximumSize(const QSize &);
    void setMaximumSize(int maxw, int maxh);
    void setMinimumWidth(int minw);
    void setMinimumHeight(int minh);
    void setMaximumWidth(int maxw);
    void setMaximumHeight(int maxh);

#ifdef Q_QDOC
    void setupUi(QWidget *widget);
#endif

    QSize sizeIncrement() const;
    void setSizeIncrement(const QSize &);
    void setSizeIncrement(int w, int h);
    QSize baseSize() const;
    void setBaseSize(const QSize &);
    void setBaseSize(int basew, int baseh);

    void setFixedSize(const QSize &);
    void setFixedSize(int w, int h);
    void setFixedWidth(int w);
    void setFixedHeight(int h);

    // Widget coordinate mapping

    QPoint mapToGlobal(const QPoint &) const;
    QPoint mapFromGlobal(const QPoint &) const;
    QPoint mapToParent(const QPoint &) const;
    QPoint mapFromParent(const QPoint &) const;
    QPoint mapTo(QWidget *, const QPoint &) const;
    QPoint mapFrom(QWidget *, const QPoint &) const;

    QWidget *window() const;
    QWidget *nativeParentWidget() const;
    inline QWidget *topLevelWidget() const { return window(); }

    // Widget appearance functions
    const QPalette &palette() const;
    void setPalette(const QPalette &);

    void setBackgroundRole(QPalette::ColorRole);
    QPalette::ColorRole backgroundRole() const;

    void setForegroundRole(QPalette::ColorRole);
    QPalette::ColorRole foregroundRole() const;

    const QFont &font() const;
    void setFont(const QFont &);
    QFontMetrics fontMetrics() const;
    QFontInfo fontInfo() const;

#ifndef QT_NO_CURSOR
    QCursor cursor() const;
    void setCursor(const QCursor &);
    void unsetCursor();
#endif

    void setMouseTracking(bool enable);
    bool hasMouseTracking() const;
    bool underMouse() const;

    void setMask(const QBitmap &);
    void setMask(const QRegion &);
    QRegion mask() const;
    void clearMask();

    void render(QPaintDevice *target, const QPoint &targetOffset = QPoint(),
                const QRegion &sourceRegion = QRegion(),
                RenderFlags renderFlags = RenderFlags(DrawWindowBackground | DrawChildren));

    void render(QPainter *painter, const QPoint &targetOffset = QPoint(),
                const QRegion &sourceRegion = QRegion(),
                RenderFlags renderFlags = RenderFlags(DrawWindowBackground | DrawChildren));

#ifndef QT_NO_GRAPHICSEFFECT
    QGraphicsEffect *graphicsEffect() const;
    void setGraphicsEffect(QGraphicsEffect *effect);
#endif //QT_NO_GRAPHICSEFFECT

#ifndef QT_NO_GESTURES
    void grabGesture(Qt::GestureType type, Qt::GestureFlags flags = Qt::GestureFlags());
    void ungrabGesture(Qt::GestureType type);
#endif

public Q_SLOTS:
    void setWindowTitle(const QString &);
#ifndef QT_NO_STYLE_STYLESHEET
    void setStyleSheet(const QString& styleSheet);
#endif
public:
#ifndef QT_NO_STYLE_STYLESHEET
    QString styleSheet() const;
#endif
    QString windowTitle() const;
    void setWindowIcon(const QIcon &icon);
    QIcon windowIcon() const;
    void setWindowIconText(const QString &);
    QString windowIconText() const;
    void setWindowRole(const QString &);
    QString windowRole() const;
    void setWindowFilePath(const QString &filePath);
    QString windowFilePath() const;

    void setWindowOpacity(qreal level);
    qreal windowOpacity() const;

    bool isWindowModified() const;
#ifndef QT_NO_TOOLTIP
    void setToolTip(const QString &);
    QString toolTip() const;
#endif
#ifndef QT_NO_STATUSTIP
    void setStatusTip(const QString &);
    QString statusTip() const;
#endif
#ifndef QT_NO_WHATSTHIS
    void setWhatsThis(const QString &);
    QString whatsThis() const;
#endif
#ifndef QT_NO_ACCESSIBILITY
    QString accessibleName() const;
    void setAccessibleName(const QString &name);
    QString accessibleDescription() const;
    void setAccessibleDescription(const QString &description);
#endif

    void setLayoutDirection(Qt::LayoutDirection direction);
    Qt::LayoutDirection layoutDirection() const;
    void unsetLayoutDirection();

    void setLocale(const QLocale &locale);
    QLocale locale() const;
    void unsetLocale();

    inline bool isRightToLeft() const { return layoutDirection() == Qt::RightToLeft; }
    inline bool isLeftToRight() const { return layoutDirection() == Qt::LeftToRight; }

public Q_SLOTS:
    inline void setFocus() { setFocus(Qt::OtherFocusReason); }

public:
    bool isActiveWindow() const;
    void activateWindow();
    void clearFocus();

    void setFocus(Qt::FocusReason reason);
    Qt::FocusPolicy focusPolicy() const;
    void setFocusPolicy(Qt::FocusPolicy policy);
    bool hasFocus() const;
    static void setTabOrder(QWidget *, QWidget *);
    void setFocusProxy(QWidget *);
    QWidget *focusProxy() const;
    Qt::ContextMenuPolicy contextMenuPolicy() const;
    void setContextMenuPolicy(Qt::ContextMenuPolicy policy);

    // Grab functions
    void grabMouse();
#ifndef QT_NO_CURSOR
    void grabMouse(const QCursor &);
#endif
    void releaseMouse();
    void grabKeyboard();
    void releaseKeyboard();
#ifndef QT_NO_SHORTCUT
    int grabShortcut(const QKeySequence &key, Qt::ShortcutContext context = Qt::WindowShortcut);
    void releaseShortcut(int id);
    void setShortcutEnabled(int id, bool enable = true);
    void setShortcutAutoRepeat(int id, bool enable = true);
#endif
    static QWidget *mouseGrabber();
    static QWidget *keyboardGrabber();

    // Update/refresh functions
    inline bool updatesEnabled() const;
    void setUpdatesEnabled(bool enable);

#if 0 //def Q_WS_QWS
    void repaintUnclipped(const QRegion &, bool erase = true);
#endif

#ifndef QT_NO_GRAPHICSVIEW
    QGraphicsProxyWidget *graphicsProxyWidget() const;
#endif

public Q_SLOTS:
    void update();
    void repaint();

public:
    inline void update(int x, int y, int w, int h);
    void update(const QRect&);
    void update(const QRegion&);

    void repaint(int x, int y, int w, int h);
    void repaint(const QRect &);
    void repaint(const QRegion &);

public Q_SLOTS:
    // Widget management functions

    virtual void setVisible(bool visible);
    inline void setHidden(bool hidden) { setVisible(!hidden); }
#ifndef Q_WS_WINCE
    inline void show() { setVisible(true); }
#else
    void show();
#endif
    inline void hide() { setVisible(false); }
    inline QT_MOC_COMPAT void setShown(bool shown) { setVisible(shown); }

    void showMinimized();
    void showMaximized();
    void showFullScreen();
    void showNormal();

    bool close();
    void raise();
    void lower();

public:
    void stackUnder(QWidget*);
    void move(int x, int y);
    void move(const QPoint &);
    void resize(int w, int h);
    void resize(const QSize &);
    inline void setGeometry(int x, int y, int w, int h);
    void setGeometry(const QRect &);
    QByteArray saveGeometry() const;
    bool restoreGeometry(const QByteArray &geometry);
    void adjustSize();
    bool isVisible() const;
    bool isVisibleTo(QWidget*) const;
    // ### Qt 5: bool isVisibleTo(_const_ QWidget *) const
    inline bool isHidden() const;

    bool isMinimized() const;
    bool isMaximized() const;
    bool isFullScreen() const;

    Qt::WindowStates windowState() const;
    void setWindowState(Qt::WindowStates state);
    void overrideWindowState(Qt::WindowStates state);

    virtual QSize sizeHint() const;
    virtual QSize minimumSizeHint() const;

    QSizePolicy sizePolicy() const;
    void setSizePolicy(QSizePolicy);
    inline void setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical);
    virtual int heightForWidth(int) const;

    QRegion visibleRegion() const;

    void setContentsMargins(int left, int top, int right, int bottom);
    void setContentsMargins(const QMargins &margins);
    void getContentsMargins(int *left, int *top, int *right, int *bottom) const;
    QMargins contentsMargins() const;

    QRect contentsRect() const;

public:
    QLayout *layout() const;
    void setLayout(QLayout *);
    void updateGeometry();

    void setParent(QWidget *parent);
    void setParent(QWidget *parent, Qt::WindowFlags f);

    void scroll(int dx, int dy);
    void scroll(int dx, int dy, const QRect&);

    // Misc. functions

    QWidget *focusWidget() const;
    QWidget *nextInFocusChain() const;
    QWidget *previousInFocusChain() const;

    // drag and drop
    bool acceptDrops() const;
    void setAcceptDrops(bool on);

#ifndef QT_NO_ACTION
    //actions
    void addAction(QAction *action);
    void addActions(QList<QAction*> actions);
    void insertAction(QAction *before, QAction *action);
    void insertActions(QAction *before, QList<QAction*> actions);
    void removeAction(QAction *action);
    QList<QAction*> actions() const;
#endif

    QWidget *parentWidget() const;

    void setWindowFlags(Qt::WindowFlags type);
    inline Qt::WindowFlags windowFlags() const;
    void overrideWindowFlags(Qt::WindowFlags type);

    inline Qt::WindowType windowType() const;

    static QWidget *find(WId);
#ifdef QT3_SUPPORT
    static QT3_SUPPORT QWidgetMapper *wmapper();
#endif
    inline QWidget *childAt(int x, int y) const;
    QWidget *childAt(const QPoint &p) const;

#if defined(Q_WS_X11)
    const QX11Info &x11Info() const;
    Qt::HANDLE x11PictureHandle() const;
#endif

#if defined(Q_WS_MAC)
    Qt::HANDLE macQDHandle() const;
    Qt::HANDLE macCGHandle() const;
#endif

#if defined(Q_WS_WIN)
    HDC getDC() const;
    void releaseDC(HDC) const;
#else
    Qt::HANDLE handle() const;
#endif

    void setAttribute(Qt::WidgetAttribute, bool on = true);
    inline bool testAttribute(Qt::WidgetAttribute) const;

    QPaintEngine *paintEngine() const;

    void ensurePolished() const;
#ifndef QT_NO_IM
    QInputContext *inputContext();
    void setInputContext(QInputContext *);
#endif
    bool isAncestorOf(const QWidget *child) const;

#ifdef QT_KEYPAD_NAVIGATION
    bool hasEditFocus() const;
    void setEditFocus(bool on);
#endif

    bool autoFillBackground() const;
    void setAutoFillBackground(bool enabled);

    void setWindowSurface(QWindowSurface *surface);
    QWindowSurface *windowSurface() const;

#if defined(Q_WS_QPA)
    void setPlatformWindow(QPlatformWindow *window);
    QPlatformWindow *platformWindow() const;

    void setPlatformWindowFormat(const QPlatformWindowFormat &format);
    QPlatformWindowFormat platformWindowFormat() const;

    friend class QDesktopScreenWidget;
#endif

Q_SIGNALS:
    void customContextMenuRequested(const QPoint &pos);
```




```cpp
// QWidgetData

public:
    WId winid;
    uint widget_attributes;
    Qt::WindowFlags window_flags;
    uint window_state : 4;
    uint focus_policy : 4;
    uint sizehint_forced :1;
    uint is_closing :1;
    uint in_show : 1;
    uint in_set_window_state : 1;
    mutable uint fstrut_dirty : 1;
    uint context_menu_policy : 3;
    uint window_modality : 2;
    uint in_destructor : 1;
    uint unused : 13;
    QRect crect;
    mutable QPalette pal;
    QFont fnt;
#if defined(Q_WS_QWS)
//    QRegion req_region;                 // Requested region
//     mutable QRegion paintable_region;   // Paintable region
//     mutable bool paintable_region_dirty;// needs to be recalculated
//     mutable QRegion alloc_region;       // Allocated region
//     mutable bool alloc_region_dirty;    // needs to be recalculated
//     mutable int overlapping_children;   // Handle overlapping children

    int alloc_region_index;
//    int alloc_region_revision;
#endif
```


<!-- qwidget.md ends here -->
