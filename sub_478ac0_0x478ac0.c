// 函数名称: sub_478ac0
// 虚拟地址: 0x478ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_478ac0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: __builtin_memset(arg1, &data_840614, 0x1c)
    __builtin_memset(arg1, &data_840614, 0x1c)
    
    if (arg3 == 0xc)
        *(arg1 + 0x14) = fconvert.s(fconvert.t(*(arg1 + 0x14)) + fconvert.t(0.15000000596046448))
        *(arg1 + 0x18) = fconvert.s(fconvert.t(*(arg1 + 0x18)) - fconvert.t(0.02500000037252903))
        long double x87_r7_11 = fconvert.t(*(arg1 + 0x10))
        
        if (arg2 != 0)
            *(arg1 + 0x10) = fconvert.s(x87_r7_11 + fconvert.t(0.029999999329447746))
            return 
        
        *(arg1 + 0x10) = fconvert.s(x87_r7_11 - fconvert.t(0.029999999329447746))
        return 
    
    if (arg3 != 0xd && arg3 != 0xe)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x4eb, 
            "GetFirstPersonHandsPoseAdjustment")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *(arg1 + 0x14) = fconvert.s(fconvert.t(*(arg1 + 0x14)) + fconvert.t(0.075000002980232239))
    *(arg1 + 0x18) = fconvert.s(fconvert.t(*(arg1 + 0x18)) - fconvert.t(0.02500000037252903))
    long double x87_r7_4 = fconvert.t(*(arg1 + 0x10))
    
    if (arg2 != 0)
        *(arg1 + 0x10) = fconvert.s(x87_r7_4 + fconvert.t(0.05000000074505806))
        return 
    
    *(arg1 + 0x10) = fconvert.s(x87_r7_4 - fconvert.t(0.05000000074505806))
}
