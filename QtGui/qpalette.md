<!-- qpalette.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 22:24:28 2017 (+0800)
;; Last-Updated: 日 12月 24 22:37:26 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qpalette


```cpp
// QPalette


public:
    QPalette();
    QPalette(const QColor &button);
    QPalette(Qt::GlobalColor button);
    QPalette(const QColor &button, const QColor &window);
    QPalette(const QBrush &windowText, const QBrush &button, const QBrush &light,
             const QBrush &dark, const QBrush &mid, const QBrush &text,
             const QBrush &bright_text, const QBrush &base, const QBrush &window);
    QPalette(const QColor &windowText, const QColor &window, const QColor &light,
             const QColor &dark, const QColor &mid, const QColor &text, const QColor &base);
#ifdef QT3_SUPPORT
    QT3_SUPPORT_CONSTRUCTOR QPalette(const QColorGroup &active, const QColorGroup &disabled, const QColorGroup &inactive);
#endif
    QPalette(const QPalette &palette);
    ~QPalette();
    QPalette &operator=(const QPalette &palette);
#ifdef Q_COMPILER_RVALUE_REFS
    inline QPalette &operator=(QPalette &&other)
    {
        resolve_mask = other.resolve_mask;
        current_group = other.current_group;
        qSwap(d, other.d); return *this;
    }
#endif
    operator QVariant() const;

    // Do not change the order, the serialization format depends on it
    enum ColorGroup { Active, Disabled, Inactive, NColorGroups, Current, All, Normal = Active };
    enum ColorRole { WindowText, Button, Light, Midlight, Dark, Mid,
                     Text, BrightText, ButtonText, Base, Window, Shadow,
                     Highlight, HighlightedText,
                     Link, LinkVisited, // ### Qt 5: remove
                     AlternateBase,
                     NoRole, // ### Qt 5: value should be 0 or -1
                     ToolTipBase, ToolTipText,
                     NColorRoles = ToolTipText + 1,
                     Foreground = WindowText, Background = Window // ### Qt 5: remove
                   };

    inline ColorGroup currentColorGroup() const { return static_cast<ColorGroup>(current_group); }
    inline void setCurrentColorGroup(ColorGroup cg) { current_group = cg; }

    inline const QColor &color(ColorGroup cg, ColorRole cr) const
    { return brush(cg, cr).color(); }
    const QBrush &brush(ColorGroup cg, ColorRole cr) const;
    inline void setColor(ColorGroup cg, ColorRole cr, const QColor &color);
    inline void setColor(ColorRole cr, const QColor &color);
    inline void setBrush(ColorRole cr, const QBrush &brush);
    bool isBrushSet(ColorGroup cg, ColorRole cr) const;
    void setBrush(ColorGroup cg, ColorRole cr, const QBrush &brush);
    void setColorGroup(ColorGroup cr, const QBrush &windowText, const QBrush &button,
                       const QBrush &light, const QBrush &dark, const QBrush &mid,
                       const QBrush &text, const QBrush &bright_text, const QBrush &base,
                       const QBrush &window);
    bool isEqual(ColorGroup cr1, ColorGroup cr2) const;

    inline const QColor &color(ColorRole cr) const { return color(Current, cr); }
    inline const QBrush &brush(ColorRole cr) const { return brush(Current, cr); }
    inline const QBrush &foreground() const { return brush(WindowText); }
    inline const QBrush &windowText() const { return brush(WindowText); }
    inline const QBrush &button() const { return brush(Button); }
    inline const QBrush &light() const { return brush(Light); }
    inline const QBrush &dark() const { return brush(Dark); }
    inline const QBrush &mid() const { return brush(Mid); }
    inline const QBrush &text() const { return brush(Text); }
    inline const QBrush &base() const { return brush(Base); }
    inline const QBrush &alternateBase() const { return brush(AlternateBase); }
    inline const QBrush &toolTipBase() const { return brush(ToolTipBase); }
    inline const QBrush &toolTipText() const { return brush(ToolTipText); }
    inline const QBrush &background() const { return brush(Window); }
    inline const QBrush &window() const { return brush(Window); }
    inline const QBrush &midlight() const { return brush(Midlight); }
    inline const QBrush &brightText() const { return brush(BrightText); }
    inline const QBrush &buttonText() const { return brush(ButtonText); }
    inline const QBrush &shadow() const { return brush(Shadow); }
    inline const QBrush &highlight() const { return brush(Highlight); }
    inline const QBrush &highlightedText() const { return brush(HighlightedText); }
    inline const QBrush &link() const { return brush(Link); }
    inline const QBrush &linkVisited() const { return brush(LinkVisited); }

#ifdef QT3_SUPPORT
    inline QT3_SUPPORT QPalette copy() const { QPalette p = *this; p.detach(); return p; }
    QT3_SUPPORT QColorGroup normal() const;
    inline QT3_SUPPORT void setNormal(const QColorGroup &cg) { setColorGroup(Active, cg); }

    QT3_SUPPORT QColorGroup active() const;
    QT3_SUPPORT QColorGroup disabled() const;
    QT3_SUPPORT QColorGroup inactive() const;
    inline QT3_SUPPORT void setActive(const QColorGroup &cg) { setColorGroup(Active, cg); }
    inline QT3_SUPPORT void setDisabled(const QColorGroup &cg) { setColorGroup(Disabled, cg); }
    inline QT3_SUPPORT void setInactive(const QColorGroup &cg) { setColorGroup(Inactive, cg); }
#endif

    bool operator==(const QPalette &p) const;
    inline bool operator!=(const QPalette &p) const { return !(operator==(p)); }
    bool isCopyOf(const QPalette &p) const;

    int serialNumber() const;
    qint64 cacheKey() const;

    QPalette resolve(const QPalette &) const;
    inline uint resolve() const { return resolve_mask; }
    inline void resolve(uint mask) { resolve_mask = mask; }

```



