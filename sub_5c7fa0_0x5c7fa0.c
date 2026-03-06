// 函数名称: sub_5c7fa0
// 虚拟地址: 0x5c7fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7fa0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0x2c
    int32_t var_8 = 0x2c
    int32_t var_c = arg1
    int32_t eax_1 = sub_5cd400()
    
    if (eax_1 != 0)
        int32_t var_8_1 = 0x2c
        int32_t var_c_1 = eax_1 + 1
        void* eax_4 = sub_5cd400()
        
        if (eax_4 != 0)
            return sub_5cd390(eax_4 + 1)
    
    return 0
}
