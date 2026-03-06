// 函数名称: sub_4d94b0
// 虚拟地址: 0x4d94b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d94b0()
{
    // 第一条实际指令: void* eax_4 = data_27e7fe0
    void* eax_4 = data_27e7fe0
    
    if (*(eax_4 + 0x1d) != 0)
        sub_4c5870("!gpSpriteAppData->spritesDrawing", &data_83f3d3, "Sprite.cpp", 0x251, 
            "SpriteDrawBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(eax_4 + 0x1d) = 1
    sub_4d8a40()
    void* result = data_27e7fe0
    
    if (*(result + 0x1c) == 0)
        *(result + 0x1c) = 1
        sub_509140(5, "sys\Sprite.material")
        sub_4d8760()
        result = data_27e7fe0
    
    if (*(result + 0x18) != 0)
        sub_4c5870("gpSpriteAppData->numBufferSprites == 0", &data_83f3d3, "Sprite.cpp", 0x257, 
            "SpriteDrawBegin")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(result + 0x3c) == 0)
        return result
    
    sub_4c5870("gpSpriteAppData->pLockedVerts == 0", &data_83f3d3, "Sprite.cpp", 0x258, 
        "SpriteDrawBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
