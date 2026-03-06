// 函数名称: sub_5049f0
// 虚拟地址: 0x5049f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5049f0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    char* eax_9
    int32_t edx_1
    
    do
        char* eax_2 = sub_4c4410(arg1)
        
        if (*(arg2 + 4) != 3)
        label_504a1a:
            
            if (*(arg2 + 4) == 4 && sub_5a9f0b(eax_2, *(arg2 + 0xc), *(arg2 + 0x10)) == 0
                    && sub_5551f0(arg2) != 0)
                return 1
        else if (sub_5551f0(arg2) != 0)
            goto label_504a1a
        
        eax_9, edx_1 = sub_504770(arg1, arg2)
    while (eax_9.b != 0)
    
    char* const ebx_1 = *arg1
    
    if (ebx_1 == 0)
        ebx_1 = &data_83f3d3
    
    char* const var_1c_3 = ebx_1
    sub_504710(eax_9, edx_1, arg2, "failed to read block '%s'")
    int32_t result
    result.b = 0
    return result
}
