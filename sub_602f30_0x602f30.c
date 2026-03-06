// 函数名称: sub_602f30
// 虚拟地址: 0x602f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_602f30(HMODULE arg1, HWND arg2 @ edi)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[8] != 0)
        return 
    
    esi[0xb] = arg2
    
    if (sub_5dc630() s>= 0)
        esi[6] = 1
        CoCreateInstance(&data_8361a0, 0, CLSCTX_INPROC_SERVER, &data_835bf0, &esi[7])
    
    esi[8] = 1
    arg1 = sub_5def10("imm32.dll")
    esi[0x53a] = arg1
    
    if (arg1 != 0)
        int32_t eax_2 = sub_5defa0(arg1, "ImmLockIMC")
        HMODULE ecx = esi[0x53a]
        esi[0x53d] = eax_2
        int32_t eax_3 = sub_5defa0(ecx, "ImmUnlockIMC")
        HMODULE edx = esi[0x53a]
        esi[0x53e] = eax_3
        esi[0x53f] = sub_5defa0(edx, "ImmLockIMCC")
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_5defa0(esi[0x53a], "ImmUnlockIMCC")
        esi[0x540] = eax_6
        sub_601a70(esi, edx_1, arg2)
        HIMC param1 = ImmGetContext(arg2)
        esi[0xd] = param1
        ImmReleaseContext(arg2, param1)
        
        if (esi[0xd] == 0)
            esi[0xa] = 0
            return sub_6024e0(esi) __tailcall
        
        esi[0xa] = 1
        sub_601ab0(esi)
        sub_6019c0(esi)
        esi[0x541] = sub_6021b0(esi)
        sub_601ab0(esi)
        return sub_6024e0(esi) __tailcall
    
    esi[0xa] = arg1
}
