// 函数名称: sub_5e6860
// 虚拟地址: 0x5e6860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e6860(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int32_t eax_3 = *(ebx + 0x10)
    int32_t* var_8 = eax_3 + eax_2 - 4
    int32_t* var_c_1 = eax_3 + eax - 4
    int32_t eax_5 = *(eax_3 + eax - 4)
    int32_t edi = 0
    int32_t ecx_5 =
        ((eax_5 & 0xff0000) | eax_5 u>> 0x10) u>> 8 | ((eax_5 & 0xff00) | eax_5 << 0x10) << 8
    
    if (var_8 u>= eax_3)
        do
            edi += eax - 0x40
            *var_8 =
                ((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8
            var_8 -= 4
            
            if (edi * 2 s>= eax_2)
                int32_t edx_13 = var_c_1[-1]
                var_c_1 -= 4
                int32_t eax_23
                int32_t edx_15
                edx_15:eax_23 = sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8
                    | ((edx_13 & 0xff00) | edx_13 << 0x10) << 8)
                int32_t eax_25
                int32_t edx_16
                edx_16:eax_25 = sx.q(ecx_5)
                ecx_5 =
                    (eax_23 + eax_25) u>> 1 | adc.d(edx_15, edx_16, eax_23 + eax_25 u< eax_23) << 0x1f
                edi -= eax_2
        while (var_8 u>= eax_3)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
