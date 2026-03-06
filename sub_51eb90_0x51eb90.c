// 函数名称: sub_51eb90
// 虚拟地址: 0x51eb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51eb90(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t* i = data_26a651c
    int32_t* i = data_26a651c
    void* result
    
    while (i != 0)
        void* edx_1 = &i[1]
        i = *i
        
        if (arg1 u>= edx_1 && arg1 u< edx_1 + data_26a6520 * 0x24
                && mods.dp.d(sx.q(arg1 - edx_1), 0x24) == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
