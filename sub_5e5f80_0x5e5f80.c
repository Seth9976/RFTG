// 函数名称: sub_5e5f80
// 虚拟地址: 0x5e5f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5f80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* esi_1 = ecx + eax_1 - 0x10
    int32_t* ecx_1 = ecx + edi - 0x10
    int32_t edi_1 = ecx_1[3]
    int32_t var_8 = *(ecx + edi - 8)
    int32_t var_c = ecx_1[1]
    int32_t edx = 0
    int32_t var_24 = eax_1
    int32_t var_10 = *ecx_1
    int32_t var_20
    int32_t var_1c
    
    while (esi_1 u>= ecx)
        edx += edi - 0x100
        *(esi_1 + 8) = var_8
        *(esi_1 + 4) = var_c
        *esi_1 = var_10
        *(esi_1 + 0xc) = edi_1
        esi_1 -= 0x10
        var_20 = edx
        
        if (edx * 2 s>= eax_1)
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx_1[-1])
            ecx_1 -= 0x10
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(edi_1)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(ecx_1[2])
            var_1c = (eax_3 + eax_5) u>> 1 | adc.d(edx_1, edx_2, eax_3 + eax_5 u< eax_3) << 0x1f
            int32_t eax_11
            int32_t edx_4
            edx_4:eax_11 = sx.q(var_8)
            int32_t eax_13
            int32_t edx_5
            edx_5:eax_13 = sx.q(ecx_1[1])
            var_8 = (eax_9 + eax_11) u>> 1 | adc.d(edx_3, edx_4, eax_9 + eax_11 u< eax_9) << 0x1f
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = sx.q(var_c)
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(*ecx_1)
            var_c = (eax_13 + eax_15) u>> 1 | adc.d(edx_5, edx_6, eax_13 + eax_15 u< eax_13) << 0x1f
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = sx.q(var_10)
            eax_1 = var_24
            var_10 = (eax_17 + eax_19) u>> 1 | adc.d(edx_7, edx_8, eax_17 + eax_19 u< eax_17) << 0x1f
            edi_1 = var_1c
            edx = var_20 - eax_1
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2, var_24, var_20, var_1c, edi - 0x100, ecx, 
        var_10, var_c, var_8)
}
