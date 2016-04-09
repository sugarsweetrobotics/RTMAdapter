#pragma once
#include "adapter_common.h"
#include "port_adapter.h"

#ifdef __cplusplus
extern "C" {
#endif
  
  ADAPTER_API Result_t RTC_addInPort(RTC_t rtc, char* name, Port_t port);

  ADAPTER_API Result_t RTC_addOutPort(RTC_t rtc, char* name, Port_t port);

  ADAPTER_API Result_t RTC_deletePort(RTC_t rtc, Port_t port);

  ADAPTER_API Result_t RTC_onActivate_listen(RTC_t rtc, void (*callback)(int));

  ADAPTER_API Result_t RTC_onDeactivate_listen(RTC_t rtc, void (*callback)(int));

  ADAPTER_API Result_t RTC_onExecute_listen(RTC_t rtc, void (*callback)(int));

  ADAPTER_API Result_t RTC_onAborting_listen(RTC_t rtc, void(*callback)(int));

  ADAPTER_API Result_t RTC_onError_listen(RTC_t rtc, void(*callback)(int));

  ADAPTER_API Result_t RTC_onReset_listen(RTC_t rtc, void(*callback)(int));

#ifdef __cplusplus
}
#endif




