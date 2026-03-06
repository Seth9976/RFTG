// 函数名称: sub_518580
// 虚拟地址: 0x518580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_518580(void* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t* i = *(arg1 + 4)
    int32_t* i = *(arg1 + 4)
    
    while (i != 0)
        void* edx_1 = &i[1]
        i = *i
        
        if (arg2 u>= edx_1 && arg2 u< edx_1 + *(arg1 + 8) * 0x314
                && mods.dp.d(sx.q(arg2 - edx_1), 0x314) == 0)
            arg1.b = 1
            return arg1
    
    arg1.b = 0
    return arg1
}
