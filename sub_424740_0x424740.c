// 函数名称: sub_424740
// 虚拟地址: 0x424740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424740(int32_t arg1, void* arg2 @ edi)
{
    // 第一条实际指令: if (*arg2 != 0)
    if (*arg2 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGClient.cpp", 0x137c, 
            "HandToDiscardSelection")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = *(arg2 + 0x74)
    
    if (eax_1 == 0 || eax_1 == 8)
        if (arg1 == 0xffffffff)
            int32_t eax_3 = eax_1 | arg1
            *((eax_3 << 2) + &data_c020d8) -= 1
            *(arg2 + 0x74) = 1
            return eax_3
        
        eax_1 = *sub_46b2b0(arg1)
        *((eax_1 << 2) + &data_c020d8) -= 1
    else if (eax_1 != 7)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1387, "HandToDiscardSelection")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *(arg2 + 0x74) = 1
    return eax_1
}
