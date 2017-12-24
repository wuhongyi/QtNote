<!-- qactiongroup.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:58:36 2017 (+0800)
;; Last-Updated: 日 12月 24 22:59:40 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qactiongroup


```cpp
// QActionGroup : public QObject


public:
    explicit QActionGroup(QObject* parent);
    ~QActionGroup();

    QAction *addAction(QAction* a);
    QAction *addAction(const QString &text);
    QAction *addAction(const QIcon &icon, const QString &text);
    void removeAction(QAction *a);
    QList<QAction*> actions() const;

    QAction *checkedAction() const;
    bool isExclusive() const;
    bool isEnabled() const;
    bool isVisible() const;

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT void add(QAction* a) { addAction(a); }
    inline QT3_SUPPORT void addSeparator()
    { QAction *act = new QAction(this); act->setSeparator(true); addAction(act); }
    inline QT3_SUPPORT bool addTo(QWidget *w) { w->addActions(actions()); return true; }
#endif

public Q_SLOTS:
    void setEnabled(bool);
    inline void setDisabled(bool b) { setEnabled(!b); }
    void setVisible(bool);
    void setExclusive(bool);

Q_SIGNALS:
    void triggered(QAction *);
    QT_MOC_COMPAT void selected(QAction *);
    void hovered(QAction *);
```

<!-- qactiongroup.md ends here -->
