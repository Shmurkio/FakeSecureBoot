#include "FakeSecureBoot.h"

EFI_GET_VARIABLE gOrigGetVariable;

extern "C" EFI_STATUS EFIAPI UefiMain(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {

    /* Store original GetVariable function */

    gOrigGetVariable = gRT->GetVariable;

    /* Hook GetVariable function */

    gRT->GetVariable = GetVariableHook;

    /* Return EFI_SUCCESS so driver's memory won't get overwritten */

    return EFI_SUCCESS;

}