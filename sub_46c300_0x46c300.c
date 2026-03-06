// 函数名称: sub_46c300
// 虚拟地址: 0x46c300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46c300(int32_t arg1, void* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_1c = entry_ebx
    
    if (*arg2 != 1)
        sub_4c5870("gfxGood.type == RFTGGFX_GOOD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x509, 
            "RFTGHandleTrade")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_24 = 1
    int32_t var_8 = *(arg2 + 0x7c)
    sub_469e10(arg3, arg1, 0xc, 0, &var_8, 1, 0, 0)
    int32_t ebx
    
    if (arg1 != 0xffffffff)
        ebx = *sub_46b2b0(arg1)
    else
        ebx = entry_ebx | arg1
    
    int32_t ecx = data_315fba4
    int32_t var_10 = 0x11
    int32_t var_c = ecx
    data_315fba4 = ecx + 1
    int32_t var_14 = ebx
    sub_46b1d0(arg2, &var_14)
    sub_4247f0(arg2)
    sub_469ff0(arg1)
    return 0
}
