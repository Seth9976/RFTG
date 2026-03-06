// 函数名称: sub_5d8400
// 虚拟地址: 0x5d8400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d8400(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    void* eax_1 = *arg1
    
    if (eax_1 != 0)
        *(eax_1 + 0x38) -= 1
        
        if (*(eax_1 + 0x38) s<= 0)
            sub_5d65d0(*arg1)
    
    int32_t var_c_2 = arg1[0x10]
    *arg1 = 0
    arg1[0x15] = 0
    arg1[0x14] = 0
    sub_5d0af0()
    arg1[0x10] = 0
}
