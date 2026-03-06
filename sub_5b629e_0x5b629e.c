// 函数名称: sub_5b629e
// 虚拟地址: 0x5b629e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b629e(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 != 0 && divu.dp.d(0:0xffffffe0, arg1) u< arg2)
    if (arg1 != 0 && divu.dp.d(0:0xffffffe0, arg1) u< arg2)
        *__errno() = 0xc
        return 0
    
    uint32_t dwBytes = arg1 * arg2
    
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t i
    
    do
        int32_t result = 0
        
        if (dwBytes u<= 0xffffffe0)
            result = HeapAlloc(data_bed0f8, HEAP_ZERO_MEMORY, dwBytes)
        
        if (dwBytes u<= 0xffffffe0 && result != 0)
            return result
        
        if (data_bed104 == 0)
            if (arg3 != 0)
                *arg3 = 0xc
            
            return result
        
        i = __callnewh(dwBytes)
    while (i != 0)
    
    if (arg3 != 0)
        *arg3 = 0xc
    
    return 0
}
