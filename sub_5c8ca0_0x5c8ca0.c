// 函数名称: sub_5c8ca0
// 虚拟地址: 0x5c8ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8ca0()
{
    // 第一条实际指令: if (*(data_bed820 + 0x68) == 0)
    if (*(data_bed820 + 0x68) == 0)
        return 1
    
    int32_t eax_1 = sub_5cec90("SDL_RENDER_DRIVER")
    int32_t eax_2
    
    if (eax_1 != 0)
        char const* const var_4_1 = "software"
        int32_t var_8_1 = eax_1
        eax_2 = sub_5cd5e0()
    
    if (eax_1 == 0 || eax_2 != 0)
        char* eax_3 = sub_5cec90("SDL_FRAMEBUFFER_ACCELERATION")
        
        if (eax_3 != 0)
            int32_t result
            result.b = *eax_3 != 0x30
            return result
    
    return 0
}
