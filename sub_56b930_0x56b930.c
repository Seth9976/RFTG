// 函数名称: sub_56b930
// 虚拟地址: 0x56b930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_56b930()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = data_27e7fd0
    
    if (ecx == 0)
        goto label_56b95c
    
    void** result = (*(*ecx + 0x34))()
    
    if (result.b == 0)
        ecx = data_27e7fd0
    label_56b95c:
        int32_t esi_1 = 0
        
        if (ecx != 0)
            esi_1 = ecx[7]
        
        HWND hWnd = data_30785e0
        result = &data_be1f30
        data_be1f65 = 1
        data_27e7fd0 = &data_be1f30
        
        if (hWnd == 0)
            data_be1f44 = 0x400
            data_be1f48 = 0x300
        else
            RECT rect
            GetClientRect(hWnd, &rect)
            result = data_27e7fd0
            result[5] = rect.right
            result[6] = rect.bottom
        
        result[7] = esi_1
        result[8].b = 1
        result[1] = "Game.xpack"
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
