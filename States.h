#pragma once

enum SMStates
{
	enumStateInvalid = -1,
	enumStateInit = 0,
	enumStateReady,
	enumStateNotReady,
	enumStateBusy,
	enumStateFinished,
	enumStateAborted,
	enumStateMax
}