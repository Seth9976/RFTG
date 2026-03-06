// 函数名称: sub_5d2470
// 虚拟地址: 0x5d2470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d2470(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0xa0)
    void* result = *(arg1 + 0xa0)
    
    if (result != 0)
        int32_t var_c_1 = *(result + 4)
        sub_5d0af0()
        *(*(arg1 + 0xa0) + 4) = 0
        int32_t* eax_1 = *(arg1 + 0xa0)
        
        if (*eax_1 != 0)
            int32_t eax_2 = *eax_1
            (*(eax_2 + 0x10))(eax_2)
            **(arg1 + 0xa0) = 0
        
        int32_t var_c_3 = *(arg1 + 0xa0)
        result = sub_5d0af0()
        *(arg1 + 0xa0) = 0
    
    return result
}
