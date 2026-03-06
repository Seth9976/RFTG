// 函数名称: sub_5531d0
// 虚拟地址: 0x5531d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5531d0(int32_t* arg1, int32_t* arg2 @ edi, char* arg3)
{
    // 第一条实际指令: char* eax_1
    char* eax_1
    int32_t edx
    int32_t* entry_ebx
    eax_1, edx = sub_550b50(entry_ebx)
    
    if (eax_1 == 4)
        int32_t eax_2 = *arg2
        
        if (eax_2 == 0 || eax_2 == 8)
            return sub_5514b0(arg1, arg2, entry_ebx)
    else if (eax_1 != 5)
        if (eax_1 == 0xa)
            int32_t eax_6 = *arg2
            
            if (eax_6 == 0 || eax_6 == 0xa)
                return sub_5514b0(arg1, arg2, entry_ebx)
    else if (arg2[6] == 0)
        int32_t eax_4 = *arg2
        
        if (eax_4 == 0 || eax_4 == 5)
            return sub_5514b0(arg1, arg2, entry_ebx)
    
    if (*arg2 != 9)
        return sub_553050(entry_ebx, arg2, arg1)
    
    return sub_551830(arg3, edx, arg1, arg3, arg2, entry_ebx)
}
