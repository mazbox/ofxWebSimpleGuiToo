ofxWebSimpleGuiToo
==================
Serve a version of ofxSimpleGuiToo in your web browser.

HOWTO
=====

Add it to your project. Add ofxSimpleGuiToo to your project. Instead of 

gui.addSlider(...)

use

webGui.addSlider(...)

then call 

webGui.startServer()

You also need data/ofxWebSimpleGuiToo/* from the example in your data folder.

then point your browser to http://localhost:8910/


