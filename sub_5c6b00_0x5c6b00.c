// 函数名称: sub_5c6b00
// 虚拟地址: 0x5c6b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6b00()
{
    // 第一条实际指令: sub_5ced60("SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS", sub_5c6ad0, 0)
    sub_5ced60("SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS", sub_5c6ad0, 0)
    
    if (sub_5c6730(0x4000) s< 0)
        return 0xffffffff
    
    int32_t result = sub_5d0280()
    
    if (result s< 0)
        return result
    
    return 0
}
