// 函数名称: sub_5ca150
// 虚拟地址: 0x5ca150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca150()
{
    // 第一条实际指令: char* eax = sub_5cec90("SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS")
    char* eax = sub_5cec90("SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS")
    
    if (eax == 0)
        return 1
    
    int32_t result
    result.b = *eax != 0x30
    return result
}
