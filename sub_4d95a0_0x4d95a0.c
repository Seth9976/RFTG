// 函数名称: sub_4d95a0
// 虚拟地址: 0x4d95a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d95a0()
{
    // 第一条实际指令: void* eax_2 = data_27e7fe0
    void* eax_2 = data_27e7fe0
    
    if (*(eax_2 + 0x1d) != 0)
        *(eax_2 + 0x1d) = 0
        return sub_4d8b30() __tailcall
    
    sub_4c5870("gpSpriteAppData->spritesDrawing", &data_83f3d3, "Sprite.cpp", 0x25d, "SpriteDrawEnd")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
