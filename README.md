# README #

Cigue is uEMACS (ue) on Cygwin/Linux, based on uEmacs/PK from kernel.org.

### Changes compare to uEmacs/PK ###
* Line termination detection with new buffer mode (either Unix or DOS).
* Some fixes related to size either unchecked or limited (strcpy, insert-string, filenames, $kill).
* Major refactoring of headers and file dependencies, hopefully to improve maintenance.
* Reactivation of target 'source' and 'depend' in Makefile.
* Some defaults changed due to 'finger habits': ue instead of em, ^S in commands mapping...

### How to build ###
* dependencies: libncurses5-dev, ed if you use 'make depend'
* make source ; make depend ; make
* MINGW32 target is experimental and lacks screen/kbd support.