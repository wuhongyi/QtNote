<!-- qprogressbar.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:20:47 2017 (+0800)
;; Last-Updated: 日 12月 24 22:22:16 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qprogressbar


```cpp
// QProgressBar : public QWidget

public:
    enum Direction { TopToBottom, BottomToTop };

    explicit QProgressBar(QWidget *parent = 0);

    int minimum() const;
    int maximum() const;

    int value() const;

    virtual QString text() const;
    void setTextVisible(bool visible);
    bool isTextVisible() const;

    Qt::Alignment alignment() const;
    void setAlignment(Qt::Alignment alignment);

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    Qt::Orientation orientation() const;

    void setInvertedAppearance(bool invert);
    bool invertedAppearance(); //### Qt5 make const
    bool invertedAppearance() const { return const_cast<QProgressBar *>(this)->invertedAppearance(); }
    void setTextDirection(QProgressBar::Direction textDirection);
    QProgressBar::Direction textDirection(); //### Qt5 make const
    QProgressBar::Direction textDirection() const { return const_cast<QProgressBar *>(this)->textDirection(); }

    void setFormat(const QString &format);
    QString format() const;

public Q_SLOTS:
    void reset();
    void setRange(int minimum, int maximum);
    void setMinimum(int minimum);
    void setMaximum(int maximum);
    void setValue(int value);
    void setOrientation(Qt::Orientation);

Q_SIGNALS:
    void valueChanged(int value);

```

<!-- qprogressbar.md ends here -->
