// 函数名称: sub_5ca980
// 虚拟地址: 0x5ca980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca980(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    if ((arg1[0xc].b & 2) == 0)
        sub_5cce60("The specified window isn't an OpenGL window")
        return 0xffffffff
    
    if (sub_5ca820() == arg1)
        void* eax_4 = data_bed820
        return (*(eax_4 + 0xa8))(eax_4, arg1)
    
    sub_5cce60("The specified window has not been made current")
    return 0xffffffff
}
