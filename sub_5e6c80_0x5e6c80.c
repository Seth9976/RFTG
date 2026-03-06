// 函数名称: sub_5e6c80
// 虚拟地址: 0x5e6c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e6c80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t* edi = *(arg1 + 0x10)
    void* ecx_1 = eax_2 + edi
    int32_t* esi_1 = edi
    int32_t edx = *esi_1
    int32_t edx_2 = esi_1[1]
    int32_t* var_8 = esi_1
    int32_t ecx_6 = ((edx & 0xff0000) | edx u>> 0x10) u>> 8 | ((edx & 0xff00) | edx << 0x10) << 8
    int32_t eax_3 = 0
    int32_t esi_6 =
        ((edx_2 & 0xff0000) | edx_2 u>> 0x10) u>> 8 | ((edx_2 & 0xff00) | edx_2 << 0x10) << 8
    void* ebx_33
    
    if (edi u>= ecx_1)
        ebx_33 = arg1
    else
        int32_t edx_4 = eax - 0x80
        
        do
            eax_3 += eax_2
            var_8 = &var_8[2]
            
            if (eax_3 * 2 s>= edx_4)
                *edi = ((ecx_6 & 0xff0000) | ecx_6 u>> 0x10) u>> 8
                    | ((ecx_6 & 0xff00) | ecx_6 << 0x10) << 8
                edi[1] = ((esi_6 & 0xff0000) | esi_6 u>> 0x10) u>> 8
                    | ((esi_6 & 0xff00) | esi_6 << 0x10) << 8
                int32_t edx_16 = *var_8
                int32_t eax_21
                int32_t edx_18
                edx_18:eax_21 = sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8
                    | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
                int32_t eax_23
                int32_t edx_19
                edx_19:eax_23 = sx.q(ecx_6)
                edi = &edi[2]
                ecx_6 =
                    (eax_21 + eax_23) u>> 1 | adc.d(edx_18, edx_19, eax_21 + eax_23 u< eax_21) << 0x1f
                int32_t edx_20 = var_8[1]
                int32_t eax_32
                int32_t edx_22
                edx_22:eax_32 = sx.q(((edx_20 & 0xff0000) | edx_20 u>> 0x10) u>> 8
                    | (edx_20 << 0x10 | (edx_20 & 0xff00)) << 8)
                int32_t eax_34
                int32_t edx_23
                edx_23:eax_34 = sx.q(esi_6)
                edx_4 = eax - 0x80
                esi_6 =
                    (eax_32 + eax_34) u>> 1 | adc.d(edx_22, edx_23, eax_32 + eax_34 u< eax_32) << 0x1f
                eax_3 -= edx_4
            
            ebx_33 = arg1
        while (edi u< ecx_1)
    
    *(ebx_33 + 0x50) += 1
    int32_t result = *(ebx_33 + 0x50)
    *(ebx_33 + 0x18) = eax_2
    
    if (*(ebx_33 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx_33 + (result << 2) + 0x28))(ebx_33, arg2)
}
