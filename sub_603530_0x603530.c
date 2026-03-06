// 函数名称: sub_603530
// 虚拟地址: 0x603530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_603530(int32_t arg1 @ ebp, void* arg2, int32_t* arg3, void** arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    void* edi_1 = *(arg2 + 0x74)
    HDC hdc = *(edi_1 + 0xc)
    
    if (hdc != 0)
        DeleteDC(hdc)
    
    HGDIOBJ ho = *(edi_1 + 0x10)
    
    if (ho != 0)
        DeleteObject(ho)
    
    __alloca_probe_16(0x428)
    int32_t var_14_3 = 0x428
    int32_t var_18 = 0
    int32_t* var_1c = &var_10
    sub_5cd100()
    var_10 = 0x28
    HBITMAP eax_1 = CreateCompatibleBitmap(*(edi_1 + 8), 1, 1)
    GetDIBits(*(edi_1 + 8), eax_1, 0, 0, nullptr, &var_10, DIB_RGB_COLORS)
    GetDIBits(*(edi_1 + 8), eax_1, 0, 0, nullptr, &var_10, DIB_RGB_COLORS)
    DeleteObject(eax_1)
    *arg3 = 0
    uint32_t ecx_5
    int32_t eax_6
    
    if (__return_addr != 3)
    label_6035f4:
        int32_t var_14_5 = 0x428
        int32_t var_18_4 = 0
        int32_t* var_1c_3 = &var_10
        *arg3 = 0x16161804
        sub_5cd100()
        var_10 = 0x28
        int32_t var_4 = 0x200001
        __return_addr = nullptr
        eax_6 = *arg3
        
        if (eax_6 != 0)
            goto label_603624
        
        ecx_5 = zx.d(eax_6.b)
    else
        int32_t eax_3 = var_10
        int32_t eax_5 = sub_5d7630(zx.d(arg1:2.w) * zx.d(arg1.w), *(eax_3 + &var_10), 
            *(&var_c + eax_3), *(&var_8 + eax_3), 0)
        *arg3 = eax_5
        
        if (eax_5 == 0)
            goto label_6035f4
        
    label_603624:
        eax_6 = *arg3
        
        if ((eax_6 & 0xf0000000) == 0x10000000)
            ecx_5 = zx.d(eax_6.b)
        else if (eax_6 == 0x32595559 || eax_6 == 0x59565955 || eax_6 == 0x55595659)
            ecx_5 = 2
        else
            ecx_5 = 1
    *arg5 = (*(arg2 + 0x18) * ecx_5 + 3) & 0xfffffffc
    var_c = *(arg2 + 0x18)
    var_8 = neg.d(*(arg2 + 0x1c))
    int32_t arg_4 = *(arg2 + 0x1c) * *arg5
    *(edi_1 + 0xc) = CreateCompatibleDC(*(edi_1 + 8))
    HBITMAP h = CreateDIBSection(*(edi_1 + 8), &var_10, DIB_RGB_COLORS, arg4, nullptr, 0)
    *(edi_1 + 0x10) = h
    
    if (h != 0)
        SelectObject(*(edi_1 + 0xc), h)
        return 0
    
    sub_5dc5a0("Unable to create DIB")
    return 0xffffffff
}
