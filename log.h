/**
 * File:   Clase para loguear mensajes formateados en arduino.
 *
 * - Compiler:           Arduino 1.8.13
 * - Supported devices:  Nano
 *
 * \author               JS: jschiavoni@intelektron.com
 *
 * Date:  25-08-2020
 *
 *      Intelektron SA Argentina.
 */
#ifndef LOG_H
#define LOG_H

#include "Arduino.h"

#define LOG_SERIAL_SPEED                115200

#define LOG_DISABLED                    0           // Log desactivado.
#define LOG_STANDAR                     1           // Log habilitado en formato estandar.
#define LOG_ARDUINO_SERIAL_PLOTTER      2           // Log habilitado en formato arduino serial plotter.

class Clog
{
  public:
    Clog();
    void init( uint8_t type );
    void msg( const __FlashStringHelper *fmt, ... );
    void process_cmd( void );

  private:
    uint8_t type;       // 0 = log desactivado.
};

#endif // LOG_H
