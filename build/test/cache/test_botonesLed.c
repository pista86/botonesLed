#include "build/temp/_test_botonesLed.c"
#include "botonesLed.h"
#include "mock_ledDriver.h"
#include "mock_recorder.h"
#include "unity.h"




void setUp(void){



}



void tearDown(void){

}





void test_pushEventIn(void){

 button_status_t buttonStatusOUT;

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;



 recorderStartRecording_CMockExpectAndReturn(21, 0, 0);

 buttonStatusIN.button = 0;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.status = BUTTON_UP;



 buttonStatusIN.button = 0;

 recorderStopRecording_CMockExpectAndReturn(49, 0, 0);

 buttonStatusOUT = pushEvent(buttonStatusIN);



 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);

}







void test_recordingStart(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(81, 0, 0);

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 recorderStopRecording_CMockExpectAndReturn(86, 0, 0);

 pushEvent(buttonStatusIN);

}







void test_multipleButtonDown(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(97, 0, 0);

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 recorderStopRecording_CMockExpectAndReturn(125, 0, 0);

 pushEvent(buttonStatusIN);

}







void test_ButtonDownLedOn(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(136, 0, 0);

 pushEvent(buttonStatusIN);





 gpioSetOut_CMockExpectAndReturn(140, 0, 1, 0);

 recordingStarted();



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 recorderStopRecording_CMockExpectAndReturn(145, 0, 0);

 pushEvent(buttonStatusIN);

}









void test_ButtonUPRecordingStop(void){

 button_status_t buttonStatusIN;





 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 3;

 recorderStartRecording_CMockExpectAndReturn(158, 3, 3);

 pushEvent(buttonStatusIN);







 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 3;

 recorderStopRecording_CMockExpectAndReturn(165, 3, 3);

 pushEvent(buttonStatusIN);



}



void test_ButtonUpLedOff(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(175, 0, 0);

 pushEvent(buttonStatusIN);







 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 recorderStopRecording_CMockExpectAndReturn(182, 0, 0);

 pushEvent(buttonStatusIN);



 gpioSetOut_CMockExpectAndReturn(185, 0, 0, 0);

 recordingStopped();

}
