// 函数名称: sub_601d30
// 虚拟地址: 0x601d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_601d30(void* arg1, int32_t arg2, int16_t* arg3)
{
    // 第一条实际指令: int32_t edi_1 = arg2 << 9
    int32_t edi_1 = arg2 << 9
    void* ecx_1 = edi_1 + arg1 + 0xa2
    *(ecx_1 - 2) = (modu.dp.d(0:(*(arg1 + 0x14b0) + arg2), 0xa)).w + 0x30
    
    if (*(arg1 + 0x14b4) != 0)
        *ecx_1 = 0x20
        ecx_1 += 2
    
    int16_t result = *arg3
    
    if (result == 0)
        *ecx_1 = 0
        return 0
    
    void* edx_6 = ecx_1 - edi_1 - arg1 - 0xa0
    int16_t* ebx_1 = arg3
    
    while (edx_6 s>> 1 u< 0x100)
        ebx_1 = &ebx_1[1]
        *ecx_1 = result
        result = *ebx_1
        ecx_1 += 2
        edx_6 += 2
        
        if (result == 0)
            break
    
    *ecx_1 = 0
    return result
}
