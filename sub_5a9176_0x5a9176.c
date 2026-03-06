// 函数名称: sub_5a9176
// 虚拟地址: 0x5a9176
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a9176(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return sub_5a91be(arg1)
    
    if (sub_5a910e(arg1) != 0)
        return 0xffffffff
    
    if ((arg1[3] & 0x4000) == 0)
        return 0
    
    enum WIN32_ERROR eax_3 = sub_5b26fc(__fileno(arg1))
    int32_t eax_4 = neg.d(eax_3)
    return sbb.d(eax_4, eax_4, eax_3 != NO_ERROR)
}
