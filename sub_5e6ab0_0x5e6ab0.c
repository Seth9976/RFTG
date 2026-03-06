// 函数名称: sub_5e6ab0
// 虚拟地址: 0x5e6ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e6ab0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t esi = *(ebx + 0x18)
    int32_t eax_1 = sub_685f40(float.t(esi) * fconvert.t(*(ebx + 8)))
    int32_t edi = *(ebx + 0x10)
    int32_t eax_2 = *(edi + esi - 4)
    int32_t* edi_1 = edi + esi - 8
    int32_t* var_8 = edi + eax_1 - 8
    int32_t eax_4 = *edi_1
    int32_t ecx_5 =
        ((eax_2 & 0xff0000) | eax_2 u>> 0x10) u>> 8 | ((eax_2 & 0xff00) | eax_2 << 0x10) << 8
    int32_t esi_5 =
        ((eax_4 & 0xff0000) | eax_4 u>> 0x10) u>> 8 | ((eax_4 & 0xff00) | eax_4 << 0x10) << 8
    int32_t var_c = 0
    
    if (var_8 u>= edi)
        do
            var_8[1] =
                ((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8
            *var_8 =
                ((esi_5 & 0xff0000) | esi_5 u>> 0x10) u>> 8 | ((esi_5 & 0xff00) | esi_5 << 0x10) << 8
            var_8 -= 8
            int32_t eax_23 = var_c + esi - 0x80
            var_c = eax_23
            
            if (eax_23 * 2 s>= eax_1)
                int32_t edx_23 = edi_1[-1]
                edi_1 -= 8
                int32_t eax_29
                int32_t edx_25
                edx_25:eax_29 = sx.q(((edx_23 & 0xff0000) | edx_23 u>> 0x10) u>> 8
                    | (edx_23 << 0x10 | (edx_23 & 0xff00)) << 8)
                int32_t eax_31
                int32_t edx_26
                edx_26:eax_31 = sx.q(ecx_5)
                int32_t edx_27 = *edi_1
                ecx_5 =
                    (eax_29 + eax_31) u>> 1 | adc.d(edx_25, edx_26, eax_29 + eax_31 u< eax_29) << 0x1f
                int32_t eax_39
                int32_t edx_29
                edx_29:eax_39 = sx.q(((edx_27 & 0xff0000) | edx_27 u>> 0x10) u>> 8
                    | (edx_27 << 0x10 | (edx_27 & 0xff00)) << 8)
                int32_t eax_41
                int32_t edx_30
                edx_30:eax_41 = sx.q(esi_5)
                esi_5 =
                    (eax_39 + eax_41) u>> 1 | adc.d(edx_29, edx_30, eax_39 + eax_41 u< eax_39) << 0x1f
                var_c -= eax_1
        while (var_8 u>= edi)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_1
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
