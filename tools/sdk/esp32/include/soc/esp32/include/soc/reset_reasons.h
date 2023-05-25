// Copyright 2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

//+-----------------------------------------------Terminology---------------------------------------------+
//|                                                                                                       |
//| CPU Reset:    Reset CPU core only, once reset done, CPU will execute from reset vector                |
//|                                                                                                       |
//| Core Reset:   Reset the whole digital system except RTC sub-system                                    |
//|                                                                                                       |
//| System Reset: Reset the whole digital system, including RTC sub-system                                |
//|                                                                                                       |
//| Chip Reset:   Reset the whole chip, including the analog part                                         |
//|                                                                                                       |
//+-------------------------------------------------------------------------------------------------------+

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Naming conventions: RESET_REASON_{reset level}_{reset reason}
 * @note refer to TRM: <Reset and Clock> chapter
 */
typedef enum {
    RESET_REASON_CHIP_POWER_ON   = 0x01, // Power on reset
    RESET_REASON_CORE_SW         = 0x03, // Software resets the digital core
    RESET_REASON_CORE_DEEP_SLEEP = 0x05, // Deep sleep reset the digital core
    RESET_REASON_CORE_SDIO       = 0x06, // SDIO module resets the digital core
    RESET_REASON_CORE_MWDT0      = 0x07, // Main watch dog 0 resets digital core
    RESET_REASON_CORE_MWDT1      = 0x08, // Main watch dog 1 resets digital core
    RESET_REASON_CORE_RTC_WDT    = 0x09, // RTC watch dog resets digital core
    RESET_REASON_CPU0_MWDT0      = 0x0B, // Main watch dog 0 resets CPU 0
    RESET_REASON_CPU1_MWDT1      = 0x0B, // Main watch dog 1 resets CPU 1
    RESET_REASON_CPU0_SW         = 0x0C, // Software resets CPU 0
    RESET_REASON_CPU1_SW         = 0x0C, // Software resets CPU 1
    RESET_REASON_CPU0_RTC_WDT    = 0x0D, // RTC watch dog resets CPU 0
    RESET_REASON_CPU1_RTC_WDT    = 0x0D, // RTC watch dog resets CPU 1
    RESET_REASON_CPU1_CPU0       = 0x0E, // CPU0 resets CPU1 by DPORT_APPCPU_RESETTING
    RESET_REASON_SYS_BROWN_OUT   = 0x0F, // Reset when the VDD voltage is not stable
    RESET_REASON_SYS_RTC_WDT     = 0x10, // RTC watch dog resets digital core and rtc module
} soc_reset_reason_t;

#ifdef __cplusplus
}
#endif
