# FakeSecureBoot
UEFI DXE driver to fake Secure Boot.

Hooks the gRT->GetVariable function to always return enabled if Secure Boot state is queried.

Load the driver FakeSecureBoot.efi and check with CheckSecureBoot.efi.

Alternatively the compiled FakeSecureBoot.ffs can be added to the BIOS dump so it loads the driver automatically each boot.

[Tutorial](https://www.youtube.com/watch?v=FDSA2NzzQIA)

Built with [EDK2](github.com/tianocore/edk2). .FFS created with [GenMod](https://github.com/pbatard/ffs).
