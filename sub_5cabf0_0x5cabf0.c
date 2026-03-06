// 函数名称: sub_5cabf0
// 虚拟地址: 0x5cabf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cabf0()
{
    // 第一条实际指令: char* eax = sub_5cec90("SDL_ALLOW_TOPMOST")
    char* eax = sub_5cec90("SDL_ALLOW_TOPMOST")
    
    if (eax == 0)
        return 1
    
    int32_t result
    result.b = *eax != 0x30
    return result
}
