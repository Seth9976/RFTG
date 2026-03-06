// 函数名称: sub_5de980
// 虚拟地址: 0x5de980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de980(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0 && *(*(arg1 + 0x278) + 4) == 0)
    if (arg2 s< 0 && *(*(arg1 + 0x278) + 4) == 0)
        sub_5cce60("Negative swap interval unsupported in this GL")
        return 0xffffffff
    
    int32_t eax_2 = *(*(arg1 + 0x278) + 0x24)
    
    if (eax_2 == 0)
        sub_5cd050(4)
        return 0xffffffff
    
    if (eax_2(arg2) == 1)
        return 0
    
    sub_5dc5a0("wglSwapIntervalEXT()")
    return 0xffffffff
}
