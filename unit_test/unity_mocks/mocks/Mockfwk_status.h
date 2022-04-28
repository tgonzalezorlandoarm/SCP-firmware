/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKFWK_STATUS_H
#define _MOCKFWK_STATUS_H

#include "unity.h"
#include "fwk_status.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockfwk_status_Init(void);
void Mockfwk_status_Destroy(void);
void Mockfwk_status_Verify(void);




#define fwk_status_str_ExpectAnyArgsAndReturn(cmock_retval) fwk_status_str_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void fwk_status_str_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, const char* cmock_to_return);
#define fwk_status_str_ExpectAndReturn(status, cmock_retval) fwk_status_str_CMockExpectAndReturn(__LINE__, status, cmock_retval)
void fwk_status_str_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int status, const char* cmock_to_return);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
