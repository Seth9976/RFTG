// 函数名称: sub_5c15c0
// 虚拟地址: 0x5c15c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c15c0(int16_t arg1, int16_t arg2, int128_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x10)
    int32_t* result = sub_5a881a(0x10)
    
    if (result != 0)
        result[1] = arg4
        int32_t eax
        eax.w = arg2
        *result = 0
        result[2].w = arg1
        *(result + 0xa) = eax.w
        
        if (eax.w == 0)
            result[3] = 0
            return result
        
        int128_t* eax_2 = sub_5c38f0(arg3, zx.d(eax.w), nullptr)
        result[3] = eax_2
        
        if (eax_2 != 0)
            return result
        
        __free_base(result)
    
    return 0
}
