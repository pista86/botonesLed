#include "unity.h"
#include "mock_recorder.h"
#include "mock_ledDriver.h"
#include "botonesLed.h"


void setUp(void){

}

void tearDown(void){
}

//Se puede recibir un evento de pulsación down y up del sistema de antirebote.
void test_pushEventIn(void){
	button_status_t buttonStatusOUT;
	button_status_t buttonStatusIN;

	buttonStatusIN.status = BUTTON_DOWN;
	// Test down de botón 1
	recorderStartRecording_ExpectAndReturn(0, 0);
	buttonStatusIN.button = 0;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(0, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_DOWN, buttonStatusOUT.status);

	// Test down de botón 2
	buttonStatusIN.button = 1;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(1, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_DOWN, buttonStatusOUT.status);

	// Test down de botón 3
	buttonStatusIN.button = 2;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(2, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_DOWN, buttonStatusOUT.status);

	// Test down de botón 4
	buttonStatusIN.button = 3;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(3, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_DOWN, buttonStatusOUT.status);


	buttonStatusIN.status = BUTTON_UP;
	// Test up de botón 1
	buttonStatusIN.button = 0;
	recorderStopRecording_ExpectAndReturn(0, 0);
	buttonStatusOUT = pushEvent(buttonStatusIN);

	TEST_ASSERT_EQUAL(0, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_UP, buttonStatusOUT.status);
	// Test up de botón 2

	buttonStatusIN.button = 1;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(1, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_UP, buttonStatusOUT.status);
	// Test up de botón 3

	buttonStatusIN.button = 2;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(2, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_UP, buttonStatusOUT.status);
	// Test up de botón 4

	buttonStatusIN.button = 3;
	buttonStatusOUT = pushEvent(buttonStatusIN);
	TEST_ASSERT_EQUAL(3, buttonStatusOUT.button);
	TEST_ASSERT_EQUAL(BUTTON_UP, buttonStatusOUT.status);
}


//Se notifica al sistema de grabación que un pulsador está siendo pulsado.
void test_recordingStart(void){
	button_status_t buttonStatusIN;

	buttonStatusIN.status = BUTTON_DOWN;
	buttonStatusIN.button = 0;
	recorderStartRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);

	buttonStatusIN.status = BUTTON_UP;
	buttonStatusIN.button = 0;
	recorderStopRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);
}


//Se ignoran los eventos de pulsación provenientes del sistema de antirebote si se ha recibido un evento de pulsado down y no uno de up del mismo pulsador.
void test_multipleButtonDown(void){
	button_status_t buttonStatusIN;

	buttonStatusIN.status = BUTTON_DOWN;
	buttonStatusIN.button = 0;
	recorderStartRecording_ExpectAndReturn(0, 0);
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
	recorderStopRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);
}


//Al recibir un evento de grabación iniciada se activa el led asociado al pulsador que se encuentra en estado down.
void test_ButtonDownLedOn(void){
	button_status_t buttonStatusIN;

	buttonStatusIN.status = BUTTON_DOWN;
	buttonStatusIN.button = 0;
	recorderStartRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);

	
	gpioSetOut_ExpectAndReturn(0, 1, 0);
	recordingStarted();

	buttonStatusIN.status = BUTTON_UP;
	buttonStatusIN.button = 0;
	recorderStopRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);
}



//Se notifica el sistema de grabación que el pulsador en estado down pasa a up.
void test_ButtonUPRecordingStop(void){
	button_status_t buttonStatusIN;


	buttonStatusIN.status = BUTTON_DOWN;
	buttonStatusIN.button = 3;
	recorderStartRecording_ExpectAndReturn(3, 3);
	pushEvent(buttonStatusIN);



	buttonStatusIN.status = BUTTON_UP;
	buttonStatusIN.button = 3;
	recorderStopRecording_ExpectAndReturn(3, 3);
	pushEvent(buttonStatusIN);

}

void test_ButtonUpLedOff(void){
	button_status_t buttonStatusIN;

	buttonStatusIN.status = BUTTON_DOWN;
	buttonStatusIN.button = 0;
	recorderStartRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);
	


	buttonStatusIN.status = BUTTON_UP;
	buttonStatusIN.button = 0;
	recorderStopRecording_ExpectAndReturn(0, 0);
	pushEvent(buttonStatusIN);

	gpioSetOut_ExpectAndReturn(0, 0, 0);
	recordingStopped();
}