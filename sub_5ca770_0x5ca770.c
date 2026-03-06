// 函数名称: sub_5ca770
// 虚拟地址: 0x5ca770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca770(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0
    
    if ((arg1[0xc].b & 2) == 0)
        sub_5cce60("The specified window isn't an OpenGL window")
        return 0
    
    int32_t result = (*(eax + 0x94))(eax, arg1)
    
    if (result != 0)
        void* eax_3 = data_bed820
        *(eax_3 + 0x264) = arg1
        *(eax_3 + 0x268) = result
        sub_5d42b0(*(eax_3 + 0x26c), arg1, 0)
        sub_5d42b0(*(data_bed820 + 0x270), result, 0)
    
    return result
}
