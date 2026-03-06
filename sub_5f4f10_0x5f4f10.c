// 函数名称: sub_5f4f10
// 虚拟地址: 0x5f4f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f4f10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    int32_t* edi = *(esi + 0x10)
    void* eax_4 = eax_3 + edi
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*edi)
    int32_t ebx = eax_6
    int32_t var_68 = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(edi[1])
    int32_t var_1c = eax_8
    int32_t var_18 = edx_3
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(edi[2])
    void* ecx = &edi[2]
    int32_t var_2c = eax_10
    int32_t var_28 = edx_4
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(edi[3])
    int32_t var_3c = eax_12
    int32_t var_38 = edx_5
    int32_t eax_14
    int32_t edx_6
    edx_6:eax_14 = sx.q(edi[4])
    int32_t var_4c = eax_14
    int32_t var_48 = edx_6
    int32_t eax_16
    int32_t edx_7
    edx_7:eax_16 = sx.q(edi[5])
    int32_t var_5c = eax_16
    int32_t var_58 = edx_7
    
    if (edi u< eax_4)
        void* esi_1 = &edi[2]
        int32_t i_1 = (eax_4 - edi - 1) u/ 0x18 + 1
        int32_t i
        
        do
            int32_t eax_19
            int32_t edx_14
            edx_14:eax_19 = sx.q(*(ecx - 8))
            int32_t eax_21
            int32_t edx_15
            edx_15:eax_21 = sx.q(*(ecx - 4))
            int32_t eax_23
            int32_t edx_16
            edx_16:eax_23 = sx.q(*ecx)
            int32_t eax_25
            int32_t edx_17
            edx_17:eax_25 = sx.q(*(ecx + 4))
            int32_t eax_27
            int32_t edx_18
            edx_18:eax_27 = sx.q(*(ecx + 8))
            int32_t eax_29
            int32_t edx_19
            edx_19:eax_29 = sx.q(*(ecx + 0xc))
            ecx += 0x60
            int32_t edx_21 = eax_19 + ebx
            int32_t eax_31 = adc.d(edx_14, var_68, eax_19 + ebx u< eax_19)
            ebx = eax_19
            *(esi_1 - 8) = edx_21 u>> 1 | eax_31 << 0x1f
            *(esi_1 - 4) =
                (eax_21 + var_1c) u>> 1 | adc.d(edx_15, var_18, eax_21 + var_1c u< eax_21) << 0x1f
            *esi_1 = (eax_23 + var_2c) u>> 1 | adc.d(edx_16, var_28, eax_23 + var_2c u< eax_23) << 0x1f
            *(esi_1 + 4) =
                (eax_25 + var_3c) u>> 1 | adc.d(edx_17, var_38, eax_25 + var_3c u< eax_25) << 0x1f
            *(esi_1 + 8) =
                (eax_27 + var_4c) u>> 1 | adc.d(edx_18, var_48, eax_27 + var_4c u< eax_27) << 0x1f
            *(esi_1 + 0xc) =
                (eax_29 + var_5c) u>> 1 | adc.d(edx_19, var_58, eax_29 + var_5c u< eax_29) << 0x1f
            var_68 = edx_14
            var_1c = eax_21
            var_18 = edx_15
            var_2c = eax_23
            var_28 = edx_16
            var_3c = eax_25
            var_38 = edx_17
            var_4c = eax_27
            var_48 = edx_18
            esi_1 += 0x18
            i = i_1
            i_1 -= 1
            var_5c = eax_29
            var_58 = edx_19
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_3
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
