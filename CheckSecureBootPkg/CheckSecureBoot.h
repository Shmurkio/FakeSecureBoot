#pragma once

extern "C" {

    #include <Uefi.h>
    #include <Library/UefiLib.h>
    #include <Library/BaseMemoryLib.h>
    #include <Library/UefiApplicationEntryPoint.h>
    #include <Library/UefiBootServicesTableLib.h>
    #include <Library/UefiRuntimeServicesTableLib.h>

    #include <Guid/GlobalVariable.h>

}

extern "C" EFI_STATUS EFIAPI CheckSecureBoot();