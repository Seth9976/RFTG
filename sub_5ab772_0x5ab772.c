// 函数名称: sub_5ab772
// 虚拟地址: 0x5ab772
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5ab772(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax_1 = __getptd()[0x26]
    int32_t* eax_1 = __getptd()[0x26]
    
    while (true)
        if (eax_1 == 0)
            return eax_1 + 1
        
        if (*eax_1 == arg1)
            break
        
        eax_1 = eax_1[1]
    
    return 0
}
