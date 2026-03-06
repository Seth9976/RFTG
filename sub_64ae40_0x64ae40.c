// 函数名称: sub_64ae40
// 虚拟地址: 0x64ae40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64ae40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    void* edx = *(arg1 + 4)
    
    if (eax s<= 0xffffffff || eax s>= *(arg1 + 0x14))
        return 0
    
    if (arg2 != 0)
        int32_t i = 0
        
        if (*(edx + 4) s> 0)
            do
                *(*(arg1 + 0xc) + (i << 2)) = *(*(arg1 + 8) + (i << 2)) + (*(arg1 + 0x18) << 2)
                i += 1
            while (i s< *(edx + 4))
        
        *arg2 = *(arg1 + 0xc)
    
    return *(arg1 + 0x14) - *(arg1 + 0x18)
}
