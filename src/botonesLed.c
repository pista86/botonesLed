#include "botonesLed.h"
#include "recorder.h"
#include "ledDriver.h"

#define LED_ON 		1
#define LED_OFF		!LED_ON

static void ledOn(uint8_t led);

static int8_t buttonPressed = -1;

button_status_t pushEvent(button_status_t buttonStatus)
{

	if (buttonStatus.status == BUTTON_DOWN )
	{
	
		if (buttonPressed == -1)
		{
			recorderStartRecording(buttonStatus.button);
			ledOn((buttonStatus.button));
			buttonPressed = buttonStatus.button;
		}
		
	}
	else if (buttonStatus.button == buttonPressed && buttonStatus.status == BUTTON_UP)
	{
		recorderStopRecording(buttonPressed);
		buttonPressed = -1;
	}


return buttonStatus;


}


static void ledOn(uint8_t led)
{

	gpioSetOut(led,  LED_ON);

}


