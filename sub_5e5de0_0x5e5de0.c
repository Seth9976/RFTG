// 函数名称: sub_5e5de0
// 虚拟地址: 0x5e5de0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5de0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t ebx = *(edi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(edi + 8)))
    int32_t esi = *(edi + 0x10)
    int32_t* ecx = esi + eax_1 - 8
    int32_t* esi_1 = esi + ebx - 8
    int32_t var_8 = esi_1[1]
    int32_t edx = 0
    int32_t var_1c = eax_1
    int32_t var_c = *esi_1
    
    while (ecx u>= esi)
        edx += ebx - 0x80
        ecx[1] = var_8
        *ecx = var_c
        ecx -= 8
        
        if (edx * 2 s>= eax_1)
            int32_t eax_2 = esi_1[-1]
            esi_1 -= 8
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(eax_2)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(var_8)
            int32_t eax_7
            int32_t edx_3
            edx_3:eax_7 = sx.q(*esi_1)
            var_8 = (eax_3 + eax_5) u>> 1 | adc.d(edx_1, edx_2, eax_3 + eax_5 u< eax_3) << 0x1f
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(var_c)
            eax_1 = var_1c
            var_c = (eax_7 + eax_9) u>> 1 | adc.d(edx_3, edx_4, eax_7 + eax_9 u< eax_7) << 0x1f
            edi = arg1
            edx -= eax_1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_1
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
