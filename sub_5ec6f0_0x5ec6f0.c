// 函数名称: sub_5ec6f0
// 虚拟地址: 0x5ec6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec6f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* ecx_1 = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    char* esi = ecx_1
    int32_t edi
    edi.w = sx.w(*esi)
    void* edx_1 = &ecx_1[eax_3]
    int32_t var_8_1 = eax_3
    uint32_t edi_1 = zx.d(edi.w)
    
    if (ecx_1 u< edx_1)
        do
            eax_3.w = sx.w(*esi)
            uint32_t edx_2 = zx.d(eax_3.w)
            *ecx_1 = ((edx_2 + edi_1) s>> 1).b
            ecx_1 = &ecx_1[1]
            esi = &esi[2]
            edi_1 = edx_2
        while (ecx_1 u< edx_1)
        
        eax_3 = var_8_1
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
