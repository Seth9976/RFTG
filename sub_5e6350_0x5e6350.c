// 函数名称: sub_5e6350
// 虚拟地址: 0x5e6350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e6350(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int32_t* ecx = *(ebx + 0x10)
    int32_t edi = *ecx
    void* i = ecx + eax_2
    int32_t var_c = ecx[1]
    void* esi = &ecx[2]
    int32_t var_10 = ecx[2]
    int32_t var_14 = ecx[3]
    int32_t var_18 = ecx[4]
    int32_t edx_4 = ecx[5]
    int32_t var_28_1 = eax_2
    int32_t var_8 = 0
    int32_t var_1c = edx_4
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t ebx_2 = var_8 + eax_2
            esi += 0x18
            var_8 = ebx_2
            
            if (ebx_2 * 2 s>= eax - 0x180)
                *(ecx_1 - 4) = var_c
                *ecx_1 = var_10
                *(ecx_1 + 4) = var_14
                *(ecx_1 + 8) = var_18
                *(ecx_1 - 8) = edi
                *(ecx_1 + 0xc) = edx_4
                int32_t eax_9
                int32_t edx_5
                edx_5:eax_9 = sx.q(*(esi - 8))
                int32_t eax_11
                int32_t edx_6
                edx_6:eax_11 = sx.q(edi)
                ecx_1 += 0x18
                int32_t eax_15
                int32_t edx_7
                edx_7:eax_15 = sx.q(*(esi - 4))
                int32_t eax_17
                int32_t edx_8
                edx_8:eax_17 = sx.q(var_c)
                int32_t eax_19
                int32_t edx_9
                edx_9:eax_19 = sx.q(*esi)
                var_c = (eax_15 + eax_17) u>> 1 | adc.d(edx_7, edx_8, eax_15 + eax_17 u< eax_15) << 0x1f
                int32_t eax_21
                int32_t edx_10
                edx_10:eax_21 = sx.q(var_10)
                int32_t eax_23
                int32_t edx_11
                edx_11:eax_23 = sx.q(*(esi + 4))
                var_10 =
                    (eax_19 + eax_21) u>> 1 | adc.d(edx_9, edx_10, eax_19 + eax_21 u< eax_19) << 0x1f
                int32_t eax_25
                int32_t edx_12
                edx_12:eax_25 = sx.q(var_14)
                int32_t eax_27
                int32_t edx_13
                edx_13:eax_27 = sx.q(*(esi + 8))
                var_14 =
                    (eax_23 + eax_25) u>> 1 | adc.d(edx_11, edx_12, eax_23 + eax_25 u< eax_23) << 0x1f
                int32_t eax_29
                int32_t edx_14
                edx_14:eax_29 = sx.q(var_18)
                int32_t eax_31
                int32_t edx_15
                edx_15:eax_31 = sx.q(*(esi + 0xc))
                var_18 =
                    (eax_27 + eax_29) u>> 1 | adc.d(edx_13, edx_14, eax_27 + eax_29 u< eax_27) << 0x1f
                int32_t eax_33
                int32_t edx_16
                edx_16:eax_33 = sx.q(var_1c)
                edx_4 =
                    (eax_31 + eax_33) u>> 1 | adc.d(edx_15, edx_16, eax_31 + eax_33 u< eax_31) << 0x1f
                var_8 -= eax - 0x180
                var_1c = edx_4
                edi = (eax_9 + eax_11) u>> 1 | adc.d(edx_5, edx_6, eax_9 + eax_11 u< eax_9) << 0x1f
            
            eax_2 = var_28_1
        while (ecx_1 - 8 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_2
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
