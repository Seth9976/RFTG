// 函数名称: sub_66a0e0
// 虚拟地址: 0x66a0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66a0e0(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    int32_t eax = *(esi + 0x288)
    
    if (eax != 0)
        if (eax == 1)
            return sub_667b40(esi, arg3)
        
        *(esi + 0x288) = eax - 1
        
        if (eax == 2)
            sub_664100(esi, "No space in chunk cache for tEXt")
            return sub_667b40(esi, arg3)
    
    int32_t eax_5 = *(esi + 0x6c)
    
    if ((eax_5.b & 1) == 0)
        sub_664320(esi, "Missing IHDR before tEXt")
        noreturn
    
    if ((eax_5.b & 4) != 0)
        *(esi + 0x6c) = eax_5 | 8
    
    sub_666530(esi, *(esi + 0x2a8))
    char* eax_8 = sub_666560(esi, arg3 + 1)
    *(esi + 0x2a8) = eax_8
    
    if (eax_8 == 0)
        return sub_664100(esi, "No memory to process text chunk")
    
    sub_664410(esi, eax_8, arg3)
    sub_662280(esi, eax_8, arg3)
    
    if (sub_667b40(esi, 0) != 0)
        int32_t eax_11 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_11
    
    void* lpString = *(esi + 0x2a8)
    char* eax_12 = lpString + arg3
    *eax_12 = 0
    arg1 = lpString
    
    while (*lpString != 0)
        lpString += 1
    
    if (lpString != eax_12)
        lpString += 1
    
    int32_t* eax_13 = sub_666560(esi, 0x1c)
    
    if (eax_13 == 0)
        sub_664100(esi, "Not enough memory to process text chunk")
        int32_t eax_14 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_14
    
    *eax_13 = 0xffffffff
    eax_13[1] = arg1
    eax_13[5] = 0
    eax_13[6] = 0
    eax_13[4] = 0
    eax_13[2] = lpString
    eax_13[3] = lstrlenA(lpString)
    int32_t eax_16 = sub_664d50(esi, arg2, eax_13, 1)
    sub_666530(esi, *(esi + 0x2a8))
    *(esi + 0x2a8) = 0
    uint32_t eax_18 = sub_666530(esi, eax_13)
    
    if (eax_16 == 0)
        return eax_18
    
    return sub_664100(esi, "Insufficient memory to process text chunk")
}