```cpp
#ifdef QT3_SUPPORT
// QColorGroup : public QPalette

public:
    inline QColorGroup() : QPalette() {}
    inline QColorGroup(const QBrush &foreground, const QBrush &button, const QBrush &light,
                const QBrush &dark, const QBrush &mid, const QBrush &text,
                const QBrush &bright_text, const QBrush &base, const QBrush &background)
        : QPalette(foreground, button, light, dark, mid, text, bright_text, base, background)
    {}
    inline QColorGroup(const QColor &foreground, const QColor &background, const QColor &light,
                const QColor &dark, const QColor &mid, const QColor &text, const QColor &base)
        : QPalette(foreground, background, light, dark, mid, text, base) {}
    inline QColorGroup(const QColorGroup &cg) : QPalette(cg) {}
    inline QColorGroup(const QPalette &pal) : QPalette(pal) {}
    bool operator==(const QColorGroup &other) const;
    inline bool operator!=(const QColorGroup &other) const { return !(operator==(other)); }
    operator QVariant() const;

    inline QT3_SUPPORT const QColor &foreground() const { return color(WindowText); }
    inline QT3_SUPPORT const QColor &button() const { return color(Button); }
    inline QT3_SUPPORT const QColor &light() const { return color(Light); }
    inline QT3_SUPPORT const QColor &dark() const { return color(Dark); }
    inline QT3_SUPPORT const QColor &mid() const { return color(Mid); }
    inline QT3_SUPPORT const QColor &text() const { return color(Text); }
    inline QT3_SUPPORT const QColor &base() const { return color(Base); }
    inline QT3_SUPPORT const QColor &background() const { return color(Window); }
    inline QT3_SUPPORT const QColor &midlight() const { return color(Midlight); }
    inline QT3_SUPPORT const QColor &brightText() const { return color(BrightText); }
    inline QT3_SUPPORT const QColor &buttonText() const { return color(ButtonText); }
    inline QT3_SUPPORT const QColor &shadow() const { return color(Shadow); }
    inline QT3_SUPPORT const QColor &highlight() const { return color(Highlight); }
    inline QT3_SUPPORT const QColor &highlightedText() const { return color(HighlightedText); }
    inline QT3_SUPPORT const QColor &link() const { return color(Link); }
    inline QT3_SUPPORT const QColor &linkVisited() const { return color(LinkVisited); }

#endif
```



<!-- qpalette.md ends here -->
