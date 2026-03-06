// 函数名称: sub_645620
// 虚拟地址: 0x645620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645620(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t eax_1 = *arg1
        
        if (eax_1 != 0)
            __free_base(eax_1)
        
        int32_t eax_2 = arg1[4]
        
        if (eax_2 != 0)
            __free_base(eax_2)
        
        int32_t eax_3 = arg1[5]
        
        if (eax_3 != 0)
            __free_base(eax_3)
        
        sub_5abfc0(arg1, 0, 0x168)
    
    return 0
}
