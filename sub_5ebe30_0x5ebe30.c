// 函数名称: sub_5ebe30
// 虚拟地址: 0x5ebe30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ebe30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    char* eax_2 = *(esi + 0x10)
    uint32_t ebx = zx.d(*eax_2)
    uint32_t var_8 = zx.d(eax_2[1])
    uint32_t var_10 = zx.d(eax_2[2])
    uint32_t var_18 = zx.d(eax_2[3])
    int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
    uint32_t var_20 = zx.d(eax_2[4])
    void* edx_2 = &eax_2[edi_1]
    uint32_t var_24 = zx.d(eax_2[5])
    
    if (eax_2 u< edx_2)
        void* esi_1 = &eax_2[2]
        void* ecx_5 = &eax_2[2]
        int32_t i_1 = (edx_2 - eax_2 - 1) u/ 6 + 1
        int32_t i
        
        do
            uint32_t edx_8 = zx.d(*ecx_5)
            uint32_t eax_4 = zx.d(*(ecx_5 - 2))
            uint32_t edi_2 = zx.d(*(ecx_5 - 1))
            uint32_t edx_9 = zx.d(*(ecx_5 + 1))
            uint32_t edx_10 = zx.d(*(ecx_5 + 2))
            uint32_t edx_11 = zx.d(*(ecx_5 + 3))
            *(esi_1 - 2) = ((eax_4 + ebx) s>> 1).b
            *(esi_1 - 1) = ((var_8 + edi_2) s>> 1).b
            *esi_1 = ((edx_8 + var_10) s>> 1).b
            ecx_5 += 0x18
            *(esi_1 + 1) = ((edx_9 + var_18) s>> 1).b
            esi_1 += 6
            *(esi_1 - 4) = ((edx_10 + var_20) s>> 1).b
            i = i_1
            i_1 -= 1
            *(esi_1 - 3) = ((var_24 + edx_11) s>> 1).b
            ebx = eax_4
            var_8 = edi_2
            var_10 = zx.d(edx_8.w)
            var_18 = zx.d(edx_9.w)
            var_20 = zx.d(edx_10.w)
            var_24 = zx.d(edx_11.w)
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
