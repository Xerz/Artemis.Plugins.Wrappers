#pragma once

enum RazerCommand : unsigned int {
	CommandInit = 1,
	CommandInitSDK,
	CommandUnInit,
	CommandCreateEffect,
	CommandCreateKeyboardEffect,
	CommandCreateMouseEffect,
	CommandCreateHeadsetEffect,
	CommandCreateMousepadEffect,
	CommandCreateKeypadEffect,
	CommandCreateChromaLinkEffect,
	CommandDeleteEffect,
	CommandSetEffect,
	CommandRegisterEventNotification,
	CommandUnregisterEventNotification,
	CommandQueryDevice
};