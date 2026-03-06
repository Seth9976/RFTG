// 函数名称: sub_4a8360
// 虚拟地址: 0x4a8360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a8360(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x48))
    for (int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x48)); i != 0xffffffff; 
            i = sx.d(*(arg3 + ((i * 5 + 0x11d) << 2))))
        if (sx.d(*(arg3 + i * 0x14 + 0x470)) == arg2)
            return i
    
    sub_5a7d4b("Tried to get good where none exists\n")
    sub_5a79f4()
    noreturn
}
