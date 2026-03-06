// 函数名称: sub_5f3ed0
// 虚拟地址: 0x5f3ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f3ed0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t* ecx = *(edi + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(edi + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    void* eax_4 = eax_3 + ecx
    int32_t* esi = ecx
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(*esi)
    int32_t ebx = eax_6
    int32_t var_28 = edx_1
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(esi[1])
    int32_t var_1c = eax_8
    int32_t var_18 = edx_2
    
    if (ecx u< eax_4)
        do
            int32_t eax_10
            int32_t edx_3
            edx_3:eax_10 = sx.q(*esi)
            int32_t eax_12
            int32_t edx_4
            edx_4:eax_12 = sx.q(esi[1])
            esi = &esi[4]
            int32_t edx_6 = eax_10 + ebx
            int32_t eax_14 = adc.d(edx_3, var_28, eax_10 + ebx u< eax_10)
            ebx = eax_10
            *ecx = edx_6 u>> 1 | eax_14 << 0x1f
            ecx = &ecx[2]
            ecx[-1] = (eax_12 + var_1c) u>> 1 | adc.d(edx_4, var_18, eax_12 + var_1c u< eax_12) << 0x1f
            var_28 = edx_3
            var_1c = eax_12
            var_18 = edx_4
        while (ecx u< eax_4)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_3
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
