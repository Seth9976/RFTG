// 函数名称: sub_5e1980
// 虚拟地址: 0x5e1980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e1980(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    char* ecx = *(esi + 0x10)
    char* edi = ecx
    void* var_c = &ecx[eax_2]
    void* ebx
    ebx.b = *edi
    int32_t edx = 0
    int32_t var_10 = eax_2
    arg1:3.b = ebx.b
    
    if (ecx u< var_c)
        int32_t ebx_1 = eax - 0x10
        
        do
            edx += eax_2
            edi = &edi[1]
            
            if (edx * 2 s>= ebx_1)
                int32_t eax_3
                eax_3.b = arg1:3.b
                *ecx = eax_3.b
                arg1:3.b = ((zx.d(*edi) + zx.d(eax_3.b)) s>> 1).b
                ebx_1 = eax - 0x10
                ecx = &ecx[1]
                edx -= ebx_1
            
            eax_2 = var_10
        while (ecx u< var_c)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_2
    int32_t result = *(esi + 0x50)
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
