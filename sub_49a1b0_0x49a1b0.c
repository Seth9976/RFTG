// 函数名称: sub_49a1b0
// 虚拟地址: 0x49a1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49a1b0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg3 + 1 s> 0)
        int32_t eax_3 = *(arg2 + 0x10) * 0x41c64e6d + 0x3039
        *(arg2 + 0x10) = eax_3
        int32_t edx = 0
        
        if (modu.dp.d(edx:eax_3, arg3 + 1) != 0)
            return *(arg4 + ((modu.dp.d(edx:eax_3, arg3 + 1) - 1) << 2))
        
        return divu.dp.d(edx:eax_3, arg3 + 1) | (modu.dp.d(edx:eax_3, arg3 + 1) - 1)
    
    sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0xcd, "RandomLCInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
