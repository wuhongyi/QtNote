<!-- qstatusbar.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 二 1月  2 23:10:10 2018 (+0800)
;; Last-Updated: 二 1月  2 23:11:06 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qstatusbar


```cpp
// QStatusBar: public QWidget


public:
    explicit QStatusBar(QWidget* parent=0);
    virtual ~QStatusBar();

    void addWidget(QWidget *widget, int stretch = 0);
    int insertWidget(int index, QWidget *widget, int stretch = 0);
    void addPermanentWidget(QWidget *widget, int stretch = 0);
    int insertPermanentWidget(int index, QWidget *widget, int stretch = 0);
    void removeWidget(QWidget *widget);

    void setSizeGripEnabled(bool);
    bool isSizeGripEnabled() const;

    QString currentMessage() const;

public Q_SLOTS:
    void showMessage(const QString &text, int timeout = 0);
    void clearMessage();

#ifdef QT3_SUPPORT
public:
    QT3_SUPPORT_CONSTRUCTOR QStatusBar(QWidget* parent, const char* name);
    QT3_SUPPORT void addWidget(QWidget *w, int stretch, bool permanent)
        { if (permanent) addPermanentWidget(w, stretch); else addWidget(w, stretch); }
public Q_SLOTS:
    inline QT_MOC_COMPAT void message(const QString &text, int timeout = 0) { showMessage(text, timeout); }
    inline QT_MOC_COMPAT void clear() { clearMessage(); }
#endif

Q_SIGNALS:
    void messageChanged(const QString &text);



```

<!-- qstatusbar.md ends here -->
