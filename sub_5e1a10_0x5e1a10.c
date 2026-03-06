// 函数名称: sub_5e1a10
// 虚拟地址: 0x5e1a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e1a10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t esi = *(ebx + 0x18)
    int32_t eax_1 = sub_685f40(float.t(esi) * fconvert.t(*(ebx + 8)))
    int32_t edx = *(ebx + 0x10)
    void* ecx = edx + eax_1 - 2
    char* esi_1 = edx + esi - 2
    char var_5 = esi_1[1]
    int32_t eax_2 = 0
    char var_6 = *esi_1
    
    while (ecx u>= edx)
        eax_2 += esi - 0x20
        *(ecx + 1) = var_5
        *ecx = var_6
        ecx -= 2
        
        if (eax_2 * 2 s>= eax_1)
            uint32_t edx_6 = zx.d(esi_1[0xffffffff])
            esi_1 -= 2
            var_5 = ((edx_6 + zx.d(var_5)) s>> 1).b
            ebx = arg1
            var_6 = ((zx.d(*esi_1) + zx.d(var_6)) s>> 1).b
            eax_2 -= eax_1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_1
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
