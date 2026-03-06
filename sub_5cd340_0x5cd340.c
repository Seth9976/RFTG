// 函数名称: sub_5cd340
// 虚拟地址: 0x5cd340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd340(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: void* eax = sub_5cd1b0(arg1)
    void* eax = sub_5cd1b0(arg1)
    void* eax_2 = sub_5cd1b0(arg2)
    
    if (eax u< arg3)
        sub_5cd270(eax + arg1, arg2, arg3 - eax)
    
    return eax_2 + eax
}
