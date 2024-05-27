# FakeSecureBoot
UEFI DXE driver to fake Secure Boot

Hooks the gRT->GetVariable function to always return enabled if Secure Boot state is queried.

Load the driver FakeSecureBoot.efi and check with CheckSecureBoot.efi.

Alternatively the compiled FakeSecureBoot.ffs can be added to the BIOS so it loads the driver automatically each boot.

Only works for AMI UEFI.

[Tutorial](https://www.youtube.com/watch?v=FDSA2NzzQIA)
