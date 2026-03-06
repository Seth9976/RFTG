// 函数名称: sub_5e1b80
// 虚拟地址: 0x5e1b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e1b80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    char edx = *(ecx + ebx - 1)
    void* esi_1 = ecx + eax_1 - 4
    char* ecx_1 = ecx + ebx - 4
    char var_5 = ecx_1[2]
    char var_6 = ecx_1[1]
    int32_t edi = 0
    char var_7 = *ecx_1
    char var_8
    
    while (esi_1 u>= ecx)
        edi += ebx - 0x40
        *(esi_1 + 2) = var_5
        *(esi_1 + 1) = var_6
        *esi_1 = var_7
        *(esi_1 + 3) = edx
        esi_1 -= 4
        
        if (edi * 2 s>= eax_1)
            uint32_t ebx_9 = zx.d(ecx_1[0xffffffff]) + zx.d(edx)
            uint32_t edx_2 = zx.d(ecx_1[0xfffffffe])
            ecx_1 -= 4
            var_8 = (ebx_9 s>> 1).b
            var_5 = ((edx_2 + zx.d(var_5)) s>> 1).b
            var_6 = ((zx.d(ecx_1[1]) + zx.d(var_6)) s>> 1).b
            var_7 = ((zx.d(*ecx_1) + zx.d(var_7)) s>> 1).b
            edx = var_8
            edi -= eax_1
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2, ebx - 0x40, ecx, var_8)
}
