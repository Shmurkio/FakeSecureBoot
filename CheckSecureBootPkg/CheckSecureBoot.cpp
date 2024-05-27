#include "CheckSecureBoot.h"

extern "C" EFI_STATUS EFIAPI CheckSecureBoot() {

    /* Get the Secure Boot variable */

    UINT8 SecureBoot;

    UINTN DataSize = sizeof(SecureBoot);

    EFI_STATUS Status = gRT->GetVariable((CHAR16 *)L"SecureBoot", &gEfiGlobalVariableGuid, NULL, &DataSize, &SecureBoot);

    if (EFI_ERROR(Status)) {

        Print((CHAR16 *)L"Failed to retrieve the Secure Boot variable. Status: %r.\n", Status);

        return Status;

    }

    /* Print the result */

    if (SecureBoot == 1) {

        Print((CHAR16 *)L"Secure Boot is enabled.\n");

    }
    else if (SecureBoot == 0) {

        Print((CHAR16 *)L"Secure Boot is disabled.\n");

    }
    else {

        Print((CHAR16 *)L"Secure Boot state \"%u\" undefined.\n", SecureBoot);

    }

    return Status;

}