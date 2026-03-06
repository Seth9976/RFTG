// 函数名称: sub_5ef7f0
// 虚拟地址: 0x5ef7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef7f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    int16_t* ecx_1 = esi + ecx - 8
    int32_t var_c = sx.d(*(esi + ecx - 4))
    int32_t var_10 = sx.d(ecx_1[1])
    void* eax_1 = esi + eax - 0x10
    int32_t edi = sx.d(ecx_1[3])
    int32_t var_14 = sx.d(*ecx_1)
    int32_t var_18
    int32_t var_8
    
    if (eax_1 u>= esi)
        do
            int32_t edx_1 = sx.d(ecx_1[3])
            int32_t esi_1 = sx.d(ecx_1[2])
            var_8 = sx.d(ecx_1[1])
            int32_t ebx_4 = sx.d(*ecx_1)
            *(eax_1 + 0xe) = ((edi + edx_1) s>> 1).w
            *(eax_1 + 0xc) = ((var_c + esi_1) s>> 1).w
            *(eax_1 + 6) = edx_1.w
            *(eax_1 + 0xa) = ((var_8 + var_10) s>> 1).w
            *(eax_1 + 8) = ((var_14 + ebx_4) s>> 1).w
            *(eax_1 + 2) = var_8.w
            *(eax_1 + 4) = esi_1.w
            *eax_1 = ebx_4.w
            edi = edx_1
            eax_1 -= 0x10
            ecx_1 -= 8
            var_18 = ebx_4
            var_c = esi_1
            var_10 = var_8
            var_14 = ebx_4
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, esi, var_18, var_14, var_10, var_c, var_8)
}
