// 函数名称: sub_5e6690
// 虚拟地址: 0x5e6690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e6690(void* arg1, int32_t arg2)
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
    int32_t var_1c = ecx[5]
    int32_t var_20 = ecx[6]
    int32_t edx_6 = ecx[7]
    int32_t var_30_1 = eax_2
    int32_t var_8 = 0
    int32_t var_24 = edx_6
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t ebx_2 = var_8 + eax_2
            esi += 0x20
            var_8 = ebx_2
            
            if (ebx_2 * 2 s>= eax - 0x200)
                *(ecx_1 - 4) = var_c
                *ecx_1 = var_10
                *(ecx_1 + 4) = var_14
                *(ecx_1 + 8) = var_18
                *(ecx_1 + 0xc) = var_1c
                *(ecx_1 + 0x10) = var_20
                *(ecx_1 - 8) = edi
                *(ecx_1 + 0x14) = edx_6
                int32_t eax_11
                int32_t edx_7
                edx_7:eax_11 = sx.q(*(esi - 8))
                int32_t eax_13
                int32_t edx_8
                edx_8:eax_13 = sx.q(edi)
                ecx_1 += 0x20
                int32_t eax_17
                int32_t edx_9
                edx_9:eax_17 = sx.q(*(esi - 4))
                int32_t eax_19
                int32_t edx_10
                edx_10:eax_19 = sx.q(var_c)
                int32_t eax_21
                int32_t edx_11
                edx_11:eax_21 = sx.q(*esi)
                var_c =
                    (eax_17 + eax_19) u>> 1 | adc.d(edx_9, edx_10, eax_17 + eax_19 u< eax_17) << 0x1f
                int32_t eax_23
                int32_t edx_12
                edx_12:eax_23 = sx.q(var_10)
                int32_t eax_25
                int32_t edx_13
                edx_13:eax_25 = sx.q(*(esi + 4))
                var_10 =
                    (eax_21 + eax_23) u>> 1 | adc.d(edx_11, edx_12, eax_21 + eax_23 u< eax_21) << 0x1f
                int32_t eax_27
                int32_t edx_14
                edx_14:eax_27 = sx.q(var_14)
                int32_t eax_29
                int32_t edx_15
                edx_15:eax_29 = sx.q(*(esi + 8))
                var_14 =
                    (eax_25 + eax_27) u>> 1 | adc.d(edx_13, edx_14, eax_25 + eax_27 u< eax_25) << 0x1f
                int32_t eax_31
                int32_t edx_16
                edx_16:eax_31 = sx.q(var_18)
                int32_t eax_33
                int32_t edx_17
                edx_17:eax_33 = sx.q(*(esi + 0xc))
                var_18 =
                    (eax_29 + eax_31) u>> 1 | adc.d(edx_15, edx_16, eax_29 + eax_31 u< eax_29) << 0x1f
                int32_t eax_35
                int32_t edx_18
                edx_18:eax_35 = sx.q(var_1c)
                int32_t eax_37
                int32_t edx_19
                edx_19:eax_37 = sx.q(*(esi + 0x10))
                var_1c =
                    (eax_33 + eax_35) u>> 1 | adc.d(edx_17, edx_18, eax_33 + eax_35 u< eax_33) << 0x1f
                int32_t eax_39
                int32_t edx_20
                edx_20:eax_39 = sx.q(var_20)
                int32_t eax_41
                int32_t edx_21
                edx_21:eax_41 = sx.q(*(esi + 0x14))
                var_20 =
                    (eax_37 + eax_39) u>> 1 | adc.d(edx_19, edx_20, eax_37 + eax_39 u< eax_37) << 0x1f
                int32_t eax_43
                int32_t edx_22
                edx_22:eax_43 = sx.q(var_24)
                edi = (eax_11 + eax_13) u>> 1 | adc.d(edx_7, edx_8, eax_11 + eax_13 u< eax_11) << 0x1f
                edx_6 =
                    (eax_41 + eax_43) u>> 1 | adc.d(edx_21, edx_22, eax_41 + eax_43 u< eax_41) << 0x1f
                var_8 -= eax - 0x200
                var_24 = edx_6
            
            eax_2 = var_30_1
        while (ecx_1 - 8 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_2
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
