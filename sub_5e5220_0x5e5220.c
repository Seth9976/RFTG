// 函数名称: sub_5e5220
// 虚拟地址: 0x5e5220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5220(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* edi
    edi.w = *(ecx + ebx - 2)
    int16_t* edx = ecx + eax_1 - 8
    int16_t* ecx_1 = ecx + ebx - 8
    int32_t esi = 0
    edi.w = rol.w(edi.w, 8)
    uint32_t var_8 = zx.d(rol.w(ecx_1[2], 8))
    uint32_t var_c = zx.d(rol.w(ecx_1[1], 8))
    int16_t edi_1 = edi.w
    uint32_t var_10 = zx.d(rol.w(*ecx_1, 8))
    uint32_t var_1c
    
    while (edx u>= ecx)
        esi += ebx - 0x80
        uint32_t ebx_6
        ebx_6.w = edi_1
        ebx_6.w = rol.w(ebx_6.w, 8)
        edx[3] = ebx_6.w
        edx[2] = rol.w(var_8.w, 8)
        edx[1] = rol.w(var_c.w, 8)
        *edx = rol.w(var_10.w, 8)
        edx -= 8
        
        if (esi * 2 s>= eax_1)
            ebx_6.w = ecx_1[-1]
            ecx_1 -= 8
            ebx_6.w = rol.w(ebx_6.w, 8)
            var_1c = zx.d(((sx.d(ebx_6.w) + sx.d(edi_1)) s>> 1).w)
            var_8 = zx.d(((sx.d(rol.w(ecx_1[2], 8)) + sx.d(var_8.w)) s>> 1).w)
            var_c = zx.d(((sx.d(rol.w(ecx_1[1], 8)) + sx.d(var_c.w)) s>> 1).w)
            var_10 = zx.d(((sx.d(rol.w(*ecx_1, 8)) + sx.d(var_10.w)) s>> 1).w)
            edi_1 = var_1c.w
            esi -= eax_1
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2, var_1c, ebx - 0x80, ecx, var_10, var_c, var_8)
}
