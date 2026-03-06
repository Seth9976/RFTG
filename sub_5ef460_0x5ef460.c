// 函数名称: sub_5ef460
// 虚拟地址: 0x5ef460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5ef460(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = arg1
    int32_t edx = *(result + 0x18)
    int32_t ebx = edx << 2
    int32_t edi = *(result + 0x10)
    int16_t* ecx_1 = edi + ebx - 8
    int16_t* esi = edi + edx - 2
    int32_t edx_1 = sx.d(*esi)
    int32_t var_8_1 = ebx
    
    if (ecx_1 u>= edi)
        do
            int32_t eax = sx.d(*esi)
            ecx_1[3] = ((edx_1 * 3 + eax) s>> 2).w
            ecx_1[1] = ((eax * 3 + edx_1) s>> 2).w
            ecx_1[2] = ((eax + edx_1) s>> 1).w
            *ecx_1 = eax.w
            ecx_1 -= 8
            esi -= 2
            edx_1 = eax
        while (ecx_1 u>= edi)
        
        ebx = var_8_1
        result = arg1
    
    *(result + 0x50) += 1
    int32_t ecx_2 = *(result + 0x50)
    *(result + 0x18) = ebx
    
    if (*(result + (ecx_2 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_2 << 2) + 0x28))(result, arg2, var_8_1)
}
