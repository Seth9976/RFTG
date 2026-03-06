// 函数名称: sub_528410
// 虚拟地址: 0x528410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_528410(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 4) == arg2)
    if (*(arg1 + 4) == arg2)
        return arg1
    
    int32_t i = 0
    
    if (*(arg1 + 0x19d0) s> 0)
        do
            int32_t eax_4
            int32_t edx
            eax_4, edx = sub_528410(sub_525900(i, edx, arg1), arg2)
            
            if (eax_4 != 0)
                return eax_4
            
            i += 1
        while (i s< *(arg1 + 0x19d0))
    
    return 0
}
