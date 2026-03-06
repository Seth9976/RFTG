// 函数名称: sub_5d7b90
// 虚拟地址: 0x5d7b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d7b90(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s< 1)
    if (arg1 s< 1)
        char const* const __saved_esi = "ncolors"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    int32_t __saved_edi = 0x10
    int32_t* result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t edi = arg1 << 2
    int32_t var_14 = edi
    int32_t eax_2 = sub_5d0ac0()
    result[1] = eax_2
    
    if (eax_2 == 0)
        int32_t* result_1 = result
        sub_5d0af0()
        return 0
    
    int32_t var_14_1 = edi
    int32_t var_18 = 0xff
    int32_t var_1c = eax_2
    *result = arg1
    result[2] = 1
    result[3] = 1
    sub_5cd100()
    return result
}
