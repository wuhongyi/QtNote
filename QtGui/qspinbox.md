<!-- qspinbox.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 二 1月  2 22:13:46 2018 (+0800)
;; Last-Updated: 二 1月  2 22:15:47 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qspinbox


```cpp
// QSpinBox : public QAbstractSpinBox

public:
    explicit QSpinBox(QWidget *parent = 0);
#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QSpinBox(QWidget *parent, const char *name);
    QT3_SUPPORT_CONSTRUCTOR QSpinBox(int min, int max, int step, QWidget *parent,
                                     const char *name = 0);
#endif

    int value() const;

    QString prefix() const;
    void setPrefix(const QString &prefix);

    QString suffix() const;
    void setSuffix(const QString &suffix);

    QString cleanText() const;

    int singleStep() const;
    void setSingleStep(int val);

    int minimum() const;
    void setMinimum(int min);

    int maximum() const;
    void setMaximum(int max);

    void setRange(int min, int max);

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT void setLineStep(int step) { setSingleStep(step); }
    inline QT3_SUPPORT void setMaxValue(int val) { setMaximum(val); }
    inline QT3_SUPPORT void setMinValue(int val) { setMinimum(val); }
    inline QT3_SUPPORT int maxValue() const { return maximum(); }
    inline QT3_SUPPORT int minValue() const { return minimum(); }
#endif



public Q_SLOTS:
    void setValue(int val);

Q_SIGNALS:
    void valueChanged(int);
    void valueChanged(const QString &);

```


```cpp
// QDoubleSpinBox : public QAbstractSpinBox


public:
    explicit QDoubleSpinBox(QWidget *parent = 0);

    double value() const;

    QString prefix() const;
    void setPrefix(const QString &prefix);

    QString suffix() const;
    void setSuffix(const QString &suffix);

    QString cleanText() const;

    double singleStep() const;
    void setSingleStep(double val);

    double minimum() const;
    void setMinimum(double min);

    double maximum() const;
    void setMaximum(double max);

    void setRange(double min, double max);

    int decimals() const;
    void setDecimals(int prec);

    virtual QValidator::State validate(QString &input, int &pos) const;
    virtual double valueFromText(const QString &text) const;
    virtual QString textFromValue(double val) const;
    virtual void fixup(QString &str) const;

public Q_SLOTS:
    void setValue(double val);

Q_SIGNALS:
    void valueChanged(double);
    void valueChanged(const QString &);

```


<!-- qspinbox.md ends here -->
