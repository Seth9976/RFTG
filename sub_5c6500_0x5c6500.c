// 函数名称: sub_5c6500
// 虚拟地址: 0x5c6500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6500(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x3c)
    int32_t eax = *(arg1 + 0x3c)
    int32_t ecx = *(arg1 + 0x38)
    int32_t edi = *(arg1 + 0x30)
    int32_t edx_1 = adc.d(*(arg1 + 0x34), 0, edi u>= 0xffffffff)
    
    if (edx_1 u>= eax && (edx_1 u> eax || edi + 1 u>= ecx))
        int32_t eax_3 = (ecx + 0x10) << 4
        
        if (*(arg1 + 0x38) << 4 u> eax_3)
            zip_error_set(arg1 + 8, 0xe, 0)
            return 0xffffffff
        
        int32_t eax_4 = _realloc(*(arg1 + 0x40), eax_3)
        
        if (eax_4 == 0)
            zip_error_set(arg1 + 8, 0xe, 0)
            return 0xffffffff
        
        *(arg1 + 0x40) = eax_4
        *(arg1 + 0x38) = ecx + 0x10
        *(arg1 + 0x3c) = adc.d(eax, 0, ecx u>= 0xfffffff0)
    
    int32_t result = *(arg1 + 0x30)
    int32_t ecx_4 = *(arg1 + 0x34)
    *(arg1 + 0x30) = result + 1
    int32_t* eax_8 = (result << 4) + *(arg1 + 0x40)
    *(arg1 + 0x34) = adc.d(ecx_4, 0, result u>= 0xffffffff)
    sub_5c38d0(eax_8)
    return result
}
