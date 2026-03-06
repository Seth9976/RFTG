// 函数名称: sub_49c9c0
// 虚拟地址: 0x49c9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_49c9c0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    
    if (*(arg1 + 0x18) == 0)
        void* const __saved_ebx_1 = &data_8752c0
        char const* const var_c_1 = "Refreshing draw deck.\n"
        sub_4c5680("%s (%s)")
    
    void* result = nullptr
    int32_t i = 0
    
    if (0 s< *(arg1 + 0x460))
        result = arg1 + 0x468
        
        do
            if (*(result - 3) == 1)
                edi += 1
                *result &= 0xffc0
                *(result - 3) = 0
            
            i += 1
            result += 0x14
        while (i s< sx.d(*(arg1 + 0x460)))
    
    if (*(arg1 + 0x18) == 0)
        data_c020d0 += edi
        data_c020d4 -= edi
    
    return result
}
