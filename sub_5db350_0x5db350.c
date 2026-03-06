// 函数名称: sub_5db350
// 虚拟地址: 0x5db350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5db350(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == arg2[7])
    if (arg1 == arg2[7])
        return 
    
    int32_t eax_1 = sub_5d5680(nullptr, nullptr)
    sub_5db300(arg1 & 1, eax_1 & 1, arg2, 1)
    sub_5db300(arg1 & 0x10, eax_1 & 2, arg2, 2)
    sub_5db300(arg1 & 2, eax_1 & 4, arg2, 3)
    sub_5db300(arg1 & 0x20, eax_1 & 8, arg2, 4)
    sub_5db300(arg1 & 0x40, eax_1 & 0x10, arg2, 5)
    arg2[7] = arg1
}
