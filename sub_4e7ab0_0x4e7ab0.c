// 函数名称: sub_4e7ab0
// 虚拟地址: 0x4e7ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4e7ab0(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* result = sub_4eac20(*(eax + 0x2c))
    
    if (result == 0)
        return result
    
    *result = arg1
    __builtin_memcpy(&result[2], 0x83faf8, 0x40)
    result[6].d = data_be4aac
    *(result + 0x64) = data_be4ab0
    *(result + 0x78) = 0xffffffff
    sub_4e7a20(result)
    return result
}
