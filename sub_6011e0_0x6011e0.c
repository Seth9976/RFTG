// 函数名称: sub_6011e0
// 虚拟地址: 0x6011e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6011e0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_98 = 0x6c
    int32_t var_98 = 0x6c
    int32_t var_9c = 0
    BITMAPINFO pbmi
    BITMAPINFO* var_a0 = &pbmi
    sub_5cd100()
    int32_t eax = *(arg1 + 8)
    pbmi.bmiHeader.biWidth = *(arg1 + 8)
    int32_t ecx_1 = *(arg1 + 0xc)
    pbmi.bmiHeader.biHeight = neg.d(ecx_1)
    void* ebx_2 = ((eax - (eax & 0x1f) + 0x20) u>> 3) * ecx_1
    pbmi.bmiHeader.biSize = 0x6c
    pbmi.bmiHeader.biPlanes = 1
    pbmi.bmiHeader.biBitCount = 0x20
    pbmi.bmiHeader.biCompression = 3
    int32_t var_54 = 0xff000000
    pbmi.bmiColors[0].rgbBlue = 0
    pbmi.bmiColors[0].rgbGreen = 0
    pbmi.bmiColors[0].rgbRed = 0xff
    pbmi.bmiColors[0].rgbReserved = 0
    int32_t var_5c = 0xff00
    int32_t var_58 = 0xff
    __alloca_probe_16(ebx_2)
    int32_t __saved_edi
    
    if (&__saved_edi == 0)
        sub_5cd050(&__saved_edi)
        return 0
    
    void* var_98_2 = ebx_2
    int32_t var_9c_1 = 0xff
    int32_t* var_a0_1 = &__saved_edi
    sub_5cd100()
    HDC eax_4 = GetDC(nullptr)
    int32_t var_98_3 = 0x14
    int32_t var_9c_2 = 0
    ICONINFO piconinfo
    ICONINFO* var_a0_2 = &piconinfo
    sub_5cd100()
    piconinfo.xHotspot = arg2
    piconinfo.fIcon = 0
    piconinfo.yHotspot = arg3
    int32_t ppvBits
    piconinfo.hbmColor = CreateDIBSection(eax_4, &pbmi, DIB_RGB_COLORS, &ppvBits, nullptr, 0)
    piconinfo.hbmMask = CreateBitmap(*(arg1 + 8), *(arg1 + 0xc), 1, 1, &__saved_edi)
    ReleaseDC(nullptr, eax_4)
    int32_t var_98_6 = *(arg1 + 0x10) * *(arg1 + 0xc)
    int32_t var_9c_3 = *(arg1 + 0x14)
    int32_t ppvBits_1 = ppvBits
    sub_5cd110()
    HICON hIcon = CreateIconIndirect(&piconinfo)
    DeleteObject(piconinfo.hbmColor)
    DeleteObject(piconinfo.hbmMask)
    
    if (hIcon == 0)
        sub_5dc5a0("CreateIconIndirect()")
        return 0
    
    int32_t var_98_10 = 8
    int32_t var_9c_4 = 1
    void* result = sub_5d0ad0()
    
    if (result != 0)
        *(result + 4) = hIcon
        return result
    
    DestroyIcon(hIcon)
    sub_5cd050(0)
    return result
}
