// 函数名称: sub_49df80
// 虚拟地址: 0x49df80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49df80(void* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (*(arg1 + 0x18) == 0)
        result = sub_49ca40(arg1)
    else
        result = sub_49cb90(arg1)
    
    int32_t result_1 = result
    
    if (result_1 != 0xffffffff)
        int32_t ecx_1 = sx.d(*(arg1 + arg2 * 0x14 + 0x464))
        int32_t var_14_1 = 4
        sub_49cc30(arg1, result_1, ecx_1, ecx_1)
        result = arg2
        *(arg1 + result_1 * 0x14 + 0x470) = result.w
        *(arg1 + arg2 * 0x14 + 0x472) += 1
        
        if (*(arg1 + 0x18) == 0)
            return sub_49bd10(sx.d(*(arg1 + arg2 * 0x14 + 0x464)))
    
    return result
}
