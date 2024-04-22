#include <iostream>
#include <Windows.h>

void MemoryWrite(void *Address, void *Pattern, int Size)
{
    DWORD OldProtection;

    VirtualProtect(Address, Size, PAGE_EXECUTE_READWRITE, &OldProtection);
    memcpy(Address, Pattern, Size);
    VirtualProtect(Address, Size, OldProtection, &OldProtection);
}

int main()
{
    // Anti-Cheat Bypass
    DWORD AntiCheatAddress = 0x00448AD1; // Address of the anti-cheat function
    MemoryWrite((void*)AntiCheatAddress, (void *)"\xEB\xD4", 2); // Replace the first few bytes of the anti-cheat function with a jump instruction to bypass it

    // Full Bright
    DWORD FullBrightAddress = 0x00D3F521; // Address of the function that controls the brightness
    MemoryWrite((void*)FullBrightAddress, (void *)"\x90\x90\x90\x90\x90", 5); // Replace the first few bytes of the function with NOP instructions to enable full bright

    // No Recoil
    DWORD NoRecoilAddress = 0x007721D1; // Address of the function that controls the recoil
    MemoryWrite((void*)NoRecoilAddress, (void *)"\x90\x90\x90\x90\x90", 5); // Replace the first few bytes of the function with NOP instructions to disable recoil

    // No Spread
    DWORD NoSpreadAddress = 0x008545A1; // Address of the function that controls the spread
    MemoryWrite((void*)NoSpreadAddress, (void *)"\x90\x90\x90\x90\x90", 5); // Replace the first few bytes of the function with NOP instructions to disable spread

    // Accuracy
    DWORD AccuracyAddress = 0x01137751; // Address of the function that controls the accuracy
    MemoryWrite((void*)AccuracyAddress, (void *)"\x90\x90\x90\x90\x90", 5); // Replace the first few bytes of the function with NOP instructions to enable 100% accuracy

    // Endurance
    DWORD EnduranceAddress = 0x00EA2631; // Address of the function that controls the endurance
    MemoryWrite((void*)EnduranceAddress, (void *)"\x90\x90\x90\x90\x90", 5); // Replace the first few bytes of the function with NOP instructions to enable infinite endurance

    std::cout << "Warface Cheat Menu activated!" << std::endl;

    return 0;
}