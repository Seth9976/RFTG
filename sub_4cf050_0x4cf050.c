// 函数名称: sub_4cf050
// 虚拟地址: 0x4cf050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4cf050(int32_t* arg1)
{
    // 第一条实际指令: int128_t var_b8
    int128_t var_b8
    int32_t eax_1 = __security_cookie ^ &var_b8
    int32_t* result = arg1
    int32_t** i = *result
    int32_t esi_2 = result[2] * 0xa8 + 0xc
    
    while (i != 0)
        int32_t* edx_1 = *i
        i = i[1]
        sub_4cecf0(result, edx_1, &var_b8, esi_2)
        int32_t* entry_ebx
        result = sub_5a9094(&var_b8, 0xa8, 1, entry_ebx)
        
        if (result != 1)
            result.b = 0
            sub_5a6aba(eax_1 ^ &var_b8)
            return result
        
        int32_t var_a8
        esi_2 += var_a8
    
    result.b = 1
    sub_5a6aba(eax_1 ^ &var_b8)
    return result
}
