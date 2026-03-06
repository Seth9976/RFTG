// 函数名称: sub_656640
// 虚拟地址: 0x656640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_656640(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t eax_1 = arg1[1]
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = arg1[2]
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0
}
