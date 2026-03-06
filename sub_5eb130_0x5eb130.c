// 函数名称: sub_5eb130
// 虚拟地址: 0x5eb130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb130(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    char* i_1 = i
    uint32_t edi = zx.d(*i_1)
    
    while (i u< &i[eax_3])
        uint32_t edx_2 = zx.d(*i_1)
        *i = ((edx_2 + edi) s>> 1).b
        i = &i[1]
        i_1 = &i_1[2]
        edi = edx_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
