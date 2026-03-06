// 函数名称: sub_6010e0
// 虚拟地址: 0x6010e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6010e0(int32_t* arg1)
{
    // 第一条实际指令: char* eax = sub_5c99c0(arg1, "_SDL_DummySurface")
    char* eax = sub_5c99c0(arg1, "_SDL_DummySurface")
    
    if (eax == 0)
        sub_5cce60("Couldn't find dummy surface for window")
        return 0xffffffff
    
    if (sub_5d2340("SDL_VIDEO_DUMMY_SAVE_FRAMES") != 0)
        int32_t eax_3 = data_bf7ff4 + 1
        int32_t var_90_1 = eax_3
        data_bf7ff4 = eax_3
        int32_t var_94_2 = sub_5c96f0(arg1)
        char var_84[0x80]
        sub_5ce6a0(&var_84, 0x80, "SDL_window%d-%8.8d.bmp")
        sub_611290(eax, sub_5dd900(&var_84, "wb"), 1)
    
    return 0
}
