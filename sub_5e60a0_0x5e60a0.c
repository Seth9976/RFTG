// 函数名称: sub_5e60a0
// 虚拟地址: 0x5e60a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e60a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t ebx = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    int32_t* eax_3 = *(esi + 0x10)
    int32_t edi = *eax_3
    int32_t var_c = eax_3[1]
    void* i = eax_3 + ebx
    int32_t var_10 = eax_3[2]
    int32_t edx_2 = eax_3[3]
    int32_t var_20_1 = ebx
    int32_t var_8 = 0
    int32_t var_14 = edx_2
    
    if (eax_3 u< i)
        void* esi_1 = &eax_3[2]
        void* ecx = &eax_3[2]
        
        do
            int32_t eax_5 = var_8 + ebx
            var_8 = eax_5
            esi_1 += 0x10
            
            if (eax_5 * 2 s>= eax - 0x100)
                *(ecx - 4) = var_c
                *ecx = var_10
                *(ecx + 4) = edx_2
                *(ecx - 8) = edi
                int32_t eax_10
                int32_t edx_3
                edx_3:eax_10 = sx.q(*(esi_1 - 8))
                int32_t eax_12
                int32_t edx_4
                edx_4:eax_12 = sx.q(edi)
                ecx += 0x10
                int32_t eax_16
                int32_t edx_5
                edx_5:eax_16 = sx.q(*(esi_1 - 4))
                int32_t eax_18
                int32_t edx_6
                edx_6:eax_18 = sx.q(var_c)
                int32_t eax_20
                int32_t edx_7
                edx_7:eax_20 = sx.q(*esi_1)
                var_c = (eax_16 + eax_18) u>> 1 | adc.d(edx_5, edx_6, eax_16 + eax_18 u< eax_16) << 0x1f
                int32_t eax_22
                int32_t edx_8
                edx_8:eax_22 = sx.q(var_10)
                int32_t eax_24
                int32_t edx_9
                edx_9:eax_24 = sx.q(*(esi_1 + 4))
                var_10 =
                    (eax_20 + eax_22) u>> 1 | adc.d(edx_7, edx_8, eax_20 + eax_22 u< eax_20) << 0x1f
                int32_t eax_26
                int32_t edx_10
                edx_10:eax_26 = sx.q(var_14)
                edi = (eax_10 + eax_12) u>> 1 | adc.d(edx_3, edx_4, eax_10 + eax_12 u< eax_10) << 0x1f
                edx_2 =
                    (eax_24 + eax_26) u>> 1 | adc.d(edx_9, edx_10, eax_24 + eax_26 u< eax_24) << 0x1f
                var_8 -= eax - 0x100
                var_14 = edx_2
            
            ebx = var_20_1
        while (ecx - 8 u< i)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = ebx
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
