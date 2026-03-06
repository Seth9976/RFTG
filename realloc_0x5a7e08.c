// 函数名称: _realloc
// 虚拟地址: 0x5a7e08
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_realloc(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return sub_5a881a(arg2)
    
    uint32_t dwBytes = arg2
    
    if (dwBytes == 0)
        __free_base(arg1)
        return 0
    
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result
    
    while (true)
        if (dwBytes u<= 0xffffffe0)
            if (dwBytes == 0)
                dwBytes += 1
            
            int32_t result_1 = HeapReAlloc(data_bed0f8, HEAP_NONE, arg1, dwBytes)
            
            if (result_1 != 0)
                result = result_1
                break
            
            if (data_bed104 == result_1)
                void* eax_7 = __errno()
                *eax_7 = sub_5abcf1(GetLastError())
                result = result_1
                break
            
            if (__callnewh(dwBytes) == 0)
                void* eax_4 = __errno()
                *eax_4 = sub_5abcf1(GetLastError())
            else
                continue
        else
            __callnewh(dwBytes)
            *__errno() = 0xc
        
        result = 0
        break
    
    return result
}
