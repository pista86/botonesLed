#include "build/temp/_test_botonesLed.c"
#include "botonesLed.h"
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



 recorderStartRecording_CMockExpectAndReturn(20, 0, 0);

 buttonStatusIN.button = 0;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.status = BUTTON_UP;



 buttonStatusIN.button = 0;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

}







void test_recordingStart(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(78, 0, 0);

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 pushEvent(buttonStatusIN);

}







void test_multipleButtonDown(void){

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(93, 0, 0);

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 recorderStartRecording_CMockExpectAndReturn(113, 0, 0);

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_DOWN;

 buttonStatusIN.button = 0;

 pushEvent(buttonStatusIN);



 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 1;

 pushEvent(buttonStatusIN);





 buttonStatusIN.status = BUTTON_UP;

 buttonStatusIN.button = 0;

 pushEvent(buttonStatusIN);

}
