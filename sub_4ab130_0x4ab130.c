// 函数名称: sub_4ab130
// 虚拟地址: 0x4ab130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ab130(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    for (i = sx.d(*(arg1 * 0xb4 + arg2 + 0x44)); i != 0xffffffff; 
            i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2))))
        int32_t ecx_3 = sx.d(*(*(arg2 + i * 0x14 + 0x46c) + 7))
        
        if (ecx_3 s>= 1 && ecx_3 s<= 6)
            i.b = 1
            return i
    
    i.b = 0
    return i
}
