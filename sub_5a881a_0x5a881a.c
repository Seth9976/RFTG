// 函数名称: sub_5a881a
// 虚拟地址: 0x5a881a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a881a(uint32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 0xffffffe0)
    if (arg1 u> 0xffffffe0)
        __callnewh(arg1)
        *__errno() = 0xc
        return 0
    
    int32_t edi
    int32_t var_10_1 = edi
    int32_t result
    
    while (true)
        if (data_bed0f8 == 0)
            __FF_MSGBANNER()
            sub_5af622(0x1e)
            __endthreadex(0xff)
            noreturn
        
        uint32_t dwBytes
        
        dwBytes = arg1 == 0 ? 1 : arg1
        
        result = HeapAlloc(data_bed0f8, HEAP_NONE, dwBytes)
        
        if (result != 0)
            break
        
        if (data_bed104 == result)
            *__errno() = 0xc
        else if (__callnewh(arg1) != 0)
            continue
        
        *__errno() = 0xc
        break
    
    return result
}
