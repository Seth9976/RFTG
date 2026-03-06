// 函数名称: sub_46d940
// 虚拟地址: 0x46d940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46d940(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x46))
    for (int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x46)); i != 0xffffffff; 
            i = sx.d(*(arg3 + ((i * 5 + 0x11d) << 2))))
        if (*(*(arg3 + i * 0x14 + 0x46c) + 4) == 0xa2)
            return i
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x804, "find_oort")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
