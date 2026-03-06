// 函数名称: sub_5caec0
// 虚拟地址: 0x5caec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5caec0(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = sub_5c99c0(arg1, "_SDL_WindowTextureData")
    int32_t* eax = sub_5c99c0(arg1, "_SDL_WindowTextureData")
    
    if (eax == 0 || eax[1] == 0)
        sub_5cce60("No window texture data")
        return 0xffffffff
    
    int32_t var_14
    
    if (sub_5d5410(arg1[6], arg1[7], arg3, arg2, &var_14) != 0)
        int32_t ecx_2 = eax[3]
        int32_t var_10
        int32_t eax_7 = sub_5d9e80(eax[1], &var_14, eax[4] * var_14 + ecx_2 * var_10 + eax[2], ecx_2)
        int32_t eax_10
        
        if (eax_7 s>= 0)
            eax_10 = sub_5d96c0(*eax, eax[1], nullptr, nullptr)
        
        if (eax_7 s< 0 || eax_10 s< 0)
            return 0xffffffff
        
        sub_5d9830(*eax)
    
    return 0
}
