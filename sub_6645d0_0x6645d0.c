// 函数名称: sub_6645d0
// 虚拟地址: 0x6645d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6645d0(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    int16_t eax_1 = *(arg2 + 0x14)
    
    if (eax_1 != 0 && eax_1 u<= 0x100)
        sub_6622f0(arg1, arg2, 8, 0)
        int32_t eax_2 = sub_666560(arg1, 0x200)
        *(arg1 + 0x200) = eax_2
        
        if (eax_2 == 0)
            sub_664100(arg1, "Insufficient memory for hIST chunk data")
            return 
        
        int32_t i = 0
        
        if (0 u< *(arg2 + 0x14))
            int32_t ebx
            int32_t var_10_1 = ebx
            
            do
                ebx.w = *(arg3 + (i << 1))
                *(*(arg1 + 0x200) + (i << 1)) = ebx.w
                i += 1
            while (i s< zx.d(*(arg2 + 0x14)))
        
        int32_t eax_4 = *(arg1 + 0x200)
        *(arg2 + 8) |= 0x40
        *(arg2 + 0xb8) |= 8
        *(arg2 + 0x7c) = eax_4
        return 
    
    sub_664100(arg1, "Invalid palette size, hIST allocation skipped")
}
