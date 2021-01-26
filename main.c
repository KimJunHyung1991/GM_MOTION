
#include "main.h"


int main(void)
{
	/*HAL 설정 영역*/
	
	while(1)
	{
		
		
		proc_can_rx();
		
		proc_can_tx(&CanHandle);
	
	}
}

