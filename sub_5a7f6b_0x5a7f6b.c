// 函数名称: sub_5a7f6b
// 虚拟地址: 0x5a7f6b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5a7f6b(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return nullptr
    
    int32_t edi
    int32_t var_10_1 = edi
    void* esi_1 = _strlen(arg1) + 1
    char* result_1 = sub_5a881a(esi_1)
    char* result
    
    if (result_1 == 0)
        result = nullptr
    else
        if (sub_5b04a4(result_1, esi_1, arg1) != 0)
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            sub_5ad34e()
            noreturn
        
        result = result_1
    
    return result
}
