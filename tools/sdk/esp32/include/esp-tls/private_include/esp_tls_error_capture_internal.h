/*
 * SPDX-FileCopyrightText: 2017-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __ESP_TLS_ERROR_CAPTURE_INTERNAL_H__
#define __ESP_TLS_ERROR_CAPTURE_INTERNAL_H__
/**
* Note: this is an implementation placeholder for error logger.
* This version is internal to esp-tls component and only saves single esp_err of last occurred error
*/

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Error tracker logging macro to enable mapping tracking errors internally
 * or using an external/global implementation
 */
#define ESP_INT_EVENT_TRACKER_CAPTURE(h, type, code)    esp_tls_internal_event_tracker_capture(h, type, code)

/**
 * @brief Internal tracker capture error
 *
 * This implementation saves latest errors of available types
 *
 * @param[in]  h        esp-tls error handle
 * @param[in]  err_type Specific error type
 * @param[int] code     Error code to capture
 *
 */
void esp_tls_internal_event_tracker_capture(esp_tls_error_handle_t h, uint32_t type, int code);

/**
 * @brief Create internal tracker storage
 *
 * @return Error tracker handle if success or NULL if allocation error
 */
esp_tls_error_handle_t esp_tls_internal_event_tracker_create(void);

/**
 * @brief Destroy internal tracker storage
 *
 * @param[in]  h        esp-tls error handle
 */
 void esp_tls_internal_event_tracker_destroy(esp_tls_error_handle_t h);

#ifdef __cplusplus
}
#endif

#endif //__ESP_TLS_ERROR_CAPTURE_INTERNAL_H__
