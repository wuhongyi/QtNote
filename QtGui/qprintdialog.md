<!-- qprintdialog.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:22:20 2017 (+0800)
;; Last-Updated: 日 12月 24 22:24:25 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qprintdialog


```cpp
// QUnixPrintWidget : public QWidget


public:
    QUnixPrintWidget(QPrinter *printer, QWidget *parent = 0);
    ~QUnixPrintWidget();
    void updatePrinter();
```


```cpp
// QPrintDialog : public QAbstractPrintDialog


public:
    explicit QPrintDialog(QPrinter *printer, QWidget *parent = 0);
    explicit QPrintDialog(QWidget *parent = 0);
    ~QPrintDialog();

    int exec();
#if defined (Q_OS_UNIX) && !defined(QTOPIA_PRINTDIALOG) && !defined(Q_WS_MAC)
    virtual void accept();
#endif
    void done(int result);

#if defined (Q_OS_UNIX) && defined (QT3_SUPPORT)
    QT3_SUPPORT void setPrinter(QPrinter *, bool = false);
    QT3_SUPPORT QPrinter *printer() const;
    QT3_SUPPORT void addButton(QPushButton *button);
#endif

    void setOption(PrintDialogOption option, bool on = true);
    bool testOption(PrintDialogOption option) const;
    void setOptions(PrintDialogOptions options);
    PrintDialogOptions options() const;

#if defined(Q_OS_UNIX) || defined(Q_WS_MAC) || defined(Q_OS_WIN)
    void setVisible(bool visible);
#endif

#ifdef Q_NO_USING_KEYWORD
#ifndef Q_QDOC
    void open() { QDialog::open(); }
#endif
#else
    using QDialog::open;
#endif
    void open(QObject *receiver, const char *member);

#ifdef qdoc
    QPrinter *printer();
#endif

#ifdef QTOPIA_PRINTDIALOG
public:
    bool eventFilter(QObject *, QEvent *);
#endif

#ifdef Q_NO_USING_KEYWORD
#ifndef Q_QDOC
    void accepted() { QDialog::accepted(); }
#endif
#else
    using QDialog::accepted;
#endif

Q_SIGNALS:
    void accepted(QPrinter *printer);
```

<!-- qprintdialog.md ends here -->
