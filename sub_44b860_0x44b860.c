// 函数名称: sub_44b860
// 虚拟地址: 0x44b860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44b860()
{
    // 第一条实际指令: void* eax = data_27e7a40
    void* eax = data_27e7a40
    void* edi = *(eax + 0x548)
    void* result
    
    if (*(sub_46b2b0(*(eax + 0x74)) + 8) != 1)
        int32_t edx_1 = sx.d(*(sub_418a10() + 0x458))
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            result = edi + 0x220
            
            do
                if (*result != 0)
                    result.b = 1
                    return result
                
                ecx_1 += 1
                result += 0x1f98
            while (ecx_1 s< edx_1)
    
    result.b = 0
    return result
}
