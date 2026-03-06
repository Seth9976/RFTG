// 函数名称: sub_5da5d0
// 虚拟地址: 0x5da5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da5d0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0xffffffff
    
    sub_5c7750(sub_5da190, arg1)
    
    while (arg1[0x49] != 0)
        sub_5d9870(arg1[0x49])
    
    int32_t* eax_2 = arg1[0x2f]
    
    if (eax_2 != 0)
        sub_5c98a0(eax_2, "_SDL_WindowRenderData", 0)
    
    int32_t ecx = arg1[0x17]
    *arg1 = 0
    return ecx(arg1)
}
