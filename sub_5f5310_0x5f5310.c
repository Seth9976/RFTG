// 函数名称: sub_5f5310
// 虚拟地址: 0x5f5310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f5310(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    int32_t* edi = *(esi + 0x10)
    void* eax_4 = eax_3 + edi
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(*edi)
    int32_t ebx = eax_6
    int32_t var_88 = edx_1
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(edi[1])
    int32_t var_28 = eax_8
    int32_t var_24 = edx_2
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = sx.q(edi[2])
    int32_t var_38 = eax_10
    void* ecx = &edi[2]
    int32_t var_34 = edx_3
    int32_t eax_12
    int32_t edx_4
    edx_4:eax_12 = sx.q(edi[3])
    int32_t var_48 = eax_12
    int32_t var_44 = edx_4
    int32_t eax_14
    int32_t edx_5
    edx_5:eax_14 = sx.q(edi[4])
    int32_t var_18 = eax_14
    int32_t var_14 = edx_5
    int32_t eax_16
    int32_t edx_6
    edx_6:eax_16 = sx.q(edi[5])
    int32_t var_30 = eax_16
    int32_t var_2c = edx_6
    int32_t eax_18
    int32_t edx_7
    edx_7:eax_18 = sx.q(edi[6])
    int32_t var_50 = eax_18
    int32_t var_4c = edx_7
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = sx.q(edi[7])
    int32_t var_70 = eax_20
    int32_t var_6c = edx_8
    
    if (edi u< eax_4)
        void* esi_1 = &edi[2]
        int32_t i_1 = ((eax_4 - edi - 1) u>> 5) + 1
        int32_t i
        
        do
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = sx.q(*(ecx - 8))
            int32_t eax_29
            int32_t edx_10
            edx_10:eax_29 = sx.q(*(ecx - 4))
            int32_t eax_31
            int32_t edx_11
            edx_11:eax_31 = sx.q(*ecx)
            int32_t eax_33
            int32_t edx_12
            edx_12:eax_33 = sx.q(*(ecx + 4))
            int32_t eax_35
            int32_t edx_13
            edx_13:eax_35 = sx.q(*(ecx + 8))
            int32_t eax_37
            int32_t edx_14
            edx_14:eax_37 = sx.q(*(ecx + 0xc))
            int32_t eax_39
            int32_t edx_15
            edx_15:eax_39 = sx.q(*(ecx + 0x10))
            int32_t eax_41
            int32_t edx_16
            edx_16:eax_41 = sx.q(*(ecx + 0x14))
            ecx += 0x40
            *(esi_1 - 8) = (eax_27 + ebx) u>> 1 | adc.d(edx_9, var_88, eax_27 + ebx u< eax_27) << 0x1f
            *(esi_1 - 4) =
                (eax_29 + var_28) u>> 1 | adc.d(edx_10, var_24, eax_29 + var_28 u< eax_29) << 0x1f
            *esi_1 = (eax_31 + var_38) u>> 1 | adc.d(edx_11, var_34, eax_31 + var_38 u< eax_31) << 0x1f
            *(esi_1 + 4) =
                (eax_33 + var_48) u>> 1 | adc.d(edx_12, var_44, eax_33 + var_48 u< eax_33) << 0x1f
            *(esi_1 + 8) =
                (eax_35 + var_18) u>> 1 | adc.d(edx_13, var_14, eax_35 + var_18 u< eax_35) << 0x1f
            *(esi_1 + 0xc) =
                (eax_37 + var_30) u>> 1 | adc.d(edx_14, var_2c, eax_37 + var_30 u< eax_37) << 0x1f
            *(esi_1 + 0x10) =
                (eax_39 + var_50) u>> 1 | adc.d(edx_15, var_4c, eax_39 + var_50 u< eax_39) << 0x1f
            ebx = eax_27
            esi_1 += 0x20
            *(esi_1 - 0xc) =
                (eax_41 + var_70) u>> 1 | adc.d(edx_16, var_6c, eax_41 + var_70 u< eax_41) << 0x1f
            i = i_1
            i_1 -= 1
            var_88 = edx_9
            var_28 = eax_29
            var_24 = edx_10
            var_38 = eax_31
            var_34 = edx_11
            var_48 = eax_33
            var_44 = edx_12
            var_18 = eax_35
            var_14 = edx_13
            var_30 = eax_37
            var_2c = edx_14
            var_50 = eax_39
            var_4c = edx_15
            var_70 = eax_41
            var_6c = edx_16
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_3
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
