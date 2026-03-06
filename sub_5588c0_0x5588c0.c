// 函数名称: sub_5588c0
// 虚拟地址: 0x5588c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5588c0(int32_t* arg1 @ esi, void* arg2 @ edi, char* arg3)
{
    // 第一条实际指令: int128_t* eax
    int128_t* eax
    
    if (arg2 s> 0)
        int32_t edx
        eax = sub_4d6cf0(arg3, edx, arg1, arg1[6], arg3, arg2)
        arg1[6] += arg2
    
    void* entry_ebx
    
    if (entry_ebx s<= 0)
        return 
    
    if (arg1[0x15].b != 0)
        void* edx_2 = arg3 + arg2
        sub_4d6cf0(eax, edx_2, arg1, nullptr, edx_2, entry_ebx)
        arg1[6] = entry_ebx
        return 
    
    sub_5abfc0(arg3 + arg2, 0, entry_ebx)
    
    if (arg1[8] == 0)
        arg1[8] = arg1[7] + arg2
}
