// 函数名称: sub_5044e0
// 虚拟地址: 0x5044e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5044e0(void* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t* i = *(arg1 + 4)
    int32_t* i = *(arg1 + 4)
    void* result
    
    while (i != 0)
        void* edx_1 = &i[1]
        i = *i
        
        if (arg2 u>= edx_1 && arg2 u< edx_1 + *(arg1 + 8) * 0x14
                && mods.dp.d(sx.q(arg2 - edx_1), 0x14) == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
