// 函数名称: sub_582290
// 虚拟地址: 0x582290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_582290()
{
    // 第一条实际指令: SendMessageA(*(data_26a6554 + 0x18), 0x184, 0, 0)
    SendMessageA(*(data_26a6554 + 0x18), 0x184, 0, 0)
    void* eax = data_26a6554
    
    if (*(eax + 0x1c) != 0)
        DestroyWindow(*(eax + 0x1c))
        *(data_26a6554 + 0x1c) = 0
        eax = data_26a6554
    
    if (*(eax + 0x20) != 0)
        DestroyWindow(*(eax + 0x20))
        *(data_26a6554 + 0x20) = 0
        eax = data_26a6554
    
    SendMessageA(*(eax + 0x14), 0x184, 0, 0)
    return SetWindowTextA(*(data_26a6554 + 0x10), &data_83f3d3)
}
