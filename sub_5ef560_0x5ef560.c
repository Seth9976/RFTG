// 函数名称: sub_5ef560
// 虚拟地址: 0x5ef560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef560(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t edi = *(edx + 0x10)
    int32_t ebx = sx.d(*(edi + ecx - 2))
    int32_t eax = ecx * 2
    int16_t* ecx_1 = edi + ecx - 4
    int16_t* eax_1 = edi + eax - 8
    int32_t var_8 = sx.d(*(edi + ecx - 4))
    
    if (eax_1 u>= edi)
        do
            int32_t edx_1 = sx.d(ecx_1[1])
            int32_t esi_1 = sx.d(*ecx_1)
            eax_1[3] = ((ebx + edx_1) s>> 1).w
            eax_1[2] = ((var_8 + esi_1) s>> 1).w
            eax_1[1] = edx_1.w
            *eax_1 = esi_1.w
            eax_1 -= 8
            ecx_1 -= 4
            ebx = edx_1
            var_8 = esi_1
        while (eax_1 u>= edi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_8)
}
