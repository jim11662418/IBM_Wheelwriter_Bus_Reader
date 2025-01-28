@echo off
echo compiling...
sdcc -c main.c
sdcc -c uart12.c
sdcc -c watchdog.c

echo link...
sdcc main.c uart12.rel watchdog.rel

echo generating HEX file...
packihx main.ihx > read.hex

echo cleaning up...
del *.asm
del *.ihx
del *.lk
del *.lst
del *.map
del *.mem
del *.rel
del *.rst
del *.sym

pause