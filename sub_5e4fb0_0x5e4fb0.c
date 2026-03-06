// 函数名称: sub_5e4fb0
// 虚拟地址: 0x5e4fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e4fb0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    int16_t* ecx = *(esi + 0x10)
    void* var_c = ecx + eax_2
    int16_t* edi = ecx
    void* ebx
    ebx.w = *edi
    int32_t edx = 0
    ebx.w = rol.w(ebx.w, 8)
    int32_t var_10 = eax_2
    arg1 = zx.d(ebx.w)
    
    if (ecx u< var_c)
        int32_t ebx_2 = eax - 0x20
        
        do
            edx += eax_2
            edi = &edi[1]
            
            if (edx * 2 s>= ebx_2)
                int16_t eax_4 = arg1.w
                ebx_2.w = eax_4
                ebx_2.w = rol.w(ebx_2.w, 8)
                *ecx = ebx_2.w
                ebx_2.w = *edi
                ecx = &ecx[1]
                ebx_2.w = rol.w(ebx_2.w, 8)
                uint32_t eax_6 = zx.d(((sx.d(ebx_2.w) + sx.d(eax_4)) s>> 1).w)
                ebx_2 = eax - 0x20
                arg1 = eax_6
                edx -= ebx_2
            
            eax_2 = var_10
        while (ecx u< var_c)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_2
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
