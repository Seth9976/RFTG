// 函数名称: sub_6640b0
// 虚拟地址: 0x6640b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6640b0(void* arg1, int32_t arg2) __noreturn
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t eax_1 = *(arg1 + 0x40)
        
        if (eax_1 != 0)
            eax_1(arg1, arg2)
    
    ExitProcess(0)
    noreturn
}
