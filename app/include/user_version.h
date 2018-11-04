#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#include "version.h"	/* ESP firmware header */

#define NODE_VERSION_MAJOR	ESP_SDK_VERSION_MAJOR
#define NODE_VERSION_MINOR	ESP_SDK_VERSION_MINOR
#define NODE_VERSION_REVISION	ESP_SDK_VERSION_PATCH
#define NODE_VERSION_INTERNAL   0

#define NODE_VERSION_STR(x)	#x
#define NODE_VERSION_XSTR(x)	NODE_VERSION_STR(x)

#define NODE_VERSION		"NodeMCU " ESP_SDK_VERSION_STRING "." NODE_VERSION_XSTR(NODE_VERSION_INTERNAL) " built with Docker provided by frightanic.com\n\tbranch: dev\n\tcommit: 2fe899d4898d363c230ae411cdbc0bf8ae8e3f6b\n\tSSL: false\n\tBuild type: float\n\tLFS: disabled\n\tmodules: adc,adxl345,bit,dht,file,gpio,http,i2c,net,node,ow,rtctime,sntp,spi,tmr,uart,websocket,wifi,ws2812,ws2812_effects\n" " built with Docker provided by frightanic.com\n\tbranch: dev\n\tcommit: afc8c1d42223d76565ce127f759714cbe392504f\n\tSSL: false\n\tBuild type: float\n\tLFS: disabled\n\tmodules: adc,adxl345,bit,dht,file,gpio,http,i2c,net,node,ow,rtctime,sntp,spi,tmr,uart,websocket,wifi,ws2812,ws2812_effects,vl53l0x\n"

#ifndef BUILD_DATE
#define BUILD_DATE		"created on 2018-11-02 21:50\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
