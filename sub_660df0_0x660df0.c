// 函数名称: sub_660df0
// 虚拟地址: 0x660df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_660df0(int32_t arg1, int128_t* arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int128_t* arg8)
{
    // 第一条实际指令: int32_t var_14 = arg7
    int32_t var_14 = arg7
    int128_t* var_10 = arg8
    int128_t* eax_2 = sub_660c50(arg1, arg2, arg8, arg3, arg3, arg4, arg5, arg6)
    
    if (eax_2 != 0)
        return eax_2
    
    if (*(arg2 + 0x58) != 1)
        return 0xffffff7d
    
    bool cond:0_1 = *(arg2 + 4) == 0
    *(arg2 + 0x58) = 2
    
    if (cond:0_1)
        *(arg2 + 0x58) = 3
        return nullptr
    
    int32_t eax_5 = sub_660ad0(arg2)
    
    if (eax_5 != 0)
        *arg2 = 0
        sub_65f700(arg2)
    
    return eax_5
}
