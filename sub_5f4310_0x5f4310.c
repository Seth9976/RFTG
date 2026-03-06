// 函数名称: sub_5f4310
// 虚拟地址: 0x5f4310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f4310(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t ecx_1 = (eax_1 - edx) s>> 1
    int32_t* edi = *(esi + 0x10)
    void* eax_3 = edi + ecx_1
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(*edi)
    int32_t ebx = eax_5
    int32_t var_48 = edx_1
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(edi[1])
    int32_t var_1c = eax_7
    int32_t var_18 = edx_2
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(edi[2])
    int32_t var_2c = eax_9
    int32_t var_28 = edx_3
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q(edi[3])
    int32_t var_3c = eax_11
    int32_t var_38 = edx_4
    
    if (edi u< eax_3)
        void* esi_1 = &edi[2]
        void* ecx_2 = &edi[2]
        int32_t i_1 = ((eax_3 - edi - 1) u>> 4) + 1
        int32_t i
        
        do
            int32_t eax_18
            int32_t edx_5
            edx_5:eax_18 = sx.q(*(ecx_2 - 8))
            int32_t eax_20
            int32_t edx_6
            edx_6:eax_20 = sx.q(*(ecx_2 - 4))
            int32_t eax_22
            int32_t edx_7
            edx_7:eax_22 = sx.q(*ecx_2)
            int32_t eax_24
            int32_t edx_8
            edx_8:eax_24 = sx.q(*(ecx_2 + 4))
            ecx_2 += 0x20
            int32_t edx_10 = eax_18 + ebx
            int32_t eax_26 = adc.d(edx_5, var_48, eax_18 + ebx u< eax_18)
            ebx = eax_18
            *(esi_1 - 8) = edx_10 u>> 1 | eax_26 << 0x1f
            *(esi_1 - 4) =
                (eax_20 + var_1c) u>> 1 | adc.d(edx_6, var_18, eax_20 + var_1c u< eax_20) << 0x1f
            *esi_1 = (eax_22 + var_2c) u>> 1 | adc.d(edx_7, var_28, eax_22 + var_2c u< eax_22) << 0x1f
            esi_1 += 0x10
            *(esi_1 - 0xc) =
                (eax_24 + var_3c) u>> 1 | adc.d(edx_8, var_38, eax_24 + var_3c u< eax_24) << 0x1f
            i = i_1
            i_1 -= 1
            var_48 = edx_5
            var_1c = eax_20
            var_18 = edx_6
            var_2c = eax_22
            var_28 = edx_7
            var_3c = eax_24
            var_38 = edx_8
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = ecx_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
