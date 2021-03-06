/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_recorder.h"

static const char* CMockString_button = "button";
static const char* CMockString_recorderStartRecording = "recorderStartRecording";
static const char* CMockString_recorderStopRecording = "recorderStopRecording";

typedef struct _CMOCK_recorderStartRecording_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint8_t ReturnVal;
  int CallOrder;
  uint8_t Expected_button;

} CMOCK_recorderStartRecording_CALL_INSTANCE;

typedef struct _CMOCK_recorderStopRecording_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint8_t ReturnVal;
  int CallOrder;
  uint8_t Expected_button;

} CMOCK_recorderStopRecording_CALL_INSTANCE;

static struct mock_recorderInstance
{
  int recorderStartRecording_IgnoreBool;
  uint8_t recorderStartRecording_FinalReturn;
  CMOCK_recorderStartRecording_CALLBACK recorderStartRecording_CallbackFunctionPointer;
  int recorderStartRecording_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE recorderStartRecording_CallInstance;
  int recorderStopRecording_IgnoreBool;
  uint8_t recorderStopRecording_FinalReturn;
  CMOCK_recorderStopRecording_CALLBACK recorderStopRecording_CallbackFunctionPointer;
  int recorderStopRecording_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE recorderStopRecording_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_recorder_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.recorderStartRecording_IgnoreBool)
    Mock.recorderStartRecording_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_recorderStartRecording);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.recorderStartRecording_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.recorderStartRecording_CallbackFunctionPointer != NULL)
    Mock.recorderStartRecording_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.recorderStopRecording_IgnoreBool)
    Mock.recorderStopRecording_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_recorderStopRecording);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.recorderStopRecording_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.recorderStopRecording_CallbackFunctionPointer != NULL)
    Mock.recorderStopRecording_CallInstance = CMOCK_GUTS_NONE;
}

void mock_recorder_Init(void)
{
  mock_recorder_Destroy();
}

void mock_recorder_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.recorderStartRecording_CallbackFunctionPointer = NULL;
  Mock.recorderStartRecording_CallbackCalls = 0;
  Mock.recorderStopRecording_CallbackFunctionPointer = NULL;
  Mock.recorderStopRecording_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

uint8_t recorderStartRecording(uint8_t button)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_recorderStartRecording_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_recorderStartRecording);
  cmock_call_instance = (CMOCK_recorderStartRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.recorderStartRecording_CallInstance);
  Mock.recorderStartRecording_CallInstance = CMock_Guts_MemNext(Mock.recorderStartRecording_CallInstance);
  if (Mock.recorderStartRecording_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.recorderStartRecording_FinalReturn;
    Mock.recorderStartRecording_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.recorderStartRecording_CallbackFunctionPointer != NULL)
  {
    return Mock.recorderStartRecording_CallbackFunctionPointer(button, Mock.recorderStartRecording_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_recorderStartRecording,CMockString_button);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_button, button, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_recorderStartRecording(CMOCK_recorderStartRecording_CALL_INSTANCE* cmock_call_instance, uint8_t button)
{
  cmock_call_instance->Expected_button = button;
}

void recorderStartRecording_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_recorderStartRecording_CALL_INSTANCE));
  CMOCK_recorderStartRecording_CALL_INSTANCE* cmock_call_instance = (CMOCK_recorderStartRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.recorderStartRecording_CallInstance = CMock_Guts_MemChain(Mock.recorderStartRecording_CallInstance, cmock_guts_index);
  Mock.recorderStartRecording_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.recorderStartRecording_IgnoreBool = (int)1;
}

void recorderStartRecording_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t button, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_recorderStartRecording_CALL_INSTANCE));
  CMOCK_recorderStartRecording_CALL_INSTANCE* cmock_call_instance = (CMOCK_recorderStartRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.recorderStartRecording_CallInstance = CMock_Guts_MemChain(Mock.recorderStartRecording_CallInstance, cmock_guts_index);
  Mock.recorderStartRecording_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_recorderStartRecording(cmock_call_instance, button);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void recorderStartRecording_StubWithCallback(CMOCK_recorderStartRecording_CALLBACK Callback)
{
  Mock.recorderStartRecording_IgnoreBool = (int)0;
  Mock.recorderStartRecording_CallbackFunctionPointer = Callback;
}

uint8_t recorderStopRecording(uint8_t button)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_recorderStopRecording_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_recorderStopRecording);
  cmock_call_instance = (CMOCK_recorderStopRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.recorderStopRecording_CallInstance);
  Mock.recorderStopRecording_CallInstance = CMock_Guts_MemNext(Mock.recorderStopRecording_CallInstance);
  if (Mock.recorderStopRecording_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.recorderStopRecording_FinalReturn;
    Mock.recorderStopRecording_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.recorderStopRecording_CallbackFunctionPointer != NULL)
  {
    return Mock.recorderStopRecording_CallbackFunctionPointer(button, Mock.recorderStopRecording_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_recorderStopRecording,CMockString_button);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_button, button, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_recorderStopRecording(CMOCK_recorderStopRecording_CALL_INSTANCE* cmock_call_instance, uint8_t button)
{
  cmock_call_instance->Expected_button = button;
}

void recorderStopRecording_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_recorderStopRecording_CALL_INSTANCE));
  CMOCK_recorderStopRecording_CALL_INSTANCE* cmock_call_instance = (CMOCK_recorderStopRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.recorderStopRecording_CallInstance = CMock_Guts_MemChain(Mock.recorderStopRecording_CallInstance, cmock_guts_index);
  Mock.recorderStopRecording_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.recorderStopRecording_IgnoreBool = (int)1;
}

void recorderStopRecording_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t button, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_recorderStopRecording_CALL_INSTANCE));
  CMOCK_recorderStopRecording_CALL_INSTANCE* cmock_call_instance = (CMOCK_recorderStopRecording_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.recorderStopRecording_CallInstance = CMock_Guts_MemChain(Mock.recorderStopRecording_CallInstance, cmock_guts_index);
  Mock.recorderStopRecording_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_recorderStopRecording(cmock_call_instance, button);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void recorderStopRecording_StubWithCallback(CMOCK_recorderStopRecording_CALLBACK Callback)
{
  Mock.recorderStopRecording_IgnoreBool = (int)0;
  Mock.recorderStopRecording_CallbackFunctionPointer = Callback;
}

