// 函数名称: sub_5e18f0
// 虚拟地址: 0x5e18f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e18f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t ebx = *(esi + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(esi + 8)))
    int32_t edx = *(esi + 0x10)
    int32_t var_8 = edx
    char* edi = edx + eax_1 - 1
    char* ebx_1 = edx + ebx - 1
    edx.b = *ebx_1
    arg1 = ebx_1
    
    if (edi u>= var_8)
        int32_t ecx_1 = 0
        
        do
            ecx_1 += ebx - 0x10
            *edi = edx.b
            edi -= 1
            
            if (ecx_1 * 2 s>= eax_1)
                int32_t ebx_4 = arg1 - 1
                arg1 = ebx_4
                edx = (zx.d(edx.b) + zx.d(*ebx_4)) s>> 1
                ecx_1 -= eax_1
        while (edi u>= var_8)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_1
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
