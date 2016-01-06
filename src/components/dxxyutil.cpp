#include <QLocale>

#include "dxxyutil.h"


QString DXXYUtil::freq_string(freq_t f, string_format t, int decimal_points){
    // Decrease Size to match Format
    freq_t c;
    switch(t){
       case DXXYUtil::Hz :
         c = f;
         break;
       case DXXYUtil::KHz :
        c = f/100;
        break;
       case DXXYUtil::MHz :
        c = f/1000000;
        break;
       case DXXYUtil::GHz :
        c = f/100000000;
        break;
     }

    // Comma Seperate
     QString number = QLocale(QLocale::English).toString(c, 'f', decimal_points);

     return number;
}
