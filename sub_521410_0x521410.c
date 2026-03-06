// 函数名称: sub_521410
// 虚拟地址: 0x521410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_521410(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t* i = data_26a652c
    int32_t* i = data_26a652c
    void* result
    
    while (i != 0)
        void* edx_1 = &i[1]
        i = *i
        
        if (arg1 u>= edx_1 && arg1 u< edx_1 + data_26a6530 * 0x1c
                && mods.dp.d(sx.q(arg1 - edx_1), 0x1c) == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
