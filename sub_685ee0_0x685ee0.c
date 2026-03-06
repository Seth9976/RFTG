// 函数名称: sub_685ee0
// 虚拟地址: 0x685ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_685ee0(int16_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return nullptr
    
    int32_t edi
    int32_t var_10_1 = edi
    int32_t eax
    int32_t ecx_1
    eax, ecx_1 = _wcslen(arg1)
    int32_t edx
    int16_t* result_1 = _calloc(eax, edx, ecx_1, eax + 1, 2)
    int16_t* result
    
    if (result_1 == 0)
        result = nullptr
    else
        if (sub_5b9170(result_1, eax + 1, arg1) != 0)
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            sub_5ad34e()
            noreturn
        
        result = result_1
    
    return result
}
