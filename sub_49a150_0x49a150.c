// 函数名称: sub_49a150
// 虚拟地址: 0x49a150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49a150(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (arg4 s> 0)
        int32_t eax_3 = *(arg3 + 0x10) * 0x41c64e6d + 0x3039
        *(arg3 + 0x10) = eax_3
        return *(arg5 + (modu.dp.d(0:eax_3, arg4) << 2))
    
    sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0xcd, "RandomLCInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
