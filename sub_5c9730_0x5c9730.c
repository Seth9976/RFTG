// 函数名称: sub_5c9730
// 虚拟地址: 0x5c9730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* constsub_5c9730(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax != 0)
        for (void* const i = *(eax + 0xf0); i != 0; i = *(i + 0x7c))
            if (*(i + 4) == arg1)
                return i
    
    return nullptr
}
