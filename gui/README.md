Introduction
============
This application demonstrate the capability of RInside as a toolkit to embed
R inside GUI applications. Please refer Dirk Eddelbuettel's [blog](http://dirk.eddelbuettel.com/blog/2011/03/25/#rinside_and_qt) for technical
details.

## Preparation
0. Basic dev environment: I would recommend running virtualbox to setup an
   ubuntu or gentoo system and install standard c/c++ toolchain.
1. QT tookit 4.8+ with dev library and header files. This give you standard qt
   dev toolchain.
2. R: 3.0+ recommended.
3. Install RInside inside R: install.packages("RInside"). Now you should have
   libRcpp.so libRInside.so inside some user installed R package directory.

## Run
Inside this directory, execute:
qmake && make