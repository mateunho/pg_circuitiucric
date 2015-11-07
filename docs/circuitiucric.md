# This document contains comments to design draft in `circuitiucric.png`

\# | description | suggested type | default state  
-- | ----------- | -------------- | -------------  
<a name="1"></a>1 | input field for desired output permutation; input format: unsigned integers separated by single space character | [`QLineEdit`][le] | `disabled`  
<a name="2"></a>2 | button removing last element from [1](#1); enabled only when [1](#1) contains any value | [`QPushButton`][pb] | `disabled`  
<a name="3"></a>3 | input select field responsible for fixing width of synthesized circuit's input/output; input range: $2-5$ ($2-3$ at minimum); if it's value is $n$, then [1](#1) must contain exactly $2^n$ values | [`QSpinBox`][sb] | `enabled`  
<a name="4"></a>4 | button enabling raw input mode for [1](#1); after activation [1](#1) changes state to enabled allowing direct keyboard input to take place; after deactivation APP should check validity of [1](#1)'s contents ane enable/disable [7](#7) state if it's correct/incorrect respectively | [`QPushButton`][pb] | `disabled`  
<a name="5"></a>5 | input select field for elements of [1](#1); becomes enabled after [3](#3) selects values from valid range | [`QSpinBox`][sb] | `disabled`  
<a name="6"></a>6 | button adding value from [5](#5) to [1](#1); if element selected in [5](#5) is already present in [1](#1), should change state to disabled disallowing input of that particular value | [`QPushButton`][pb] | `enabled`  
<a name="7"></a>7 | button launching generation/synthesis of circuit specified by [1](#1); becomes enabled only when content of [1](#1) is verified as valid and complete; after activation disables every input field and button of APP (including itself); circuit synthesis should run in a separate thread; reenables input fields and buttonswhen synthesis finished and returned value to [8](#8) | [`QPushButton`][pb] | `disabled`  
<a name="8"></a>8 | text field holding output from circuit synthesis; content should be flushed each time before new results are written | [`QPlainTextEdit`][pte] | `enabled`

[le]: http://doc.qt.io/qt-5/qlineedit.html
[sb]: http://doc.qt.io/qt-5/qspinbox.html
[pb]: http://doc.qt.io/qt-5/qpushbutton.html
[pte]: http://doc.qt.io/qt-5/qplaintextedit.html