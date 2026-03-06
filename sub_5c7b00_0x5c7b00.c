// 函数名称: sub_5c7b00
// 虚拟地址: 0x5c7b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7b00(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 == 0)
    if (arg1 == 0 || *arg1 == 0)
        return 0xffffffff
    
    int32_t result = 0
    
    if (data_8b9614 != 0)
        char const (** eax_1)[0x6] = &data_8b9614
        
        do
            char const (* var_10_1)[0x6] = *eax_1
            char* var_14_1 = arg1
            
            if (sub_5cd5e0() == 0)
                return result
            
            result += 1
            eax_1 = &(&data_8b9614)[result]
        while ((&data_8b9614)[result] != 0)
    
    return 0xffffffff
}
