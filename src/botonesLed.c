#include "botonesLed.h"
#include "recorder.h"


button_status_t pushEvent(button_status_t buttonStatus)
{

	if (buttonStatus.status == BUTTON_DOWN){
		recorderStartRecording(buttonStatus.button);
	}


return buttonStatus;


}