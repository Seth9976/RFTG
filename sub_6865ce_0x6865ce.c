// 函数名称: sub_6865ce
// 虚拟地址: 0x6865ce
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6865ce(uint32_t* arg1) __noreturn
{
    // 第一条实际指令: sub_5acd29()
    sub_5acd29()
    void* eax_1 = sub_5acd09(sub_5acd23())
    
    if (eax_1 != 0)
        *(eax_1 + 0x54) = arg1[0x15]
        *(eax_1 + 0x58) = arg1[0x16]
        *(eax_1 + 4) = arg1[1]
        sub_5acefe(arg1)
    else
        if (sub_5acd5d(sub_5acd23(), arg1) == 0)
            ExitThread(GetLastError())
            noreturn
        
        *arg1 = GetCurrentThreadId()
    
    __callthreadstartex()
    noreturn
}
