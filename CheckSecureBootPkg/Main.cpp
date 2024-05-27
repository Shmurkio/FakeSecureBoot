#include "CheckSecureBoot.h"

extern "C" EFI_STATUS EFIAPI UefiMain(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    
    return CheckSecureBoot();

}