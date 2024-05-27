#include "FakeSecureBoot.h"

extern "C" EFI_STATUS EFIAPI GetVariableHook(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, OUT UINT32 *Attributes, IN OUT UINTN *DataSize, OUT VOID *Data) {

    /* Always return SecureBoot enabled if SecureBoot variable is queried */

    if (StrCmp(VariableName, (CHAR16 *)L"SecureBoot") == 0 && CompareGuid(VendorGuid, &gEfiGlobalVariableGuid)) {

        *((UINT8*)Data) = 1; // 1 means enabled

        *DataSize = sizeof(UINT8);

        return EFI_SUCCESS;
    }

    /* Return actual variable data if a different variable is queried */

    return gOrigGetVariable(VariableName, VendorGuid, Attributes, DataSize, Data);

}