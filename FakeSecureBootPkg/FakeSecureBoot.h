#pragma once

extern "C" {

    #include <Uefi.h>
    #include <Library/UefiLib.h>
    #include <Library/BaseMemoryLib.h>
    #include <Library/UefiDriverEntryPoint.h>
    #include <Library/UefiBootServicesTableLib.h>
    #include <Library/UefiRuntimeServicesTableLib.h>

    #include <Guid/GlobalVariable.h>

}

extern "C" EFI_STATUS EFIAPI GetVariableHook(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, OUT UINT32 *Attributes, IN OUT UINTN *DataSize, OUT VOID *Data);

extern EFI_GET_VARIABLE gOrigGetVariable;