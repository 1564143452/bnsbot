#include "bot.h"
#include "controller.h"
#include "sensors.h"

DWORD bot::ControllerThread(LPVOID param) {
	while (bot::GetState() != bot::Off) {
		if (GetAsyncKeyState(VK_INSERT)) {
			bot::ChangeState(bot::Running);
		}
		else if (GetAsyncKeyState(VK_DELETE)) {
			bot::ChangeState(bot::Suspended);
		}
		else if (GetAsyncKeyState(VK_END)) {
			bot::ChangeState(bot::Suspended);
		}
		Sleep(100);
	}

	printf("[CONTROLLER] Exited.\n");
	return 0;
}