/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "internal/Mockfwk_notification_internal.h"

static const char* CMockString___fwk_notification_init = "__fwk_notification_init";
static const char* CMockString___fwk_notification_reset = "__fwk_notification_reset";
static const char* CMockString_notification_count = "notification_count";

typedef struct _CMOCK___fwk_notification_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  size_t Expected_notification_count;

} CMOCK___fwk_notification_init_CALL_INSTANCE;

typedef struct _CMOCK___fwk_notification_reset_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK___fwk_notification_reset_CALL_INSTANCE;

static struct Mockfwk_notification_internalInstance
{
  CMOCK_MEM_INDEX_TYPE __fwk_notification_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE __fwk_notification_reset_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockfwk_notification_internal_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.__fwk_notification_init_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString___fwk_notification_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.__fwk_notification_reset_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString___fwk_notification_reset);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void Mockfwk_notification_internal_Init(void)
{
  Mockfwk_notification_internal_Destroy();
}

void Mockfwk_notification_internal_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int __fwk_notification_init(size_t notification_count)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK___fwk_notification_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString___fwk_notification_init);
  cmock_call_instance = (CMOCK___fwk_notification_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.__fwk_notification_init_CallInstance);
  Mock.__fwk_notification_init_CallInstance = CMock_Guts_MemNext(Mock.__fwk_notification_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString___fwk_notification_init,CMockString_notification_count);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_notification_count), (void*)(&notification_count), sizeof(size_t), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters___fwk_notification_init(CMOCK___fwk_notification_init_CALL_INSTANCE* cmock_call_instance, size_t notification_count);
void CMockExpectParameters___fwk_notification_init(CMOCK___fwk_notification_init_CALL_INSTANCE* cmock_call_instance, size_t notification_count)
{
  memcpy((void*)(&cmock_call_instance->Expected_notification_count), (void*)(&notification_count),
         sizeof(size_t[sizeof(notification_count) == sizeof(size_t) ? 1 : -1])); /* add size_t to :treat_as_array if this causes an error */
}

void __fwk_notification_init_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK___fwk_notification_init_CALL_INSTANCE));
  CMOCK___fwk_notification_init_CALL_INSTANCE* cmock_call_instance = (CMOCK___fwk_notification_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.__fwk_notification_init_CallInstance = CMock_Guts_MemChain(Mock.__fwk_notification_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void __fwk_notification_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, size_t notification_count, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK___fwk_notification_init_CALL_INSTANCE));
  CMOCK___fwk_notification_init_CALL_INSTANCE* cmock_call_instance = (CMOCK___fwk_notification_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.__fwk_notification_init_CallInstance = CMock_Guts_MemChain(Mock.__fwk_notification_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters___fwk_notification_init(cmock_call_instance, notification_count);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void __fwk_notification_reset(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK___fwk_notification_reset_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString___fwk_notification_reset);
  cmock_call_instance = (CMOCK___fwk_notification_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.__fwk_notification_reset_CallInstance);
  Mock.__fwk_notification_reset_CallInstance = CMock_Guts_MemNext(Mock.__fwk_notification_reset_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void __fwk_notification_reset_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK___fwk_notification_reset_CALL_INSTANCE));
  CMOCK___fwk_notification_reset_CALL_INSTANCE* cmock_call_instance = (CMOCK___fwk_notification_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.__fwk_notification_reset_CallInstance = CMock_Guts_MemChain(Mock.__fwk_notification_reset_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

