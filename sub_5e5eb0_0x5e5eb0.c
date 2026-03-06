// 函数名称: sub_5e5eb0
// 虚拟地址: 0x5e5eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5eb0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(edi + 8)))
    int32_t* ecx = *(edi + 0x10)
    void* eax_3 = eax_2 + ecx
    int32_t* esi = ecx
    int32_t ebx = *esi
    int32_t edx = 0
    int32_t var_8 = esi[1]
    
    while (ecx u< eax_3)
        edx += eax_2
        esi = &esi[2]
        
        if (edx * 2 s>= eax - 0x80)
            ecx[1] = var_8
            *ecx = ebx
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(*esi)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(ebx)
            ecx = &ecx[2]
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q(esi[1])
            int32_t eax_15
            int32_t edx_5
            edx_5:eax_15 = sx.q(var_8)
            edx -= eax - 0x80
            ebx = (eax_7 + eax_9) u>> 1 | adc.d(edx_2, edx_3, eax_7 + eax_9 u< eax_7) << 0x1f
            var_8 = (eax_13 + eax_15) u>> 1 | adc.d(edx_4, edx_5, eax_13 + eax_15 u< eax_13) << 0x1f
            edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_2
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
