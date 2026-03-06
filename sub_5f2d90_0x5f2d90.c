// 函数名称: sub_5f2d90
// 虚拟地址: 0x5f2d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2d90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    int16_t* eax_3 = *(esi + 0x10)
    int32_t edi_1 = (eax_1 - edx) s>> 1
    int32_t ebx = sx.d(rol.w(*eax_3, 8))
    int32_t var_8 = sx.d(rol.w(eax_3[1], 8))
    int32_t var_10 = sx.d(rol.w(eax_3[2], 8))
    int32_t var_18 = sx.d(rol.w(eax_3[3], 8))
    int32_t var_20 = sx.d(rol.w(eax_3[4], 8))
    void* edx_1 = eax_3 + edi_1
    int32_t var_24 = sx.d(rol.w(eax_3[5], 8))
    
    if (eax_3 u< edx_1)
        void* esi_1 = &eax_3[2]
        void* ecx_11 = &eax_3[2]
        int32_t i_1 = (edx_1 - eax_3 - 1) u/ 0xc + 1
        int32_t i
        
        do
            int32_t eax_5 = sx.d(rol.w(*(ecx_11 - 4), 8))
            int32_t edi_3 = sx.d(rol.w(*(ecx_11 - 2), 8))
            int32_t edx_10 = sx.d(rol.w(*ecx_11, 8))
            int32_t edx_12 = sx.d(rol.w(*(ecx_11 + 2), 8))
            int32_t edx_14 = sx.d(rol.w(*(ecx_11 + 4), 8))
            int32_t edx_16 = sx.d(rol.w(*(ecx_11 + 6), 8))
            *(esi_1 - 4) = ((eax_5 + ebx) s>> 1).w
            *(esi_1 - 2) = ((var_8 + edi_3) s>> 1).w
            *esi_1 = ((edx_10 + var_10) s>> 1).w
            ecx_11 += 0x18
            *(esi_1 + 2) = ((edx_12 + var_18) s>> 1).w
            esi_1 += 0xc
            *(esi_1 - 8) = ((edx_14 + var_20) s>> 1).w
            i = i_1
            i_1 -= 1
            *(esi_1 - 6) = ((var_24 + edx_16) s>> 1).w
            ebx = eax_5
            var_10 = edx_10
            var_18 = edx_12
            var_8 = edi_3
            var_20 = edx_14
            var_24 = edx_16
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
