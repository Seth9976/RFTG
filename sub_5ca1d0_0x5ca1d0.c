// 函数名称: sub_5ca1d0
// 虚拟地址: 0x5ca1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* constsub_5ca1d0()
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax != 0)
        for (void* const i = *(eax + 0xf0); i != 0; i = *(i + 0x7c))
            if ((*(i + 0x30) & 0x200) != 0)
                return i
    
    return nullptr
}
