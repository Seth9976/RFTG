// 函数名称: sub_49c980
// 虚拟地址: 0x49c980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49c980(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 s>= 0)
    if (arg1 s>= 0)
        bool cond:0_1
        
        if (arg1.b s>= 0)
            if ((*(arg3 * 0xb4 + arg2 + 0x2c) & 0x7f) == arg1)
                return 1
            
            cond:0_1 = (*(arg3 * 0xb4 + arg2 + 0x30) & 0x7f) != arg1
        else
            if (*(arg3 * 0xb4 + arg2 + 0x2c) == arg1)
                return 1
            
            cond:0_1 = *(arg3 * 0xb4 + arg2 + 0x30) != arg1
        
        if (not(cond:0_1))
            return 1
    
    return 0
}
