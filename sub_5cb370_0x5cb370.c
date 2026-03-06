// 函数名称: sub_5cb370
// 虚拟地址: 0x5cb370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb370(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi == sub_5ca820() && arg2 == sub_5ca850())
        return 0
    
    void* eax_3 = data_bed820
    
    if (arg2 != 0)
        if (eax_3 == 0)
            sub_5c8d60()
            return 0xffffffff
        
        if (esi == 0 || *esi != eax_3 + 0xf4)
            sub_5cce60("Invalid window")
            return 0xffffffff
        
        if ((esi[0xc].b & 2) == 0)
            sub_5cce60("The specified window isn't an OpenGL window")
            return 0xffffffff
    else
        esi = nullptr
    
    int32_t result = (*(eax_3 + 0x98))(eax_3, esi, arg2)
    
    if (result == 0)
        void* eax_4 = data_bed820
        *(eax_4 + 0x264) = esi
        *(eax_4 + 0x268) = arg2
        sub_5d42b0(*(eax_4 + 0x26c), esi, result)
        sub_5d42b0(*(data_bed820 + 0x270), arg2, result)
    
    return result
}
