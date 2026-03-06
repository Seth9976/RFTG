// 函数名称: sub_5e5d30
// 虚拟地址: 0x5e5d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5d30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t* ecx = *(arg1 + 0x10)
    void* eax_3 = eax_2 + ecx
    void* edx = nullptr
    int32_t* edi = ecx
    int32_t ebx = *edi
    
    while (ecx u< eax_3)
        edx += eax_2
        edi = &edi[1]
        
        if (edx * 2 s>= eax - 0x40)
            *ecx = ebx
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(*edi)
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(ebx)
            ecx = &ecx[1]
            ebx = (eax_6 + eax_8) u>> 1 | adc.d(edx_1, edx_2, eax_6 + eax_8 u< eax_6) << 0x1f
            edx -= eax - 0x40
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    *(arg1 + 0x18) = eax_2
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
