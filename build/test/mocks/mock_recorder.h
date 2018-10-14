/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_RECORDER_H
#define _MOCK_RECORDER_H

#include "recorder.h"

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

void mock_recorder_Init(void);
void mock_recorder_Destroy(void);
void mock_recorder_Verify(void);




#define recorderStartRecording_IgnoreAndReturn(cmock_retval) recorderStartRecording_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void recorderStartRecording_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define recorderStartRecording_ExpectAndReturn(button, cmock_retval) recorderStartRecording_CMockExpectAndReturn(__LINE__, button, cmock_retval)
void recorderStartRecording_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t button, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_recorderStartRecording_CALLBACK)(uint8_t button, int cmock_num_calls);
void recorderStartRecording_StubWithCallback(CMOCK_recorderStartRecording_CALLBACK Callback);
#define recorderStopRecording_IgnoreAndReturn(cmock_retval) recorderStopRecording_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void recorderStopRecording_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define recorderStopRecording_ExpectAndReturn(button, cmock_retval) recorderStopRecording_CMockExpectAndReturn(__LINE__, button, cmock_retval)
void recorderStopRecording_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t button, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_recorderStopRecording_CALLBACK)(uint8_t button, int cmock_num_calls);
void recorderStopRecording_StubWithCallback(CMOCK_recorderStopRecording_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif