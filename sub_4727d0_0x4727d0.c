// 函数名称: sub_4727d0
// 虚拟地址: 0x4727d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4727d0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = arg1 * 0xb4
    int32_t eax = arg1 * 0xb4
    int32_t edx = *(eax + arg3 + 0x20)
    void* eax_1 = sub_4637c0(eax, edx, data_27e7a40 + 0x2c495c, edx)
    
    if (*eax_1 s< 0x1000)
        sub_5ab990(*(eax + arg3 + 0xc0), eax_1 + 8, *(eax_1 + 4))
        *(eax + arg3 + 0xc4) = *eax_1 u>> 2
        *(eax + arg3 + 0xc8) = 0
        *(eax + arg3 + 0xd0) = 0
        return 0
    
    sub_4c5870("gamestatePlayer.logLengthBytesCurrent < 4096", &data_83f3d3, "..\code\RFTGShared.cpp", 
        0x144c, "RftGClientSetLog")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
