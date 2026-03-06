// 函数名称: sub_664990
// 虚拟地址: 0x664990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664990(void* arg1, void* arg2, int32_t arg3, int128_t* arg4, char* arg5)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    if (arg3 != 1 && arg3 != 2)
        sub_664320(arg1, "Invalid sCAL unit")
        noreturn
    
    char* lpString = arg4
    
    if (lpString == 0)
        sub_664320(arg1, "Invalid sCAL width")
        noreturn
    
    int32_t eax_2 = lstrlenA(lpString)
    int32_t eax_3
    
    if (eax_2 != 0 && *lpString != 0x2d)
        eax_3 = sub_662c30(lpString, eax_2)
    
    if (eax_2 == 0 || *lpString == 0x2d || eax_3 == 0)
        sub_664320(arg1, "Invalid sCAL width")
        noreturn
    
    if (arg5 == 0)
        sub_664320(arg1, "Invalid sCAL height")
        noreturn
    
    int32_t eax_5 = lstrlenA(arg5)
    
    if (eax_5 == 0 || *arg5 == 0x2d)
        sub_664320(arg1, "Invalid sCAL height")
        noreturn
    
    if (sub_662c30(arg5, eax_5) == 0)
        sub_664320(arg1, "Invalid sCAL height")
        noreturn
    
    int32_t eax_7
    eax_7.b = arg3.b
    *(arg2 + 0xdc) = eax_7.b
    int128_t* eax_8 = sub_666560(arg1, eax_2 + 1)
    *(arg2 + 0xe0) = eax_8
    
    if (eax_8 != 0)
        sub_5ab990(eax_8, arg4, eax_2 + 1)
        int128_t* eax_9 = sub_666560(arg1, eax_5 + 1)
        *(arg2 + 0xe4) = eax_9
        
        if (eax_9 != 0)
            sub_5ab990(eax_9, arg5, eax_5 + 1)
            *(arg2 + 8) |= 0x4000
            *(arg2 + 0xb8) |= 0x100
            return 
        
        sub_666530(arg1, *(arg2 + 0xe0))
        *(arg2 + 0xe0) = 0
        sub_664100(arg1, "Memory allocation failed while processing sCAL")
        return 
    
    sub_664100(arg1, "Memory allocation failed while processing sCAL")
}
