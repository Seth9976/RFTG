// 函数名称: sub_4125f0
// 虚拟地址: 0x4125f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4125f0()
{
    // 第一条实际指令: if (data_27e7a6c != 0)
    if (data_27e7a6c != 0)
        sub_412350()
    
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    
    while (*(data_27e7a70 + 0x5c) != 0)
        if (sub_50b930() s>= 0xa)
            break
        
        int32_t ebx_2 = sub_4e7480(sub_4db440(data_27e7a70 + 0x54))
        int32_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t performanceCount_2 = performanceCount
        int32_t esi_2 = performanceCount_2 - performanceCount_1
        int32_t var_10
        int32_t edi_2 = sbb.d(var_10, ebx_2, performanceCount_2 u< performanceCount_1)
        
        if ((data_3160a20 & 1) == 0)
            data_3160a20.d |= 1
            int32_t frequency
            QueryPerformanceFrequency(&frequency)
            data_3160a18 = frequency
            int32_t var_18
            data_3160a1c = var_18
        
        int32_t eax_5
        uint32_t edx_2
        eax_5, edx_2 = __allmul(esi_2, edi_2, 0x3e8, 0)
        
        if (__aulldiv(eax_5, edx_2, data_3160a18, data_3160a1c) s> 0xa)
            break
    
    void* result = data_27e7a70
    
    if (*(result + 0x5c) == 0)
        result = sub_50b930()
        
        if (result == 0)
            *(data_27e7a70 + 0x64) = 4
            return sub_412350()
    
    return result
}
