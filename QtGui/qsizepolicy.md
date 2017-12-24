<!-- qsizepolicy.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:12:25 2017 (+0800)
;; Last-Updated: 日 12月 24 22:13:42 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qsizepolicy


```cpp
// QSizePolicy

public:
    enum PolicyFlag {
        GrowFlag = 1,
        ExpandFlag = 2,
        ShrinkFlag = 4,
        IgnoreFlag = 8
    };

    enum Policy {
        Fixed = 0,
        Minimum = GrowFlag,
        Maximum = ShrinkFlag,
        Preferred = GrowFlag | ShrinkFlag,
        MinimumExpanding = GrowFlag | ExpandFlag,
        Expanding = GrowFlag | ShrinkFlag | ExpandFlag,
        Ignored = ShrinkFlag | GrowFlag | IgnoreFlag
    };

    enum ControlType {
        DefaultType      = 0x00000001,
        ButtonBox        = 0x00000002,
        CheckBox         = 0x00000004,
        ComboBox         = 0x00000008,
        Frame            = 0x00000010,
        GroupBox         = 0x00000020,
        Label            = 0x00000040,
        Line             = 0x00000080,
        LineEdit         = 0x00000100,
        PushButton       = 0x00000200,
        RadioButton      = 0x00000400,
        Slider           = 0x00000800,
        SpinBox          = 0x00001000,
        TabWidget        = 0x00002000,
        ToolButton       = 0x00004000
    };
    Q_DECLARE_FLAGS(ControlTypes, ControlType)

    QSizePolicy() : data(0) { }

    // ### Qt 5: merge these two constructors (with type == DefaultType)
    QSizePolicy(Policy horizontal, Policy vertical)
        : data(horizontal | (vertical << HSize)) { }
    QSizePolicy(Policy horizontal, Policy vertical, ControlType type)
        : data(horizontal | (vertical << HSize)) { setControlType(type); }

    Policy horizontalPolicy() const { return static_cast<Policy>(data & HMask); }
    Policy verticalPolicy() const { return static_cast<Policy>((data & VMask) >> HSize); }
    ControlType controlType() const;

    void setHorizontalPolicy(Policy d) { data = (data & ~HMask) | d; }
    void setVerticalPolicy(Policy d) { data = (data & ~(HMask << HSize)) | (d << HSize); }
    void setControlType(ControlType type);

    Qt::Orientations expandingDirections() const {
        Qt::Orientations result;
        if (verticalPolicy() & ExpandFlag)
            result |= Qt::Vertical;
        if (horizontalPolicy() & ExpandFlag)
            result |= Qt::Horizontal;
        return result;
    }

    void setHeightForWidth(bool b) { data = b ? (data | (1 << 2*HSize)) : (data & ~(1 << 2*HSize));  }
    bool hasHeightForWidth() const { return data & (1 << 2*HSize); }
    void setWidthForHeight(bool b) { data = b ? (data | (1 << (WFHShift))) : (data & ~(1 << (WFHShift)));  }
    bool hasWidthForHeight() const { return data & (1 << (WFHShift)); }

    bool operator==(const QSizePolicy& s) const { return data == s.data; }
    bool operator!=(const QSizePolicy& s) const { return data != s.data; }
    operator QVariant() const; // implemented in qabstractlayout.cpp

    int horizontalStretch() const { return data >> 24; }
    int verticalStretch() const { return (data >> 16) & 0xff; }
    void setHorizontalStretch(uchar stretchFactor) { data = (data&0x00ffffff) | (uint(stretchFactor)<<24); }
    void setVerticalStretch(uchar stretchFactor) { data = (data&0xff00ffff) | (uint(stretchFactor)<<16); }

    void transpose();

#ifdef QT3_SUPPORT
    typedef Policy SizeType;
#ifndef qdoc
    typedef Qt::Orientations ExpandData;
    enum {
        NoDirection = 0,
        Horizontally = 1,
        Vertically = 2,
        BothDirections = Horizontally | Vertically
    };
#else
    enum ExpandData {
        NoDirection = 0x0,
        Horizontally = 0x1,
        Vertically = 0x2,
        BothDirections = 0x3
    };
#endif // qdoc

    inline QT3_SUPPORT bool mayShrinkHorizontally() const
        { return horizontalPolicy() & ShrinkFlag; }
    inline QT3_SUPPORT bool mayShrinkVertically() const { return verticalPolicy() & ShrinkFlag; }
    inline QT3_SUPPORT bool mayGrowHorizontally() const { return horizontalPolicy() & GrowFlag; }
    inline QT3_SUPPORT bool mayGrowVertically() const { return verticalPolicy() & GrowFlag; }
    inline QT3_SUPPORT Qt::Orientations expanding() const { return expandingDirections(); }

    QT3_SUPPORT_CONSTRUCTOR QSizePolicy(Policy hor, Policy ver, bool hfw)
        : data(hor | (ver<<HSize) | (hfw ? (1U<<2*HSize) : 0)) { }

    QT3_SUPPORT_CONSTRUCTOR QSizePolicy(Policy hor, Policy ver, uchar hors, uchar vers, bool hfw = false)
        : data(hor | (ver<<HSize) | (hfw ? (1U<<2*HSize) : 0)) {
        setHorizontalStretch(hors);
        setVerticalStretch(vers);
    }

    inline QT3_SUPPORT Policy horData() const { return static_cast<Policy>(data & HMask); }
    inline QT3_SUPPORT Policy verData() const { return static_cast<Policy>((data & VMask) >> HSize); }
    inline QT3_SUPPORT void setHorData(Policy d) { setHorizontalPolicy(d); }
    inline QT3_SUPPORT void setVerData(Policy d) { setVerticalPolicy(d); }

    inline QT3_SUPPORT uint horStretch() const { return horizontalStretch(); }
    inline QT3_SUPPORT uint verStretch() const { return verticalStretch(); }
    inline QT3_SUPPORT void setHorStretch(uchar sf) { setHorizontalStretch(sf); }
    inline QT3_SUPPORT void setVerStretch(uchar sf) { setVerticalStretch(sf); }
#endif
```

<!-- qsizepolicy.md ends here -->
