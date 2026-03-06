// 函数名称: __strrev
// 虚拟地址: 0x6860a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*__strrev(char* arg1)
{
    // 第一条实际指令: char* result_1 = arg1
    char* result_1 = arg1
    char* result = result_1
    char* result_2 = result_1
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *result_1
        result_1 = &result_1[1]
        i -= 1
        
        if (not(cond:0_1))
            break
    
    if (i != 0xfffffffe)
        for (char* i_1 = result_1 - 2; result_2 u< i_1; i_1 -= 1)
            int16_t eax
            eax:1.b = *result_2
            eax.b = *i_1
            *result_2 = eax.b
            *i_1 = eax:1.b
            result_2 = &result_2[1]
    
    return result
}
