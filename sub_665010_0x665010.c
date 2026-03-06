// 函数名称: sub_665010
// 虚拟地址: 0x665010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665010(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x6c) & 0x200) != 0)
    if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x6c) & 0x200) != 0)
        return 
    
    char edx = *(arg3 + 2)
    
    if (edx != 0 && edx u<= 0xc)
        edx = *(arg3 + 3)
        
        if (edx != 0 && edx u<= 0x1f && arg3[1].b u<= 0x17 && *(arg3 + 5) u<= 0x3b
                && *(arg3 + 6) u<= 0x3c)
            *(arg2 + 0x3c) = *arg3
            int32_t eax_2 = arg3[1]
            *(arg2 + 8) |= 0x200
            *(arg2 + 0x40) = eax_2
            return 
    
    sub_664100(arg1, "Ignoring invalid time value")
}
