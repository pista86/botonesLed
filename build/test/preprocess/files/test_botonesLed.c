#include "build/temp/_test_botonesLed.c"
#include "botonesLed.h"
#include "unity.h"




void setUp(void){



}



void tearDown(void){

}



void test_pushEventIn(void){

 button_status_t buttonStatusOUT;

 button_status_t buttonStatusIN;



 buttonStatusIN.status = BUTTON_DOWN;



 buttonStatusIN.button = 0;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_DOWN)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.status = BUTTON_UP;



 buttonStatusIN.button = 0;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 1;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 2;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);





 buttonStatusIN.button = 3;

 buttonStatusOUT = pushEvent(buttonStatusIN);

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((buttonStatusOUT.button)), (

((void *)0)

), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((BUTTON_UP)), (UNITY_INT)((buttonStatusOUT.status)), (

((void *)0)

), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_INT);

}
