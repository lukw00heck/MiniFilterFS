#include "AVHeader.h"

#define THREAT_REGEX L"*VIRUS*"
UNICODE_STRING threatRegex = RTL_CONSTANT_STRING(THREAT_REGEX);

FLT_PREOP_CALLBACK_STATUS AntiVirusPreReadOperation(_Inout_ PFLT_CALLBACK_DATA Data,
	_In_ PCFLT_RELATED_OBJECTS FltObjects,
	_Flt_CompletionContext_Outptr_ PVOID *CompletionContext) 
{
	UNREFERENCED_PARAMETER(Data);
	UNREFERENCED_PARAMETER(FltObjects);
	UNREFERENCED_PARAMETER(CompletionContext);

	/**
	* TODO: ENTER IMPLEMENTATION HERE
	*/

	return FLT_PREOP_SUCCESS_NO_CALLBACK;
}

