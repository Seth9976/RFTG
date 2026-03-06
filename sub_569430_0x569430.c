// 函数名称: sub_569430
// 虚拟地址: 0x569430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_569430()
{
    // 第一条实际指令: void* ecx = data_3079208
    void* ecx = data_3079208
    
    if (ecx == 0)
        return 
    
    int32_t eax = *(ecx + 4)
    
    if (eax == 0x22 || eax == 0x1d || eax == 0x19 || eax == 0x1b || eax == 0x1e || eax == 0x20)
        *(ecx + 0x1c) -= 1
    
    data_3079208 = 0
}
