// 函数名称: sub_5efd30
// 虚拟地址: 0x5efd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5efd30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int16_t* eax_3 = *(esi + 0x10)
    int32_t ebx = sx.d(*eax_3)
    int32_t var_8 = sx.d(eax_3[1])
    int32_t var_10 = sx.d(eax_3[2])
    int32_t var_18 = sx.d(eax_3[3])
    int32_t edi_1 = (eax_1 - edx) s>> 1
    int32_t var_20 = sx.d(eax_3[4])
    void* edx_1 = eax_3 + edi_1
    int32_t var_24 = sx.d(eax_3[5])
    
    if (eax_3 u< edx_1)
        void* esi_1 = &eax_3[2]
        void* ecx_5 = &eax_3[2]
        int32_t i_1 = (edx_1 - eax_3 - 1) u/ 0xc + 1
        int32_t i
        
        do
            int32_t edx_7 = sx.d(*ecx_5)
            int32_t eax_5 = sx.d(*(ecx_5 - 4))
            int32_t edi_2 = sx.d(*(ecx_5 - 2))
            int32_t edx_8 = sx.d(*(ecx_5 + 2))
            int32_t edx_9 = sx.d(*(ecx_5 + 4))
            int32_t edx_10 = sx.d(*(ecx_5 + 6))
            *(esi_1 - 4) = ((eax_5 + ebx) s>> 1).w
            *(esi_1 - 2) = ((var_8 + edi_2) s>> 1).w
            *esi_1 = ((edx_7 + var_10) s>> 1).w
            ecx_5 += 0x18
            *(esi_1 + 2) = ((edx_8 + var_18) s>> 1).w
            esi_1 += 0xc
            *(esi_1 - 8) = ((edx_9 + var_20) s>> 1).w
            i = i_1
            i_1 -= 1
            *(esi_1 - 6) = ((var_24 + edx_10) s>> 1).w
            ebx = eax_5
            var_10 = edx_7
            var_18 = edx_8
            var_8 = edi_2
            var_20 = edx_9
            var_24 = edx_10
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
