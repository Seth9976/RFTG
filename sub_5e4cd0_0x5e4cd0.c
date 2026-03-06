// 函数名称: sub_5e4cd0
// 虚拟地址: 0x5e4cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e4cd0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t ebx = arg1
    uint32_t ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* i = eax_2 + ecx
    int16_t edi = rol.w(ecx[1], 8)
    int16_t var_20 = rol.w(ecx[2], 8)
    int16_t esi = rol.w(*ecx, 8)
    void* edx_1 = &ecx[2]
    int16_t var_c = rol.w(ecx[3], 8)
    int16_t var_10 = rol.w(ecx[4], 8)
    int16_t var_14 = rol.w(ecx[5], 8)
    int16_t var_18 = rol.w(ecx[6], 8)
    int32_t var_8 = 0
    int16_t var_1c = rol.w(ecx[7], 8)
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t eax_17 = var_8 + eax_2
            edx_1 += 0x10
            var_8 = eax_17
            
            if (eax_17 * 2 s>= eax - 0x100)
                int32_t eax_18
                eax_18.w = esi
                eax_18.w = rol.w(eax_18.w, 8)
                *(ecx_1 - 4) = eax_18.w
                eax_18.w = edi
                eax_18.w = rol.w(eax_18.w, 8)
                *(ecx_1 - 2) = eax_18.w
                ebx.w = var_20
                ebx.w = rol.w(ebx.w, 8)
                *ecx_1 = ebx.w
                *(ecx_1 + 2) = rol.w(var_c, 8)
                *(ecx_1 + 4) = rol.w(var_10, 8)
                *(ecx_1 + 6) = rol.w(var_14, 8)
                *(ecx_1 + 8) = rol.w(var_18, 8)
                *(ecx_1 + 0xa) = rol.w(var_1c, 8)
                ecx_1 += 0x10
                esi = ((zx.d(rol.w(*(edx_1 - 4), 8)) + zx.d(esi)) s>> 1).w
                edi = ((zx.d(rol.w(*(edx_1 - 2), 8)) + zx.d(edi)) s>> 1).w
                var_20 = ((zx.d(rol.w(*edx_1, 8)) + zx.d(var_20)) s>> 1).w
                var_c = ((zx.d(rol.w(*(edx_1 + 2), 8)) + zx.d(var_c)) s>> 1).w
                var_10 = ((zx.d(rol.w(*(edx_1 + 4), 8)) + zx.d(var_10)) s>> 1).w
                var_14 = ((zx.d(rol.w(*(edx_1 + 6), 8)) + zx.d(var_14)) s>> 1).w
                var_18 = ((zx.d(rol.w(*(edx_1 + 8), 8)) + zx.d(var_18)) s>> 1).w
                var_1c = ((zx.d(rol.w(*(edx_1 + 0xa), 8)) + zx.d(var_1c)) s>> 1).w
                var_8 -= eax - 0x100
        while (ecx_1 - 4 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
