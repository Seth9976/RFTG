// 函数名称: sub_5c9f50
// 虚拟地址: 0x5c9f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9f50(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    
    if (ecx == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 == 0 || *arg1 != ecx + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    if (arg1[0x1a] != 0)
        return (*(ecx + 0x6c))(ecx, arg1, arg2, arg3)
    
    sub_5cce60("Window surface is invalid, please call SDL_GetWindowSurface() to get a new surface")
    return 0xffffffff
}
