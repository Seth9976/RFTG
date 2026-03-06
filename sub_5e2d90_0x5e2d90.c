// 函数名称: sub_5e2d90
// 虚拟地址: 0x5e2d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2d90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t ebx = *(edi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(edi + 8)))
    int32_t edx = *(edi + 0x10)
    int16_t* ecx = edx + eax_1 - 4
    int16_t* edx_1 = edx + ebx - 4
    int16_t var_8 = edx_1[1]
    int32_t esi = 0
    int16_t var_c = *edx_1
    
    while (ecx u>= edx)
        esi += ebx - 0x40
        ecx[1] = var_8
        *ecx = var_c
        ecx -= 4
        
        if (esi * 2 s>= eax_1)
            uint32_t edi_1 = zx.d(edx_1[-1])
            edx_1 -= 4
            var_8 = ((edi_1 + zx.d(var_8)) s>> 1).w
            var_c = ((zx.d(*edx_1) + zx.d(var_c)) s>> 1).w
            edi = arg1
            esi -= eax_1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_1
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
