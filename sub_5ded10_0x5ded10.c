// 函数名称: sub_5ded10
// 虚拟地址: 0x5ded10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ded10(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t* eax_1 = arg1[3]
    
    if (eax_1 != 0)
        sub_5dacb0(eax_1)
    
    int32_t* eax_2 = arg1[4]
    
    if (eax_2 != 0)
        sub_5dacb0(eax_2)
    
    CRITICAL_SECTION* eax_3 = *arg1
    
    if (eax_3 != 0)
        sub_5d1170(eax_3)
    
    int32_t* var_c_4 = arg1
    sub_5d0af0()
}
