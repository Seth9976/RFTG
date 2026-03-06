// 函数名称: sub_445500
// 虚拟地址: 0x445500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_445500(int32_t arg1 @ esi)
{
    // 第一条实际指令: if (arg1 s> 0x3e8)
    if (arg1 s> 0x3e8)
        int32_t eax
        eax.b = 0
        return eax
    
    if (arg1 s>= 0)
        int32_t eax_3
        eax_3.b = *(*(sub_418a10() + arg1 * 0x14 + 0x46c) + 0x90) s> 0
        return eax_3
    
    sub_4c5870("cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x42b9, "Is6PtCard")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
