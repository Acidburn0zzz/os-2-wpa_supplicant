@set LANG=en
@REM not necessary anymore cause default SET LIB=P:/usr/lib;U:/extras/lib/crypto.lib
call envQT.cmd
@call make
@call make -C wpa_gui-qt4  %1 %2 %3 %4 %5 2>&1 | tee out2.log
