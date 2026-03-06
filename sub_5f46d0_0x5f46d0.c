// 函数名称: sub_5f46d0
// 虚拟地址: 0x5f46d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f46d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t ecx_1 = ((edx & 3) + eax_1) s>> 2
    int32_t* edi = *(esi + 0x10)
    void* eax_2 = edi + ecx_1
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(*edi)
    int32_t ebx = eax_4
    int32_t var_48 = edx_2
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(edi[1])
    int32_t var_1c = eax_6
    int32_t var_18 = edx_3
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(edi[2])
    int32_t var_2c = eax_8
    int32_t var_28 = edx_4
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q(edi[3])
    int32_t var_3c = eax_10
    int32_t var_38 = edx_5
    
    if (edi u< eax_2)
        void* esi_1 = &edi[2]
        void* ecx_2 = &edi[2]
        int32_t i_1 = ((eax_2 - edi - 1) u>> 4) + 1
        int32_t i
        
        do
            int32_t eax_17
            int32_t edx_6
            edx_6:eax_17 = sx.q(*(ecx_2 - 8))
            int32_t eax_19
            int32_t edx_7
            edx_7:eax_19 = sx.q(*(ecx_2 - 4))
            int32_t eax_21
            int32_t edx_8
            edx_8:eax_21 = sx.q(*ecx_2)
            int32_t eax_23
            int32_t edx_9
            edx_9:eax_23 = sx.q(*(ecx_2 + 4))
            ecx_2 += 0x40
            int32_t edx_11 = eax_17 + ebx
            int32_t eax_25 = adc.d(edx_6, var_48, eax_17 + ebx u< eax_17)
            ebx = eax_17
            *(esi_1 - 8) = edx_11 u>> 1 | eax_25 << 0x1f
            *(esi_1 - 4) =
                (eax_19 + var_1c) u>> 1 | adc.d(edx_7, var_18, eax_19 + var_1c u< eax_19) << 0x1f
            *esi_1 = (eax_21 + var_2c) u>> 1 | adc.d(edx_8, var_28, eax_21 + var_2c u< eax_21) << 0x1f
            esi_1 += 0x10
            *(esi_1 - 0xc) =
                (eax_23 + var_3c) u>> 1 | adc.d(edx_9, var_38, eax_23 + var_3c u< eax_23) << 0x1f
            i = i_1
            i_1 -= 1
            var_48 = edx_6
            var_1c = eax_19
            var_18 = edx_7
            var_2c = eax_21
            var_28 = edx_8
            var_3c = eax_23
            var_38 = edx_9
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = ecx_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
