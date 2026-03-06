// 函数名称: sub_5e48f0
// 虚拟地址: 0x5e48f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e48f0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t ebx = arg1
    uint32_t ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* i = eax_2 + ecx
    int16_t edi = rol.w(ecx[1], 8)
    int16_t esi = rol.w(*ecx, 8)
    void* edx_1 = &ecx[2]
    int16_t var_18 = rol.w(ecx[2], 8)
    int16_t var_c = rol.w(ecx[3], 8)
    int16_t var_10 = rol.w(ecx[4], 8)
    int32_t var_8 = 0
    int16_t var_14 = rol.w(ecx[5], 8)
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t eax_13 = var_8 + eax_2
            edx_1 += 0xc
            var_8 = eax_13
            
            if (eax_13 * 2 s>= eax - 0xc0)
                int32_t eax_14
                eax_14.w = esi
                eax_14.w = rol.w(eax_14.w, 8)
                *(ecx_1 - 4) = eax_14.w
                eax_14.w = edi
                eax_14.w = rol.w(eax_14.w, 8)
                *(ecx_1 - 2) = eax_14.w
                ebx.w = var_18
                ebx.w = rol.w(ebx.w, 8)
                *ecx_1 = ebx.w
                *(ecx_1 + 2) = rol.w(var_c, 8)
                *(ecx_1 + 4) = rol.w(var_10, 8)
                *(ecx_1 + 6) = rol.w(var_14, 8)
                ecx_1 += 0xc
                esi = ((zx.d(rol.w(*(edx_1 - 4), 8)) + zx.d(esi)) s>> 1).w
                edi = ((zx.d(rol.w(*(edx_1 - 2), 8)) + zx.d(edi)) s>> 1).w
                var_18 = ((zx.d(rol.w(*edx_1, 8)) + zx.d(var_18)) s>> 1).w
                var_c = ((zx.d(rol.w(*(edx_1 + 2), 8)) + zx.d(var_c)) s>> 1).w
                var_10 = ((zx.d(rol.w(*(edx_1 + 4), 8)) + zx.d(var_10)) s>> 1).w
                var_14 = ((zx.d(rol.w(*(edx_1 + 6), 8)) + zx.d(var_14)) s>> 1).w
                var_8 -= eax - 0xc0
        while (ecx_1 - 4 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
