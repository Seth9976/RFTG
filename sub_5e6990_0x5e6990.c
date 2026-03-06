// 函数名称: sub_5e6990
// 虚拟地址: 0x5e6990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e6990(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t* esi_1 = *(arg1 + 0x10)
    void* eax_3 = eax_2 + esi_1
    int32_t* edi = esi_1
    int32_t eax_4 = *edi
    int32_t edx = 0
    int32_t ecx_4 =
        ((eax_4 & 0xff0000) | eax_4 u>> 0x10) u>> 8 | ((eax_4 & 0xff00) | eax_4 << 0x10) << 8
    int32_t var_18
    int32_t var_14
    void* result
    
    if (esi_1 u>= eax_3)
        result = arg1
    else
        int32_t ebx_6 = eax - 0x40
        
        do
            edx += eax_2
            edi = &edi[1]
            var_18 = edx
            
            if (edx * 2 s>= ebx_6)
                *esi_1 = ((ecx_4 & 0xff0000) | ecx_4 u>> 0x10) u>> 8
                    | ((ecx_4 & 0xff00) | ecx_4 << 0x10) << 8
                int32_t edx_6 = *edi
                int32_t eax_18
                int32_t edx_8
                edx_8:eax_18 = sx.q(((edx_6 & 0xff0000) | edx_6 u>> 0x10) u>> 8
                    | ((edx_6 & 0xff00) | edx_6 << 0x10) << 8)
                var_14 = edx_8
                int32_t eax_20
                int32_t edx_9
                edx_9:eax_20 = sx.q(ecx_4)
                esi_1 = &esi_1[1]
                ebx_6 = eax - 0x40
                ecx_4 =
                    (eax_18 + eax_20) u>> 1 | adc.d(var_14, edx_9, eax_18 + eax_20 u< eax_18) << 0x1f
                edx = var_18 - ebx_6
            
            result = arg1
        while (esi_1 u< eax_3)
    
    *(result + 0x50) += 1
    *(result + 0x18) = eax_2
    int32_t ecx_7 = *(result + 0x50)
    
    if (*(result + (ecx_7 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_7 << 2) + 0x28))(result, arg2, var_18, var_14, eax_2, eax_3, eax - 0x40)
}
