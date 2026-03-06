// 函数名称: sub_5c7b60
// 虚拟地址: 0x5c7b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7b60(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 == 0)
    if (arg1 == 0 || *arg1 == 0)
        return 0xffffffff
    
    int32_t result = 0
    
    if (data_8b9630 != 0)
        void** eax_1 = &data_8b9630
        
        do
            void* var_10_1 = *eax_1
            char* var_14_1 = arg1
            
            if (sub_5cd5e0() == 0)
                return result
            
            result += 1
            eax_1 = &(&data_8b9630)[result]
        while ((&data_8b9630)[result] != 0)
    
    return 0xffffffff
}
