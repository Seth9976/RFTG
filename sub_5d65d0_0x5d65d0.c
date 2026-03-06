// 函数名称: sub_5d65d0
// 虚拟地址: 0x5d65d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d65d0(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || (*arg1 & 4) != 0)
    if (arg1 == 0 || (*arg1 & 4) != 0)
        return 
    
    *(arg1 + 0x38) -= 1
    
    if (*(arg1 + 0x38) s> 0)
        return 
    
    while (*(arg1 + 0x1c) s> 0)
        sub_5d6380(arg1)
    
    if ((*arg1 & 2) != 0)
        sub_6073a0(arg1, 0)
    
    if (*(arg1 + 4) != 0)
        sub_5d5c80(arg1, nullptr)
        sub_5d86c0(*(arg1 + 4))
        *(arg1 + 4) = 0
    
    int32_t* eax_2 = *(arg1 + 0x34)
    
    if (eax_2 != 0)
        sub_5d85f0(eax_2)
        *(arg1 + 0x34) = 0
    
    if ((*arg1 & 1) == 0)
        int32_t var_c_3 = *(arg1 + 0x14)
        sub_5d0af0()
    
    char* var_c_4 = arg1
    sub_5d0af0()
}
