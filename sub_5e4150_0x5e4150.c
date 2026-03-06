// 函数名称: sub_5e4150
// 虚拟地址: 0x5e4150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e4150(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t edi = *(esi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(esi + 8)))
    int32_t ebx = *(esi + 0x10)
    arg1 = ebx + edi - 2
    int32_t edi_1
    edi_1.w = *(ebx + edi - 2)
    int32_t edx = 0
    int16_t* ecx = ebx + eax_1 - 2
    edi_1.w = rol.w(edi_1.w, 8)
    int32_t var_c = ebx
    int16_t edi_2 = edi_1.w
    
    if (ecx u>= ebx)
        do
            edx += edi - 0x20
            ebx.w = edi_2
            ebx.w = rol.w(ebx.w, 8)
            *ecx = ebx.w
            ecx -= 2
            
            if (edx * 2 s>= eax_1)
                int32_t ebx_2 = arg1 - 2
                arg1 = ebx_2
                ebx_2.w = *ebx_2
                ebx_2.w = rol.w(ebx_2.w, 8)
                edi_2 = ((zx.d(ebx_2.w) + zx.d(edi_2)) s>> 1).w
                edx -= eax_1
        while (ecx u>= var_c)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_1
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
