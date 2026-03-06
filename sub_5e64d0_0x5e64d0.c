// 函数名称: sub_5e64d0
// 虚拟地址: 0x5e64d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e64d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* esi_1 = ecx + eax_1 - 0x20
    int32_t* ecx_1 = ecx + edi - 0x20
    int32_t edi_1 = ecx_1[7]
    int32_t var_8 = *(ecx + edi - 8)
    int32_t var_c = ecx_1[5]
    int32_t var_10 = ecx_1[4]
    int32_t var_14 = ecx_1[3]
    int32_t var_18 = ecx_1[2]
    int32_t var_1c = ecx_1[1]
    int32_t edx = 0
    int32_t var_34 = eax_1
    int32_t var_20 = *ecx_1
    int32_t var_30
    int32_t var_2c
    
    while (esi_1 u>= ecx)
        edx += edi - 0x200
        *(esi_1 + 0x18) = var_8
        *(esi_1 + 0x14) = var_c
        *(esi_1 + 0x10) = var_10
        *(esi_1 + 0xc) = var_14
        *(esi_1 + 8) = var_18
        *(esi_1 + 4) = var_1c
        *esi_1 = var_20
        *(esi_1 + 0x1c) = edi_1
        esi_1 -= 0x20
        var_30 = edx
        
        if (edx * 2 s>= eax_1)
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx_1[-1])
            ecx_1 -= 0x20
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(edi_1)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(ecx_1[6])
            var_2c = (eax_3 + eax_5) u>> 1 | adc.d(edx_1, edx_2, eax_3 + eax_5 u< eax_3) << 0x1f
            int32_t eax_11
            int32_t edx_4
            edx_4:eax_11 = sx.q(var_8)
            int32_t eax_13
            int32_t edx_5
            edx_5:eax_13 = sx.q(ecx_1[5])
            var_8 = (eax_9 + eax_11) u>> 1 | adc.d(edx_3, edx_4, eax_9 + eax_11 u< eax_9) << 0x1f
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = sx.q(var_c)
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(ecx_1[4])
            var_c = (eax_13 + eax_15) u>> 1 | adc.d(edx_5, edx_6, eax_13 + eax_15 u< eax_13) << 0x1f
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = sx.q(var_10)
            int32_t eax_21
            int32_t edx_9
            edx_9:eax_21 = sx.q(ecx_1[3])
            var_10 = (eax_17 + eax_19) u>> 1 | adc.d(edx_7, edx_8, eax_17 + eax_19 u< eax_17) << 0x1f
            int32_t eax_23
            int32_t edx_10
            edx_10:eax_23 = sx.q(var_14)
            int32_t eax_25
            int32_t edx_11
            edx_11:eax_25 = sx.q(ecx_1[2])
            var_14 = (eax_21 + eax_23) u>> 1 | adc.d(edx_9, edx_10, eax_21 + eax_23 u< eax_21) << 0x1f
            int32_t eax_27
            int32_t edx_12
            edx_12:eax_27 = sx.q(var_18)
            int32_t eax_29
            int32_t edx_13
            edx_13:eax_29 = sx.q(ecx_1[1])
            var_18 = (eax_25 + eax_27) u>> 1 | adc.d(edx_11, edx_12, eax_25 + eax_27 u< eax_25) << 0x1f
            int32_t eax_31
            int32_t edx_14
            edx_14:eax_31 = sx.q(var_1c)
            var_1c = (eax_29 + eax_31) u>> 1 | adc.d(edx_13, edx_14, eax_29 + eax_31 u< eax_29) << 0x1f
            int32_t eax_33
            int32_t edx_15
            edx_15:eax_33 = sx.q(*ecx_1)
            int32_t eax_35
            int32_t edx_16
            edx_16:eax_35 = sx.q(var_20)
            eax_1 = var_34
            var_20 = (eax_33 + eax_35) u>> 1 | adc.d(edx_15, edx_16, eax_33 + eax_35 u< eax_33) << 0x1f
            edi_1 = var_2c
            edx = var_30 - eax_1
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2, var_34, var_30, var_2c, edi - 0x200, ecx, 
        var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
