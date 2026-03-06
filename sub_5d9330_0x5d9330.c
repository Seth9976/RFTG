// 函数名称: sub_5d9330
// 虚拟地址: 0x5d9330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d9330(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc5)
    if (arg1 == 0 || *arg1 != 0xbf7fc5)
        sub_5cce60("Invalid texture")
    else if (arg1[2] == 1)
        if (arg1[0xa] != 0)
            sub_5d9200(arg1)
            return 
        
        if (arg1[9] != 0)
            sub_5d9270()
            return 
        
        void* eax_3 = arg1[8]
        (*(eax_3 + 0x28))(eax_3, arg1)
}
