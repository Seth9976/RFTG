// 函数名称: sub_5d47d0
// 虚拟地址: 0x5d47d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d47d0()
{
    // 第一条实际指令: char* eax = sub_5d2340("SDL_VIDEODRIVER")
    char* eax = sub_5d2340("SDL_VIDEODRIVER")
    
    if (eax != 0 && sub_5cd590(eax, "dummy") == 0)
        return 1
    
    return 0
}
