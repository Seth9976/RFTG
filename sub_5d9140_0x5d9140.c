// 函数名称: sub_5d9140
// 虚拟地址: 0x5d9140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9140(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc5)
    if (arg1 == 0 || *arg1 != 0xbf7fc5)
        sub_5cce60("Invalid texture")
        return 0xffffffff
    
    if (arg1[2] != 1)
        sub_5cce60("SDL_LockTexture(): texture must be streaming")
        return 0xffffffff
    
    int32_t* edx = arg2
    
    if (edx == 0)
        int32_t var_c_1 = arg1[3]
        int32_t var_8_1 = arg1[4]
        int32_t var_14 = 0
        int32_t var_10_1 = 0
        edx = &var_14
    
    if (arg1[0xa] != 0)
        return sub_5d90a0(arg4, edx, arg3, arg1)
    
    if (arg1[9] == 0)
        void* ecx_4 = arg1[8]
        return (*(ecx_4 + 0x24))(ecx_4, arg1, edx, arg3, arg4)
    
    sub_5d90c0(arg1, edx, edx, arg3, arg4)
    return 0
}
