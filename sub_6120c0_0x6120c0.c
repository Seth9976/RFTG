// 函数名称: sub_6120c0
// 虚拟地址: 0x6120c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6120c0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg2
    int32_t result = 0
    
    if (esi == 0)
        sub_5cce60("SDL_FillRects() passed NULL rects")
        return 0xffffffff
    
    int32_t i_1 = arg3
    
    if (i_1 s> 0)
        int32_t i
        
        do
            result += sub_611e60(arg1, esi, arg4)
            esi = &esi[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
