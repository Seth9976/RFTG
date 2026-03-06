// 函数名称: sub_609640
// 虚拟地址: 0x609640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_609640(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    
    if (arg1 == 0xffffff0c || *(arg1 + 0xfc) s<= 0 || *(arg1 + 0x100) s<= 0)
        (*(edi + 0x54))(0xc11)
        return 0
    
    (*(edi + 0x64))(0xc11)
    int32_t eax_1 = *(arg1 + 0x100)
    (*(edi + 0xb8))(*(arg1 + 0xf4), *(arg1 + 0xe0) - *(arg1 + 0xf8) - eax_1, *(arg1 + 0xfc), eax_1)
    return 0
}
