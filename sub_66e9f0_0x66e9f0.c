// 函数名称: sub_66e9f0
// 虚拟地址: 0x66e9f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66e9f0(void* arg1, int16_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        *(arg1 + 0x74) |= 0x8000
        *(arg1 + 0x14a) = arg2
        
        if (arg3 != 1)
            *(arg1 + 0x70) &= 0xffffff7f
        else
            *(arg1 + 0x70) |= 0x80
        
        int16_t ecx
        ecx.b = *(arg1 + 0x13b)
        
        if (ecx.b == 2)
            *(arg1 + 0x140) = 4
        
        if (ecx.b == 0 && *(arg1 + 0x13c) u>= 8)
            *(arg1 + 0x140) = 2
    
    return arg1
}
