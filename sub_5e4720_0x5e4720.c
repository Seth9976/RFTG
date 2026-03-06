// 函数名称: sub_5e4720
// 虚拟地址: 0x5e4720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e4720(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t ebx = arg1
    uint32_t ebx = arg1
    int32_t edi = *(ebx + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(ebx + 8)))
    int32_t ecx = *(ebx + 0x10)
    void* edx = ecx + eax_1 - 0xc
    int16_t* ecx_1 = ecx + edi - 0xc
    int32_t esi = 0
    int16_t edi_1 = rol.w(*(ecx + edi - 2), 8)
    int16_t var_8 = rol.w(ecx_1[4], 8)
    int16_t var_c = rol.w(ecx_1[3], 8)
    int16_t var_10 = rol.w(ecx_1[2], 8)
    int16_t var_14 = rol.w(ecx_1[1], 8)
    int16_t var_18 = rol.w(*ecx_1, 8)
    int32_t eax_13 = eax_1
    
    if (edx u>= ecx)
        do
            ebx.w = edi_1
            ebx.w = rol.w(ebx.w, 8)
            *(edx + 0xa) = ebx.w
            *(edx + 8) = rol.w(var_8, 8)
            esi += edi - 0xc0
            *(edx + 6) = rol.w(var_c, 8)
            *(edx + 4) = rol.w(var_10, 8)
            *(edx + 2) = rol.w(var_14, 8)
            *edx = rol.w(var_18, 8)
            edx -= 0xc
            
            if (esi * 2 s>= eax_13)
                int16_t eax_14 = ecx_1[-1]
                ecx_1 -= 0xc
                edi_1 = ((zx.d(rol.w(eax_14, 8)) + zx.d(edi_1)) s>> 1).w
                var_8 = ((zx.d(rol.w(ecx_1[4], 8)) + zx.d(var_8)) s>> 1).w
                var_c = ((zx.d(rol.w(ecx_1[3], 8)) + zx.d(var_c)) s>> 1).w
                var_10 = ((zx.d(rol.w(ecx_1[2], 8)) + zx.d(var_10)) s>> 1).w
                var_14 = ((zx.d(rol.w(ecx_1[1], 8)) + zx.d(var_14)) s>> 1).w
                var_18 = ((zx.d(rol.w(*ecx_1, 8)) + zx.d(var_18)) s>> 1).w
                eax_13 = eax_1
                esi -= eax_13
        while (edx u>= ecx)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_13
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
