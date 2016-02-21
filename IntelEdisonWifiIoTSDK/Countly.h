#include <EepromUtil.h>
#include <stdbool.h>
#include <stdint.h>
#include <WiFi.h>

#ifndef Countly_h
#define Countly_h

class Countly
{
  public:
	Countly (const char* urlStr, const char* appKey);
	void metrics();
	void event(String key, int sum);
	const char* generateUuid();
    const char* getUuidFromEeprom();
    bool writeUuidToEeprom(String uuid, int len);
    void printWifiStatus();
};

#endif

